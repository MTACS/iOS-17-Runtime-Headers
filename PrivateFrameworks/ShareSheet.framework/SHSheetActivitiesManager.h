
@interface SHSheetActivitiesManager : NSObject <_UIActivityHelperDelegate> {
    _UIActivityHelper * _activityHelper;
    NSArray * _applicationActivities;
    NSArray * _applicationActivityTypes;
    _UIActivityMatchingContext * _currentContext;
    _UIActivityMatchingResults * _currentResults;
    <SHSheetActivitiesManagerDelegate> * _delegate;
    NSArray * _excludedActivityTypes;
    NSArray * _hiddenActivities;
    NSMutableDictionary * _internalActivitiesByUUID;
    NSArray * _orderedActivities;
    NSString * _sessionIdentifier;
}

@property (nonatomic, retain) _UIActivityHelper *activityHelper;
@property (nonatomic, readonly, copy) NSArray *applicationActivities;
@property (nonatomic, readonly, copy) NSArray *applicationActivityTypes;
@property (nonatomic, retain) _UIActivityMatchingContext *currentContext;
@property (nonatomic, retain) _UIActivityMatchingResults *currentResults;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHSheetActivitiesManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *excludedActivityTypes;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *hiddenActivities;
@property (nonatomic, retain) NSMutableDictionary *internalActivitiesByUUID;
@property (nonatomic, retain) NSArray *orderedActivities;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addActivities:(id)arg1;
- (id)activitiesByUUID;
- (id)activityForActivityType:(id)arg1;
- (id)activityForIdentifier:(id)arg1;
- (id)activityHelper;
- (bool)activityHelper:(id)arg1 matchingWithContext:(id)arg2 shouldIncludeSystemActivityType:(id)arg3 sessionID:(id)arg4;
- (void)addActivity:(id)arg1;
- (id)applicationActivities;
- (id)applicationActivityTypes;
- (id)currentContext;
- (id)currentResults;
- (id)delegate;
- (id)excludedActivityTypes;
- (id)hiddenActivities;
- (id)initWithSessionIdentifier:(id)arg1 applicationActivities:(id)arg2;
- (id)internalActivitiesByUUID;
- (id)orderedActivities;
- (void)preheatActivitiesIfNeeded;
- (void)removeActivity:(id)arg1;
- (id)sessionIdentifier;
- (void)setActivityHelper:(id)arg1;
- (void)setCurrentContext:(id)arg1;
- (void)setCurrentResults:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setHiddenActivities:(id)arg1;
- (void)setInternalActivitiesByUUID:(id)arg1;
- (void)setOrderedActivities:(id)arg1;
- (void)updateActivitiesWithContext:(id)arg1;

@end
