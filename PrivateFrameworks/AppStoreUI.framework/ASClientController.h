
@interface ASClientController : SUClientController {
    bool  _shouldExitAfterPurchases;
}

@property (nonatomic) bool shouldExitAfterPurchases;

- (id)initWithClientIdentifier:(id)arg1;
- (id)initWithClientInterface:(id)arg1;
- (bool)libraryContainsItemIdentifier:(unsigned long long)arg1;
- (id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2;
- (id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2;
- (void)setShouldExitAfterPurchases:(bool)arg1;
- (bool)shouldExitAfterPurchases;

@end
