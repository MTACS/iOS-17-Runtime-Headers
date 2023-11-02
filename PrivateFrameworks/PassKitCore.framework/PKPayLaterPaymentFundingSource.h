
@interface PKPayLaterPaymentFundingSource : NSObject <PKPayLaterFundingSource> {
    <PKPayLaterFundingSourceDetails> * _details;
    NSString * _identifier;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <PKPayLaterFundingSourceDetails> *details;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bankDetails;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)details;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFundingSource:(id)arg1;
- (id)panSuffix;
- (id)paymentPassDetails;
- (void)setDetails:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (id)unmaskedPanSuffix;

@end
