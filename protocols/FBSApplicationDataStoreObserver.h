
@protocol FBSApplicationDataStoreObserver <NSObject>

@optional

- (void)dataStoreMonitor:(FBSApplicationDataStoreMonitor *)arg1 didInvalidateApplication:(NSString *)arg2;
- (void)dataStoreMonitor:(FBSApplicationDataStoreMonitor *)arg1 didUpdateApplication:(NSString *)arg2 forKey:(NSString *)arg3;

@end
