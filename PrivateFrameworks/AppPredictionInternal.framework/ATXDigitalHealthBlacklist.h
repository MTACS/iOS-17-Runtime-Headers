
@interface ATXDigitalHealthBlacklist : NSObject <LSApplicationWorkspaceObserverProtocol> {
    _PASLock * _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_updateBlacklistWithNewBlacklistedBundleIds:(id)arg1 whitelistedBundleIds:(id)arg2;
- (id)blacklistedBundleIds;
- (void)dealloc;
- (void)deviceManagementPolicyDidChange:(id)arg1;
- (id)init;

@end
