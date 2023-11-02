
@interface CNMutablePostalAddress : CNPostalAddress

@property (nonatomic, copy) NSString *ISOCountryCode;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *formattedAddress;
@property (nonatomic, copy) NSString *postalCode;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSString *street;
@property (nonatomic, copy) NSString *street1;
@property (nonatomic, copy) NSString *street2;
@property (nonatomic, copy) NSString *subAdministrativeArea;
@property (nonatomic, copy) NSString *subLocality;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)freeze;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)setStreet1:(id)arg1;
- (void)setStreet2:(id)arg1;
- (id)street1;
- (id)street2;

@end
