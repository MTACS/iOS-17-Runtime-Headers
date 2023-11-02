
@interface BMWalletPaymentsCommercePaymentRingSuggestions : BMEventBase <BMStoreData> {
    int  _accountState;
    int  _lastPaymentCategory;
    int  _paidUsingRing;
    int  _paymentAction;
}

@property (nonatomic, readonly) int accountState;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int lastPaymentCategory;
@property (nonatomic, readonly) int paidUsingRing;
@property (nonatomic, readonly) int paymentAction;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (int)accountState;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAccountState:(int)arg1 paidUsingRing:(int)arg2 lastPaymentCategory:(int)arg3 paymentAction:(int)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)lastPaymentCategory;
- (int)paidUsingRing;
- (int)paymentAction;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
