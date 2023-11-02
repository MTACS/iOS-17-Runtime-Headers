
@protocol PKPayLaterFundingSource <NSObject, NSSecureCoding, NSCopying>

@required

- (PKPayLaterFundingSourceBankDetails *)bankDetails;
- (<PKPayLaterFundingSourceDetails> *)details;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)displayName;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (NSString *)panSuffix;
- (PKPayLaterFundingSourcePaymentPassDetails *)paymentPassDetails;
- (void)setDetails:(id <PKPayLaterFundingSourceDetails>)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (NSString *)unmaskedPanSuffix;

@end
