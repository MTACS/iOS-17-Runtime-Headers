
@interface PKPayLaterAccountUserInfo : NSObject <NSCopying, NSSecureCoding> {
    PKPayLaterAccountUserInfoValue * _city;
    CNContact * _contact;
    PKPayLaterAccountUserInfoValue * _dateOfBirth;
    PKPayLaterAccountUserInfoValue * _emailAddress;
    PKPayLaterAccountUserInfoValue * _firstName;
    PKPayLaterAccountUserInfoValue * _lastName;
    PKPayLaterAccountUserInfoValue * _phoneNumber;
    PKPayLaterAccountUserInfoValue * _postalCode;
    PKPayLaterAccountUserInfoValue * _ssn;
    PKPayLaterAccountUserInfoValue * _state;
    PKPayLaterAccountUserInfoValue * _street1;
    PKPayLaterAccountUserInfoValue * _street2;
    PKPayLaterAccountUserInfoValue * _yearlyIncome;
}

@property (nonatomic, retain) PKPayLaterAccountUserInfoValue *city;
@property (nonatomic, retain) PKPayLaterAccountUserInfoValue *dateOfBirth;
@property (nonatomic, retain) PKPayLaterAccountUserInfoValue *emailAddress;
@property (nonatomic, retain) PKPayLaterAccountUserInfoValue *firstName;
@property (nonatomic, retain) PKPayLaterAccountUserInfoValue *lastName;
@property (nonatomic, retain) PKPayLaterAccountUserInfoValue *phoneNumber;
@property (nonatomic, retain) PKPayLaterAccountUserInfoValue *postalCode;
@property (nonatomic, retain) PKPayLaterAccountUserInfoValue *ssn;
@property (nonatomic, retain) PKPayLaterAccountUserInfoValue *state;
@property (nonatomic, retain) PKPayLaterAccountUserInfoValue *street1;
@property (nonatomic, retain) PKPayLaterAccountUserInfoValue *street2;
@property (nonatomic, retain) PKPayLaterAccountUserInfoValue *yearlyIncome;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)city;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateOfBirth;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (bool)hasUserInfo;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastName;
- (id)phoneNumber;
- (id)postalCode;
- (void)setCity:(id)arg1;
- (void)setDateOfBirth:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPostalCode:(id)arg1;
- (void)setSsn:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStreet1:(id)arg1;
- (void)setStreet2:(id)arg1;
- (void)setYearlyIncome:(id)arg1;
- (id)ssn;
- (id)state;
- (id)street1;
- (id)street2;
- (id)yearlyIncome;

@end
