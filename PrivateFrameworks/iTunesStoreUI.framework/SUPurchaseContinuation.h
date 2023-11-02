
@interface SUPurchaseContinuation : SUContinuation {
    id  _purchase;
    SUPurchaseManager * _purchaseManager;
}

@property (nonatomic, readonly) id purchase;
@property (nonatomic) SUPurchaseManager *purchaseManager;

- (void)cancel;
- (void)dealloc;
- (id)initWithPurchase:(id)arg1;
- (id)purchase;
- (id)purchaseManager;
- (void)setPurchaseManager:(id)arg1;
- (void)start;

@end
