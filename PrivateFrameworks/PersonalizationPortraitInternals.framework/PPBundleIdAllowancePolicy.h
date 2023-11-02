
@interface PPBundleIdAllowancePolicy : NSObject {
    _PASLock * _allowancePolicyLock;
    <TRINotificationToken> * _trialToken;
}

+ (id)defaultPolicy;

- (void).cxx_destruct;
- (void)_loadAssetData;
- (id)_readAssetData:(id)arg1;
- (void)_resetGuardedData;
- (void)_setGuardedDataWithNotificationBlocklist:(id)arg1 notificationAllowlist:(id)arg2 searchableItemBlocklist:(id)arg3 searchableItemAllowlist:(id)arg4;
- (bool)bundleIdentifierIsAllowed:(id)arg1 blocklist:(id)arg2 allowlist:(id)arg3;
- (bool)bundleIdentifierIsAllowedForNotifications:(id)arg1;
- (bool)bundleIdentifierIsAllowedForSearchableItems:(id)arg1;
- (void)dealloc;
- (id)initWithNotificationBlocklist:(id)arg1 notificationAllowlist:(id)arg2 searchableItemBlocklist:(id)arg3 searchableItemAllowlist:(id)arg4;
- (id)init_;

@end
