
@interface _UIActivityHelper : NSObject {
    _UIActivityApplicationExtensionDiscovery * _applicationExtensionDiscovery;
    NSArray * _cachedBuiltinActivities;
    <_UIActivityHelperDelegate> * _delegate;
    id /* block */  _fetchShortcutsBlock;
    bool  _primed;
    NSString * _sessionID;
}

@property (nonatomic, retain) _UIActivityApplicationExtensionDiscovery *applicationExtensionDiscovery;
@property (nonatomic, readonly) NSArray *cachedBuiltinActivities;
@property (nonatomic, readonly) <_UIActivityHelperDelegate> *delegate;
@property (nonatomic, copy) id /* block */ fetchShortcutsBlock;
@property (nonatomic) bool primed;
@property (nonatomic, readonly) NSString *sessionID;

+ (id)activityTypeForBundleIdentifier:(id)arg1;
+ (id)builtinActivityClasses;
+ (void)registerContinuousExtensionsDiscoveryOnLaunch;
+ (id)transportImageForBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_activitiesByApplyingBeforeTypePinningToActivities:(id)arg1 activitiesToBeforeTypePin:(id)arg2;
- (id)_activitiesByApplyingDefaultOrdering:(id)arg1;
- (id)_activitiesByApplyingFavoriteOrderingToActivities:(id)arg1 favoriteActivityTypes:(id)arg2;
- (id)_activitiesByDuetOrderingActivities:(id)arg1;
- (id)_activitiesByTypeOrderingActivities:(id)arg1 activityTypeOrdering:(id)arg2;
- (id)_defaultOrderingDescriptorForActivity:(id)arg1;
- (id)_defaultSortItemForBuiltinActivity:(id)arg1;
- (id)_defaultSortOrderForApplicationDefinedActivity:(id)arg1;
- (id)_defaultSortOrderForBuiltInElevatedActivity:(id)arg1;
- (id)_defaultSortOrderForExtensionBasedActivity:(id)arg1;
- (id)_defaultSortOrderForOpenInAppActivity:(id)arg1;
- (id)_defaultSortOrderForOtherActivity:(id)arg1;
- (id)_defaultSortOrderForShortcutActivity:(id)arg1;
- (void)_enumerateAvailableActivitiesForMatchingContext:(id)arg1 intoMatchingResults:(id)arg2 matchingResultsUpdateBlock:(id /* block */)arg3 enumerateActivityBlock:(id /* block */)arg4;
- (id)activitiesByOrderingActivities:(id)arg1 applyDefaultOrdering:(bool)arg2 applyBeforeTypePinning:(bool)arg3 activityTypeOrdering:(id)arg4 bypassDuet:(bool)arg5;
- (id)applicationExtensionDiscovery;
- (id)cachedBuiltinActivities;
- (id)delegate;
- (id /* block */)fetchShortcutsBlock;
- (id)initWithDelegate:(id)arg1 sessionID:(id)arg2 fetchShortcutsBlock:(id /* block */)arg3;
- (id)orderedAvailableActivitiesForMatchingContext:(id)arg1;
- (void)preheatAvailableActivitiesForMatchingContext:(id)arg1;
- (void)primeWithDiscoveryContext:(id)arg1;
- (bool)primed;
- (id)reportExtensionsCacheResult;
- (id)sessionID;
- (void)setApplicationExtensionDiscovery:(id)arg1;
- (void)setFetchShortcutsBlock:(id /* block */)arg1;
- (void)setPrimed:(bool)arg1;

@end
