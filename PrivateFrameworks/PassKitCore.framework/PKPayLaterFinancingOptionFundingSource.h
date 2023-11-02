
@interface PKPayLaterFinancingOptionFundingSource : NSObject <PKPayLaterFundingSource> {
    bool  _autoPayment;
    <PKPayLaterFundingSourceDetails> * _details;
    unsigned long long  _type;
}

@property (nonatomic) bool autoPayment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <PKPayLaterFundingSourceDetails> *details;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)autoPayment;
- (id)bankDetails;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)details;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccountFundingSource:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 paymentApplication:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)panSuffix;
- (id)paymentPassDetails;
- (void)setAutoPayment:(bool)arg1;
- (void)setDetails:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (id)unmaskedPanSuffix;

@end
