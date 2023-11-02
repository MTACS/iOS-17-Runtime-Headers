
@interface PKPaymentEligibilityResponse : PKPaymentWebServiceResponse {
    NSString * _applicationIdentifier;
    long long  _cardType;
    NSString * _credentialAuthorityIdentifier;
    unsigned long long  _deviceProvisioningDataExpected;
    NSString * _dpanIdentifier;
    long long  _eligibilityStatus;
    NSSet * _enableRequirements;
    NSData * _fidoChallenge;
    PKPaymentEligibilityFIDOProfile * _fidoProfile;
    NSString * _fpanIdentifier;
    NSString * _identifier;
    NSURL * _learnMoreURL;
    NSString * _nonce;
    NSArray * _paymentApplications;
    NSString * _region;
    NSString * _sanitizedPrimaryAccountNumber;
    long long  _supersededBy;
    PKPaymentEligibilitySupplementaryData * _supplementaryData;
    bool  _supportsVirtualCardNumber;
    NSString * _termsID;
    NSURL * _termsURL;
    NSDictionary * _transactionKeyInformation;
}

@property (nonatomic, readonly, copy) NSString *applicationIdentifier;
@property (nonatomic, readonly) long long cardType;
@property (nonatomic, readonly, copy) NSString *credentialAuthorityIdentifier;
@property (nonatomic, readonly) unsigned long long deviceProvisioningDataExpected;
@property (nonatomic, readonly, copy) NSString *dpanIdentifier;
@property (nonatomic, readonly) long long eligibilityStatus;
@property (nonatomic, readonly, copy) NSData *fidoChallenge;
@property (nonatomic, readonly, copy) PKPaymentEligibilityFIDOProfile *fidoProfile;
@property (nonatomic, readonly, copy) NSString *fpanIdentifier;
@property (nonatomic, readonly) bool hasEnableRequirements;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSURL *learnMoreURL;
@property (nonatomic, readonly, copy) NSString *nonce;
@property (nonatomic, readonly) NSArray *paymentApplications;
@property (nonatomic, readonly, copy) NSString *region;
@property (nonatomic, readonly, copy) NSString *sanitizedPrimaryAccountNumber;
@property (nonatomic, readonly) bool shouldGenerateFidoKey;
@property (nonatomic, readonly) bool shouldGenerateISO18013EncryptionKey;
@property (nonatomic, readonly) bool shouldGenerateLongTermPrivacyKey;
@property (nonatomic, readonly) bool shouldGenerateTransactionKey;
@property (nonatomic, readonly) bool shouldSignFidoChallenge;
@property (nonatomic, readonly) long long supersededBy;
@property (nonatomic, readonly, copy) PKPaymentEligibilitySupplementaryData *supplementaryData;
@property (nonatomic, readonly) bool supportsVirtualCardNumber;
@property (nonatomic, readonly, copy) NSString *termsID;
@property (nonatomic, readonly, copy) NSURL *termsURL;
@property (nonatomic, readonly, copy) NSDictionary *transactionKeyInformation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (long long)cardType;
- (id)credentialAuthorityIdentifier;
- (unsigned long long)deviceProvisioningDataExpected;
- (id)dpanIdentifier;
- (long long)eligibilityStatus;
- (id)fidoChallenge;
- (id)fidoProfile;
- (id)fpanIdentifier;
- (bool)hasEnableRequirements;
- (id)identifier;
- (id)initWithData:(id)arg1;
- (id)learnMoreURL;
- (id)nonce;
- (id)paymentApplications;
- (id)region;
- (id)sanitizedPrimaryAccountNumber;
- (bool)shouldGenerateFidoKey;
- (bool)shouldGenerateISO18013EncryptionKey;
- (bool)shouldGenerateLongTermPrivacyKey;
- (bool)shouldGenerateTransactionKey;
- (bool)shouldSignFidoChallenge;
- (long long)supersededBy;
- (id)supplementaryData;
- (bool)supportsVirtualCardNumber;
- (id)termsID;
- (id)termsURL;
- (id)transactionKeyInformation;

@end
