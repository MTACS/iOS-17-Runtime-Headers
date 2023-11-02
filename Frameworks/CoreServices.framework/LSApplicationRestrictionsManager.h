
@interface LSApplicationRestrictionsManager : NSObject {
    NSNumber * _allowlistState;
    NSSet * _allowlistedBundleIDs;
    MOEffectiveSettings * _effectiveSettings;
    unsigned long long  _knownSystemAppDeletionState;
    NSNumber * _maximumRating;
    NSSet * _restrictedBundleIDs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _restrictionsAccessLock;
    bool  _server_newsWidgetIsRestricted;
    NSObject<OS_dispatch_queue> * _signerIdentitySyncQueue;
    NSObject<OS_dispatch_source> * _signerIdentitySyncSource;
    NSString * _systemMode;
}

@property (retain) MOEffectiveSettings *effectiveSettings;

- (void).cxx_destruct;
- (bool)_LSApplyRestrictedSet:(id)arg1 forRestriction:(id)arg2;
- (id)_LSResolveIdentifiers:(id)arg1;
- (id)_LSResolveIdentifiers:(id)arg1 context:(struct LSContext { id x1; }*)arg2;
- (id)_MCProfileConnection;
- (id)_MCRestrictionManager;
- (void)_pruneObsoleteTrustedSignerIdentities;
- (id)calculateSetDifference:(id)arg1 and:(id)arg2;
- (void)clearAllValues;
- (id)effectiveSettings;
- (void)handleMCEffectiveSettingsChanged;
- (void)handleSystemModeChangeTo:(id)arg1;
- (id)init;
- (bool)isFeatureAllowed:(id)arg1;
- (void)setEffectiveSettings:(id)arg1;

@end
