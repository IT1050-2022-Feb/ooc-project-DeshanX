#include <iostream>
#include <string>
#define SIZE 10 using
namespace std; 
class User; class
Registered_Tour_guide; class
Register_Tourist; class
System_admin; class
Unregistered_tourist; class
Unregistered_tour_guide; class
Payment; class Booking; class
Promotion; class Package; 
class Places; class Country; 
/////////////////////////////////////// 
//////////////////////////////////////
/ class User { protected: string name; 
string email; string country; public: 
 User(string Pname, string Pemail, string Pcountry); 
void displayDetails(); 
}; 
User::User(string Pname, string Pemail, string Pcountry) 
{ name = Pname; 
email = Pemail; 
country = Pcountry; 
} void
User::displayDetails() 
{} 
/////////////////////////////////////// 
/////////////////////////////////////// class
Registered_Tour_guide : public User { 
protected: 
 int RegistrationTGNo; 
string TourGuideID; 
string gender; string 
dob; Booking* book; 
public : 
 Registered_Tour_guide(string Pname, string Pemail, string Pcountry, int
PRegistrationTGNo, string PTourGuideID, string Pgender, string Pdob, Booking* 
Pbook); void TourGuideDetails(int PRegistrationNo, string PTourGuideID, string 
Pgender, string Pdob); void viewTourGuideDetails(); 
}; 
Registered_Tour_guide::Registered_Tour_guide(string Pname, string Pemail, string 
Pcountry, int PRegistrationTGNo, string PTourGuideID, string Pgender, string 
Pdob, Booking* Pbook):User(Pname, Pemail , Pcountry) 
{ 
 RegistrationTGNo = PRegistrationTGNo; 
TourGuideID = PTourGuideID; gender = 
Pgender; dob = Pdob; book = Pbook; 
} 
void Registered_Tour_guide::TourGuideDetails(int PRegistrationNo, string 
PTourGuideID, string Pgender, string Pdob) 
{} void
Registered_Tour_guide::viewTourGuideDetails() 
{} 
/////////////////////////////////////// 
///////////////////////////////////////
class Register_Tourist : public User { 
private: 
 int RegistrationTONo; 
string TouristID; 
string gender; 
string dob; Booking* 
book; public : 
 Register_Tourist(string Pname, string Pemail, string Pcountry, int
PRegistrationTONo, string PTouristID, string Pgender, string Pdob, Booking* 
Pbook); 
void TouristDetails( int PRegistrationTONo,string PTouristID, string Pgender, 
string Pdob); void
viewTouristDetails(); 
}; 
Register_Tourist::Register_Tourist(string Pname, string Pemail, string Pcountry, 
int PRegistrationTONo, string PTouristID, string Pgender, string Pdob, Booking* 
Pbook) :User(Pname, Pemail , Pcountry) 
{ 
 RegistrationTONo = PRegistrationTONo; 
TouristID = PTouristID; gender = 
Pgender; dob = Pdob; book= Pbook; 
} void Register_Tourist::TouristDetails(int PRegistrationTONo, string 
PTouristID, string Pgender, string Pdob) 
{} void
Register_Tourist::viewTouristDetails() 
{} 
/////////////////////////////////////// 
///////////////////////////////////////
class System_admin : public User { 
protected: 
 string adminID; 
string adminPassword; 
Payment* pay[SIZE]; 
public : 
 System_admin(string Pname, string pemail, string pcountry, string PadminID, 
string PadminPassword, Payment* Ppay[SIZE]); void AddCountries(); void
Addplaces(); 
}; 
System_admin::System_admin(string Pname, string Pemail, string Pcountry, string 
PadminID, string PadminPassword, Payment* Ppay[SIZE]) :User(Pname, Pemail, 
Pcountry) { 
 adminID = PadminID; 
adminPassword = PadminPassword; 
for(int i=0;i<SIZE;i++) 
 { 
 pay[i] = Ppay[i]; 
 } 
} void
System_admin::AddCountries() 
{} void
System_admin::Addplaces() 
{} 
/////////////////////////////////////// 
/////////////////////////////////////// class
Unregistered_tourist : public User { public: 
 Unregistered_tourist(string Pname, string Pemail, string Pcountry); 
void viewDetails(); 
}; 
Unregistered_tourist::Unregistered_tourist(string Pname, string Pemail, string 
Pcountry):User(Pname, Pemail, Pcountry) 
{} void
Unregistered_tourist::viewDetails() 
{} 
/////////////////////////////////////// 
/////////////////////////////////////// class
Unregistered_tour_guide : public User{ 
public: 
 Unregistered_tour_guide(string Pname, string Pemail, string Pcountry); 
void viewDetails(); 
}; 
Unregistered_tour_guide::Unregistered_tour_guide(string Pname, string Pemail, 
string Pcountry):User(Pname, Pemail, Pcountry) 
{} 
void Unregistered_tour_guide::viewDetails() 
{} 
/////////////////////////////////////// 
///////////////////////////////////////
class Payment { private: 
 string PaymentID; 
string paymentMethod; 
 int paymentAmount; 
Package* pkg; 
 System_admin* admin; 
public: 
 Payment(string PPaymentID, string PpaymentMethod, int PpaymentAmount); 
 Payment(string PPaymentID, string PpaymentMethod, int PpaymentAmount, Package* 
Ppkg, System_admin* Padmin); void paymentDetails(); void calcPayment(); 
void viewPaymentDetails(); 
}; 
Payment::Payment(string PPaymentID, string PpaymentMethod, int PpaymentAmount) { 
 PaymentID = PPaymentID; 
paymentMethod = PpaymentMethod; 
paymentAmount = PpaymentAmount; 
} 
Payment::Payment(string PPaymentID, string PpaymentMethod, int PpaymentAmount, 
Package* Ppkg, System_admin* Padmin) 
{ 
 PaymentID = PPaymentID; 
paymentMethod = PpaymentMethod; 
paymentAmount = PpaymentAmount; admin 
= Padmin; 
} 
void Payment::paymentDetails() 
{} 
void Payment::calcPayment() 
{} 
void Payment::viewPaymentDetails() 
{} 
/////////////////////////////////////// 
///////////////////////////////////////
class Booking 
{ private: 
string BookingID; 
 Country* con; 
 Package* pkg; 
 Register_Tourist* tourist; 
 Registered_Tour_guide* tourGuide[SIZE]; 
Payment* pay[SIZE]; public: 
 Booking(string PBookingID, Country* Pcon, Package* Ppkg, Register_Tourist* 
Ptourist, Registered_Tour_guide* PtourGuide[SIZE]); 
 Booking(string PpayID1, string PpayID2, string PpayM1, string PpayM2,int
PpayAm1,int PpayAm2); void BookingDetails(); void
viewBookingDetails(); 
 ~Booking(); 
}; 
Booking::Booking(string PBookingID, Country* Pcon, Package* Ppkg, 
Register_Tourist* Ptourist, Registered_Tour_guide* PtourGuide[SIZE]) 
{ 
 BookingID = PBookingID; 
con = Pcon; pkg = Ppkg; 
tourist = Ptourist; 
 for(int
i=0;i<SIZE;i++) 
 { tourGuide[i] = 
PtourGuide[i]; 
 } 
} 
Booking::Booking(string PpayID1, string PpayID2, string PpayM1, string PpayM2, 
int PpayAm1, int PpayAm2) 
{ 
 pay[0]= new Payment( PpayID1, PpayM1, PpayAm1); 
pay[1]= new Payment( PpayID2, PpayM2, PpayAm2); 
} 
void Booking::BookingDetails() 
{} 
void Booking::viewBookingDetails() 
{} 
Booking::~Booking() 
{ for(int
i=0;i<SIZE;i++) { 
delete pay[i]; 
 } 
} 
/////////////////////////////////////// 
///////////////////////////////////////
class Promotion { private: 
 string PromotionID; 
string PromotionName; 
public: 
 Promotion(string PPromotionID, string PPromotionName); void
PromotionDetails(string PPromotionID, string PPromotionName); 
void viewPromotionDetails(); 
}; 
Promotion::Promotion(string PPromotionID,string PPromotionName) 
{ 
 PromotionID = PPromotionID; 
 PromotionName = PPromotionName; 
} void Promotion::PromotionDetails(string PPromotionID, string 
PPromotionName) {} void Promotion::viewPromotionDetails() 
{} 
/////////////////////////////////////// 
///////////////////////////////////////
class Package { private: 
 string PackageID; 
int PackageValue; 
 Booking* book[SIZE]; 
 Payment* pay; 
 Promotion* prom[SIZE]; 
 Register_Tourist* tourist[SIZE]; 
 Unregistered_tourist* UN_tourist[SIZE]; 
Unregistered_tour_guide* UN_tourGuide[SIZE]; public: 
void promoDetails(Promotion *prom1, Promotion *prom2); 
void PackageDetails(string PPackageID,int PPackageValue, 
Booking* Pbook[SIZE], 
Payment* Ppay, Promotion* Pprom[SIZE], Register_Tourist* Ptourist[SIZE], 
Unregistered_tourist* PUN_tourist[SIZE], Unregistered_tour_guide* 
PUN_tourGuide[SIZE]); void viewPackageDetails(); 
}; void Package::promoDetails(Promotion *prom1, Promotion 
*prom2) 
{ prom[0] = 
prom1; prom[2] = 
prom2; 
} 
void Package::PackageDetails(string PPackageID,int PPackageValue, Booking* 
Pbook[SIZE], Payment* Ppay, Promotion* Pprom[SIZE], Register_Tourist* 
Ptourist[SIZE], Unregistered_tourist* PUN_tourist[SIZE], Unregistered_tour_guide* 
PUN_tourGuide[SIZE]) 
{ 
 PackageID = PPackageID; 
PackageValue = PPackageValue; 
for(int i=0;i<SIZE;i++) 
 { 
book[i]=Pbook[i]; 
 } pay = 
Ppay; 
 for(int i=0;i<SIZE;i++) 
 { 
prom[i]=Pprom[i]; 
 } for(int
i=0;i<SIZE;i++) 
 { 
 tourist[i]=Ptourist[i]; 
 } 
 for(int i=0;i<SIZE;i++) 
 { 
 UN_tourist[i]=PUN_tourist[i]; 
 } 
 for(int i=0;i<SIZE;i++) 
 { 
 UN_tourGuide[i]=PUN_tourGuide[i]; 
 } 
} void
Package::viewPackageDetails() {}
/////////////////////////////////////// 
///////////////////////////////////////
class Places { private: 
 string PlaceID; 
string PlaceName; 
public: 
 Places(string PPlaceID, string PPlaceName); void
PlaceDetails(string PPlaceID, string PPlaceName); 
void viewCountryDetails(); 
}; 
Places::Places(string PPlaceID,string PPlaceName) 
{ 
 PlaceID = PPlaceID; 
 PlaceName = PPlaceName; 
} void Places::PlaceDetails(string PPlaceID, string 
PPlaceName) 
{} void
Places::viewCountryDetails() 
{} 
/////////////////////////////////////// 
///////////////////////////////////////
class Country { private: 
 string CountryID; 
string CountryName; 
Booking* book[SIZE]; 
 Places* plc[SIZE]; 
 Registered_Tour_guide* tourGuide[SIZE]; 
 System_admin* admin; 
 Register_Tourist* tourist[SIZE]; 
public: 
 Country(string PCountryID, string PCountryName, Booking* Pbook[SIZE], Places 
*Pplc[SIZE] ,Registered_Tour_guide* PtourGuide[SIZE], System_admin* Padmin, 
Register_Tourist* Ptourist[SIZE]); 
 Country(string PplaID1, string PplaID2, string PplaNa1, string PplaNa2); 
void CountryDetails(string PCountryID,string PCountryName); 
};
Country::Country(string PCountryID, string PCountryName, Booking* Pbook[SIZE], 
Places *Pplc[SIZE] ,Registered_Tour_guide* PtourGuide[SIZE], System_admin* 
Padmin, Register_Tourist* Ptourist[SIZE]) 
{ 
 CountryID = PCountryID; 
CountryName = PCountryName; for(int
i=0;i<SIZE;i++) 
 { book[i] = 
Pbook[i]; 
 } for(int
i=0;i<SIZE;i++) 
 { plc[i] = 
Pplc[i]; 
 } for(int
i=0;i<SIZE;i++) 
 { tourGuide[i] = 
PtourGuide[i]; 
 } for(int
i=0;i<SIZE;i++) 
 { tourist[i] = 
Ptourist[i]; 
 } 
} 
Country::Country(string PplaID1, string PplaID2,string PplaNa1, string PplaNa2) 
{ plc[0] = new Places(PplaID1, 
PplaNa1); plc[1] = new Places(PplaID2, 
PplaNa2); 
} void Country::CountryDetails(string PCountryID,string 
PCountryName) 
{ 
} 
/////////////////////////////////////// 
///////////////////////////////////////
int main(){ 
User *user; 
Registered_Tour_guide *registeredtourguide; 
Register_Tourist *registertourist; 
Booking *booking; 
Unregistered_tourist *unregisteredtourist; 
Unregistered_tour_guide *unregisteredtourguide; 
Payment *payment; 
Promotion *promotion; 
Places *places; 
Country *country; 
Country *bd; 
System_admin *admin; 
Package *package; 
user = new User("Adam","adam@gmail.com","England"); 
payment = new Payment ("P100","credit 
card",100); 
registeredtourguide = new
Registered_Tour_guide("Ariana","ariana@yahoo.com","America",1222,"TG10254","Femal 
e","1993-06-23",booking); 
registertourist = new Register_Tourist("Ed 
Sheeran","ed@outlook.com","Scotland",2585,"TO125578","Male","1983-11-
22",booking); 
unregisteredtourguide = new
Unregistered_tour_guide("Taylor","taylor@yahoo.com","Brazil"); 
promotion = new
Promotion("P101","promo1"); 
places = new
Places("plc100","Venice"); 
bd= new Country("SA0125", "US0128","AU1587", 
"NZ15478"); 
booking = new Booking("B100",country, package, 
registertourist,registeredtourguide); 
package = new Package("PK1012",1000,booking, 
payment,promotion,registeredtourguide, unregisteredtourist 
,unregisteredtourguide); 
admin = new
System_admin("Administrator","admin@gmail.com","ID2908","******",payment); 
country = new
Country("C100","Italy",booking,registeredtourguide,admin,registertourist); 
} 