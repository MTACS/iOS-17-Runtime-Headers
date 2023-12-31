
@interface CRKFetchMeCardResultObject : CATTaskResultObject {
    NSDictionary * _cardInfo;
}

@property (nonatomic, copy) NSDictionary *cardInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCardInfo:(id)arg1;

@end
