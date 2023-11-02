
@interface PKSavingsAccountDetails : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountNumber;
    PKSavingsAccountSummary * _accountSummary;
    NSString * _businessChatIdentifier;
    NSString * _contactNumber;
    NSURL * _contactWebsite;
    NSString * _countryCode;
    NSDate * _createdDate;
    NSString * _currencyCode;
    bool  _fccStepUpRequired;
    NSDate * _lastUpdatedDate;
    bool  _moreInfoRequired;
    NSURL * _privacyPolicyURL;
    NSTimeZone * _productTimeZone;
    NSString * _routingNumber;
    bool  _termsAcceptanceRequired;
    NSString * _termsIdentifier;
}

@property (nonatomic, copy) NSString *accountNumber;
@property (nonatomic, retain) PKSavingsAccountSummary *accountSummary;
@property (nonatomic, copy) NSString *businessChatIdentifier;
@property (nonatomic, copy) NSString *contactNumber;
@property (nonatomic, copy) NSURL *contactWebsite;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSDate *createdDate;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic) bool fccStepUpRequired;
@property (nonatomic, copy) NSDate *lastUpdatedDate;
@property (nonatomic) bool moreInfoRequired;
@property (nonatomic, copy) NSURL *privacyPolicyURL;
@property (nonatomic, retain) NSTimeZone *productTimeZone;
@property (nonatomic, copy) NSString *routingNumber;
@property (nonatomic) bool termsAcceptanceRequired;
@property (nonatomic, copy) NSString *termsIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountNumber;
- (id)accountSummary;
- (id)businessChatIdentifier;
- (id)contactNumber;
- (id)contactWebsite;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)createdDate;
- (id)currencyCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)fccStepUpRequired;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastUpdatedDate;
- (bool)moreInfoRequired;
- (id)privacyPolicyURL;
- (id)productTimeZone;
- (id)routingNumber;
- (void)setAccountNumber:(id)arg1;
- (void)setAccountSummary:(id)arg1;
- (void)setBusinessChatIdentifier:(id)arg1;
- (void)setContactNumber:(id)arg1;
- (void)setContactWebsite:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setCreatedDate:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setFccStepUpRequired:(bool)arg1;
- (void)setLastUpdatedDate:(id)arg1;
- (void)setMoreInfoRequired:(bool)arg1;
- (void)setPrivacyPolicyURL:(id)arg1;
- (void)setProductTimeZone:(id)arg1;
- (void)setRoutingNumber:(id)arg1;
- (void)setTermsAcceptanceRequired:(bool)arg1;
- (void)setTermsIdentifier:(id)arg1;
- (bool)termsAcceptanceRequired;
- (id)termsIdentifier;

@end
