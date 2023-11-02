
@interface PKPeerPaymentAccountFeatureDescriptor : PKAccountFeatureDescriptor <NSSecureCoding> {
    NSArray * _amountSuggestions;
    long long  _endProcessingHour;
    NSDecimalNumber * _feePercentage;
    NSArray * _frequencyOptions;
    NSDecimalNumber * _maximumFee;
    long long  _maximumPayments;
    NSDecimalNumber * _minimumFee;
    double  _proactiveFetchPeriod;
    NSTimeZone * _productTimeZone;
    NSArray * _thresholdSuggestions;
}

@property (nonatomic, copy) NSArray *amountSuggestions;
@property (nonatomic) long long endProcessingHour;
@property (nonatomic, copy) NSDecimalNumber *feePercentage;
@property (nonatomic, retain) NSArray *frequencyOptions;
@property (nonatomic, copy) NSDecimalNumber *maximumFee;
@property (nonatomic) long long maximumPayments;
@property (nonatomic, copy) NSDecimalNumber *minimumFee;
@property (nonatomic) double proactiveFetchPeriod;
@property (nonatomic, copy) NSTimeZone *productTimeZone;
@property (nonatomic, copy) NSArray *thresholdSuggestions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_suggestionsFromStrings:(id)arg1;
- (id)amountSuggestions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)endProcessingHour;
- (id)feePercentage;
- (id)frequencyOptions;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPeerPaymentAccountFeatureDescriptor:(id)arg1;
- (id)maximumFee;
- (long long)maximumPayments;
- (id)minimumFee;
- (double)proactiveFetchPeriod;
- (id)productTimeZone;
- (void)setAmountSuggestions:(id)arg1;
- (void)setEndProcessingHour:(long long)arg1;
- (void)setFeePercentage:(id)arg1;
- (void)setFrequencyOptions:(id)arg1;
- (void)setMaximumFee:(id)arg1;
- (void)setMaximumPayments:(long long)arg1;
- (void)setMinimumFee:(id)arg1;
- (void)setProactiveFetchPeriod:(double)arg1;
- (void)setProductTimeZone:(id)arg1;
- (void)setThresholdSuggestions:(id)arg1;
- (id)thresholdSuggestions;

@end
