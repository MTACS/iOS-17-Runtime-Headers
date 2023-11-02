
@interface DIIdentityElement : NSObject <NSCopying> {
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *identifier;

+ (id)addressElement;
+ (id)ageElement;
+ (id)ageThresholdElementWithAge:(long long)arg1;
+ (id)dateOfBirthElement;
+ (id)documentExpirationDateElement;
+ (id)documentIssueDateElement;
+ (id)documentNumberElement;
+ (id)drivingPrivilegesElement;
+ (id)familyNameElement;
+ (id)givenNameElement;
+ (id)issuingAuthorityElement;
+ (id)portraitElement;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;

@end
