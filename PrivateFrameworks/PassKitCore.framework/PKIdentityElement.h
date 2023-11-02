
@interface PKIdentityElement : NSObject <NSCopying> {
    DIIdentityElement * _wrapped;
}

@property (nonatomic, retain) DIIdentityElement *wrapped;

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
- (id)asDIIdentityElement;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithDIIdentityElement:(id)arg1;
- (void)setWrapped:(id)arg1;
- (id)wrapped;

@end
