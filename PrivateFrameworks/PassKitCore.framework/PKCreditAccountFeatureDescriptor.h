
@interface PKCreditAccountFeatureDescriptor : PKAccountFeatureDescriptor {
    unsigned long long  _maximumAccountUsers;
    unsigned long long  _minimumOwnerAge;
    unsigned long long  _minimumParticipantAge;
    unsigned long long  _paymentFrequencies;
    unsigned long long  _paymentFundingSourceTypes;
    unsigned long long  _paymentPresets;
    NSString * _paymentTermsIdentifier;
    NSDecimalNumber * _savingsAPY;
    NSDecimalNumber * _savingsInterestRate;
    NSArray * _supportedDestinations;
    NSArray * _supportedFileFormatsForTransactionData;
}

@property (nonatomic) unsigned long long maximumAccountUsers;
@property (nonatomic) unsigned long long minimumOwnerAge;
@property (nonatomic) unsigned long long minimumParticipantAge;
@property (nonatomic) unsigned long long paymentFrequencies;
@property (nonatomic) unsigned long long paymentFundingSourceTypes;
@property (nonatomic) unsigned long long paymentPresets;
@property (nonatomic, copy) NSString *paymentTermsIdentifier;
@property (nonatomic, copy) NSDecimalNumber *savingsAPY;
@property (nonatomic, copy) NSDecimalNumber *savingsInterestRate;
@property (nonatomic, copy) NSArray *supportedDestinations;
@property (nonatomic, copy) NSArray *supportedFileFormatsForTransactionData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCreditAccountFeatureDescriptor:(id)arg1;
- (unsigned long long)maximumAccountUsers;
- (unsigned long long)minimumOwnerAge;
- (unsigned long long)minimumParticipantAge;
- (unsigned long long)paymentFrequencies;
- (unsigned long long)paymentFundingSourceTypes;
- (unsigned long long)paymentPresets;
- (id)paymentTermsIdentifier;
- (id)productForFeature:(unsigned long long)arg1;
- (id)savingsAPY;
- (id)savingsInterestRate;
- (void)setMaximumAccountUsers:(unsigned long long)arg1;
- (void)setMinimumOwnerAge:(unsigned long long)arg1;
- (void)setMinimumParticipantAge:(unsigned long long)arg1;
- (void)setPaymentFrequencies:(unsigned long long)arg1;
- (void)setPaymentFundingSourceTypes:(unsigned long long)arg1;
- (void)setPaymentPresets:(unsigned long long)arg1;
- (void)setPaymentTermsIdentifier:(id)arg1;
- (void)setSavingsAPY:(id)arg1;
- (void)setSavingsInterestRate:(id)arg1;
- (void)setSupportedDestinations:(id)arg1;
- (void)setSupportedFileFormatsForTransactionData:(id)arg1;
- (id)supportedDestinations;
- (id)supportedFileFormatsForTransactionData;

@end
