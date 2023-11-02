
@protocol SKUIItemStateCenterObserver <NSObject>

@optional

- (void)itemStateCenter:(SKUIItemStateCenter *)arg1 didFinishPurchases:(NSArray *)arg2;
- (void)itemStateCenter:(SKUIItemStateCenter *)arg1 didFinishSoftwarePurchases:(NSArray *)arg2;
- (void)itemStateCenter:(SKUIItemStateCenter *)arg1 itemStatesChanged:(NSSet *)arg2;
- (void)itemStateCenterMediaLibrariesDidChange:(SKUIItemStateCenter *)arg1;
- (void)itemStateCenterRestrictionsChanged:(SKUIItemStateCenter *)arg1;

@end
