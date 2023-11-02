
@interface ATXStackStateTracker : NSObject <ATXSigtermObserver> {
    _PASSimpleCoalescingTimer * _coalescedPersistInternalStateOperation;
    NSDictionary * _currentAppPredictionPanelLayouts;
    NSDictionary * _currentSuggestionsWidgetLayouts;
    _PASLock * _internalStateLock;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    ATXSigtermListener * _sigtermListener;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, retain) NSDictionary *currentAppPredictionPanelLayouts;
@property (nonatomic, retain) NSDictionary *currentSuggestionsWidgetLayouts;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_blendingCacheIdToStackIdMap:(id)arg1;
- (void)_persistInternalStateImmediatelyOnSigterm;
- (void)cleanupOldDataWithHomeScreenPages:(id)arg1;
- (void)coalescedPersistInternalState;
- (id)currentAppPredictionPanelLayouts;
- (id)currentSuggestionsWidgetLayouts;
- (id)dataFromDisk;
- (void)handleSigterm;
- (id)init;
- (id)initTrackerInDirectory:(id)arg1;
- (id)jsonRepresentation;
- (id)lastStackRotationEvent:(id)arg1;
- (bool)lastStackRotationWasALongTimeAgoForStackId:(id)arg1;
- (id)lastStackShownEvent:(id)arg1;
- (bool)lastStalenessRotationWasALongTimeAgoForStackId:(id)arg1;
- (id)lastThreeUserVisitDatesOfPage:(unsigned long long)arg1;
- (id)lastUserScrollStackRotationEvent:(id)arg1;
- (bool)lastUserScrollWasALongTimeAgoForStackId:(id)arg1;
- (id)layoutForLastStalenessRotation:(id)arg1;
- (bool)loadInternalState;
- (bool)mostRecentRotationOfStackIsSystemInitiated:(id)arg1;
- (bool)persistInternalState;
- (void)setCurrentAppPredictionPanelLayouts:(id)arg1;
- (void)setCurrentSuggestionsWidgetLayouts:(id)arg1;
- (void)setLayoutForLastStalenessRotation:(id)arg1 stackId:(id)arg2 date:(id)arg3;
- (id)stackCreationEvent:(id)arg1;
- (bool)stackIsStale:(id)arg1;
- (id)stackStateForStackId:(id)arg1;
- (bool)stackWasCreatedALongTimeAgo:(id)arg1;
- (id)topWidgetUniqueIdOfStack:(id)arg1;
- (void)updateStackRotationEvents;
- (void)updateStackRotationEventsByQueryingBiome;

@end
