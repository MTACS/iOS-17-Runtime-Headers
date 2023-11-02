
@interface WFStreetAddress : NSObject <WFNaming, WFSerializableContent> {
    NSString * _addressString;
    NSString * _city;
    NSString * _country;
    NSString * _isoCountryCode;
    NSString * _label;
    CLPlacemark * _placemark;
    CNPostalAddress * _postalAddress;
    NSString * _postalCode;
    NSString * _state;
    NSString * _street;
    NSString * _subAdministrativeArea;
    NSString * _subLocality;
}

@property (nonatomic, readonly) NSString *addressString;
@property (nonatomic, readonly) NSString *city;
@property (nonatomic, readonly) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *isoCountryCode;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *localizedLabel;
@property (nonatomic, readonly) CLPlacemark *placemark;
@property (nonatomic, readonly) CNPostalAddress *postalAddress;
@property (nonatomic, readonly) NSString *postalCode;
@property (nonatomic, readonly) NSString *shortAddressString;
@property (nonatomic, readonly) NSString *state;
@property (nonatomic, readonly) NSString *street;
@property (nonatomic, readonly) NSString *subAdministrativeArea;
@property (nonatomic, readonly) NSString *subLocality;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)streetAddressWithPlacemark:(id)arg1 label:(id)arg2;
+ (id)streetAddressWithPostalAddress:(id)arg1 label:(id)arg2;
+ (id)streetAddressWithStreet:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8 label:(id)arg9;
+ (id)streetAddressWithTextCheckingResult:(id)arg1;
+ (id)streetAddressesInString:(id)arg1 error:(id*)arg2;
+ (bool)stringContainsStreetAddresses:(id)arg1;

- (void).cxx_destruct;
- (id)addressString;
- (id)city;
- (id)country;
- (unsigned long long)hash;
- (id)initWithPostalAddress:(id)arg1 placemark:(id)arg2 formattedAddress:(id)arg3 label:(id)arg4;
- (id)initWithStreet:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8 placemark:(id)arg9 formattedAddress:(id)arg10 label:(id)arg11;
- (bool)isEqual:(id)arg1;
- (id)isoCountryCode;
- (id)label;
- (id)localizedLabel;
- (id)placemark;
- (id)postalAddress;
- (id)postalCode;
- (id)shortAddressString;
- (id)state;
- (id)street;
- (id)streetAddressWithLabel:(id)arg1;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)wfName;
- (id)wfSerializedRepresentation;

@end
