
@interface SKProductStorePromotionController : NSObject

+ (id)defaultController;

- (void)_clearPromotionInfo;
- (void)_fetchProductsForPromotionOrder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchStorePromotionOrderWithCompletionHandler:(id /* block */)arg1;
- (void)fetchStorePromotionVisibilityForProduct:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateStorePromotionOrder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateStorePromotionVisibility:(long long)arg1 forProduct:(id)arg2 completionHandler:(id /* block */)arg3;

@end
