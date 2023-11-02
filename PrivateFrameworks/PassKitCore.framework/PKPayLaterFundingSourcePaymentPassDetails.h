
@interface PKPayLaterFundingSourcePaymentPassDetails : NSObject <PKPayLaterFundingSourceDetails> {
    NSString * _cardName;
    long long  _cardNetwork;
    NSString * _cardSuffix;
    unsigned long long  _cardType;
    NSString * _dpanIdentifier;
    NSString * _fpanIdentifier;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *cardName;
@property (nonatomic) long long cardNetwork;
@property (nonatomic, copy) NSString *cardSuffix;
@property (nonatomic) unsigned long long cardType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *dpanIdentifier;
@property (nonatomic, copy) NSString *fpanIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardName;
- (long long)cardNetwork;
- (id)cardSuffix;
- (unsigned long long)cardType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dpanIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)fpanIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithPaymentPass:(id)arg1 paymentApplication:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDetails:(id)arg1;
- (void)setCardName:(id)arg1;
- (void)setCardNetwork:(long long)arg1;
- (void)setCardSuffix:(id)arg1;
- (void)setCardType:(unsigned long long)arg1;
- (void)setDpanIdentifier:(id)arg1;
- (void)setFpanIdentifier:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
