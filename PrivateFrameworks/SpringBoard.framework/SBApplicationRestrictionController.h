
@interface SBApplicationRestrictionController : NSObject <STTelephonyStateObserver> {
    SBApplicationDefaults * _applicationDefaults;
    bool  _canPostRestrictionState;
    <SBApplicationRestrictionDataSource> * _dataSource;
    NSMutableSet * _enabledTags;
    bool  _hasHideNonDefaultSystemAppsCapability;
    NSHashTable * _observers;
    NSMutableDictionary * _ratingRanksByIdentifier;
    NSSet * _restrictedIdentifiers;
    bool  _showAllSystemApps;
    bool  _showInternalApps;
    NSMutableDictionary * _tagValidityMap;
    struct MGNotificationTokenStruct { } * _tagsNotificationToken;
    NSMutableDictionary * _validTagsByIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)beginPostingChanges;
- (void)carrierBundleInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (bool)isApplicationIdentifierRestricted:(id)arg1;
- (void)noteApplicationIdentifiersDidChangeWithAdded:(id)arg1 replaced:(id)arg2 removed:(id)arg3;
- (void)noteRestrictionsMayHaveChanged;
- (void)noteVisibilityOverridesDidChange;
- (void)removeObserver:(id)arg1;

@end
