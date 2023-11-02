
@interface IMCoreAccountsMonitor : NSObject {
    ACAccount * _cachedPrimaryAppleAccount;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) bool isSignedIntoiCloud;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_cachedPrimaryAppleAccount;
- (void)accountStoreDidChange:(id)arg1;
- (id)init;
- (bool)isSignedIntoiCloud;

@end
