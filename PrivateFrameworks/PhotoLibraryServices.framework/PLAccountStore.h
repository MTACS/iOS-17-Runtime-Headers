
@interface PLAccountStore : ACAccountStore {
    ACAccount * _cachedPrimaryAppleAccount;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) ACAccount *cachedPrimaryAppleAccount;

+ (id)pl_sharedAccountStore;

- (void).cxx_destruct;
- (void)accountDidChange:(id)arg1;
- (id)cachedPrimaryAppleAccount;
- (void)clearCachedProperties;
- (void)dealloc;
- (id)init;

@end
