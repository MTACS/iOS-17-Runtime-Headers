
@protocol ASDAppStoreChangedObserver <NSObject>

@optional

- (void)service:(ASDAppStoreService *)arg1 badgesDidChange:(NSArray *)arg2;
- (void)service:(ASDAppStoreService *)arg1 didAddBadges:(NSDictionary *)arg2;
- (void)service:(ASDAppStoreService *)arg1 didRemoveBadges:(NSDictionary *)arg2;

@end
