
@interface NPKTestAddPaymentPassRequestContext : NSObject {
    NSString * _cardEncryptionScheme;
    NSString * _cardFlow;
    NSString * _cardID;
    NSString * _cardIssuer;
    NSString * _cardPNO;
    NSString * _cardProduct;
    NSString * _cardType;
}

@property (nonatomic, retain) NSString *cardEncryptionScheme;
@property (nonatomic, retain) NSString *cardFlow;
@property (nonatomic, retain) NSString *cardID;
@property (nonatomic, retain) NSString *cardIssuer;
@property (nonatomic, retain) NSString *cardPNO;
@property (nonatomic, retain) NSString *cardProduct;
@property (nonatomic, retain) NSString *cardType;

- (void).cxx_destruct;
- (id)cardEncryptionScheme;
- (id)cardFlow;
- (id)cardID;
- (id)cardIssuer;
- (id)cardPNO;
- (id)cardProduct;
- (id)cardType;
- (void)setCardEncryptionScheme:(id)arg1;
- (void)setCardFlow:(id)arg1;
- (void)setCardID:(id)arg1;
- (void)setCardIssuer:(id)arg1;
- (void)setCardPNO:(id)arg1;
- (void)setCardProduct:(id)arg1;
- (void)setCardType:(id)arg1;

@end
