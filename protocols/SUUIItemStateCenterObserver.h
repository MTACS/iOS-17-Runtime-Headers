
@protocol SUUIItemStateCenterObserver <NSObject>

@optional

- (void)itemStateCenter:(SUUIItemStateCenter *)arg1 didFinishPurchases:(NSArray *)arg2;
- (void)itemStateCenter:(SUUIItemStateCenter *)arg1 didFinishSoftwarePurchases:(NSArray *)arg2;
- (void)itemStateCenter:(SUUIItemStateCenter *)arg1 itemStatesChanged:(NSSet *)arg2;
- (void)itemStateCenterMediaLibrariesDidChange:(SUUIItemStateCenter *)arg1;
- (void)itemStateCenterRestrictionsChanged:(SUUIItemStateCenter *)arg1;

@end
