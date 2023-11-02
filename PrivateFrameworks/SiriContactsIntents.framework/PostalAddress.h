
@interface PostalAddress : INObject

@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *handleLabel;
@property (nonatomic, copy) NSString *isoCountryCode;
@property (nonatomic, copy) NSString *postalCode;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSString *street;
@property (nonatomic, copy) NSString *subAdministrativeArea;
@property (nonatomic, copy) NSString *subLocality;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
