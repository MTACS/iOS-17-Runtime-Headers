
@interface ATXSearchFeedbackListener : NSObject <SFFeedbackListener> {
    NSString * _actionBlendingCacheId;
    ATXActionPredictionClient * _actionPredictionClient;
    PETGoalConversionEventTracker * _apAppPredictionsShownTracker;
    NSString * _appBlendingCacheId;
    NSString * _currentQuery;
    ATXSuggestionSearchResult * _currentResultCard;
    bool  _currentSessionHasEngagement;
    struct { 
        struct { 
            unsigned long long lastEventTimestamp; 
        } resultsDidBecomeVisible; 
        struct { 
            unsigned long long lastEventTimestamp; 
        } didStartSearch; 
        struct { 
            unsigned long long lastEventTimestamp; 
        } searchViewDidAppear; 
        struct { 
            unsigned long long lastEventTimestamp; 
        } searchViewDidDisappear; 
        struct { 
            unsigned long long lastEventTimestamp; 
        } didEngageResult; 
        struct { 
            unsigned long long lastEventTimestamp; 
        } didEngageCardSection; 
    }  _debounce;
    bool  _didSearchDuringSession;
    ATXEngagementRecordManager * _engagementRecordManager;
    bool  _hasSeenSearchViewDidAppear;
    bool  _previousSessionHadEngagement;
    NSMutableArray * _queuedEvents;
    bool  _shouldDebounce;
    ATXSpotlightUIBiomeStream * _spotlightUIBiomeStream;
    NSObject<ATXSearchFeedbackListenerTarget> * _target;
    <ATXPETEventTracker2Protocol> * _tracker;
    unsigned long long  _viewAppearEvent;
    NSMutableSet * _visibleActionContextIdentifiers;
    NSMutableSet * _visibleActionUUIDs;
    NSMutableSet * _visibleAppBundleIds;
    NSMutableSet * _visibleAppUUIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldDebounce;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isDuplicateEventWithState:(struct { unsigned long long x1; }*)arg1 timestamp:(unsigned long long)arg2 method:(SEL)arg3;
- (void)_logAppPredictionsShown;
- (void)_logCAActionWithIdentifier:(id)arg1 suggestion:(id)arg2 eventType:(long long)arg3;
- (void)_logCAActionWithIdentifiers:(id)arg1 eventType:(long long)arg2;
- (void)_resetState;
- (void)_sendSpotlightUIEvent:(id)arg1;
- (void)_sendSpotlightUIStreamAppEngageWithFeedback:(id)arg1;
- (void)_sendSpotlightUIStreamEventType:(long long)arg1 searchResult:(id)arg2;
- (id)_suggestionSubTypeStringWithResultType:(int)arg1;
- (void)_tryRemoveLockscreenActionPredictionMatchingSuggestion:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didPerformCommand:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (id)init;
- (id)initWithTarget:(id)arg1 spotlightUIBiomeStream:(id)arg2 engagementRecordManager:(id)arg3 actionClient:(id)arg4 tracker:(id)arg5;
- (void)logEngagedSpotlightActionSuggestion:(id)arg1 contextActionIdentifier:(id)arg2;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)sendUpdateNotification;
- (void)setShouldDebounce:(bool)arg1;
- (bool)shouldDebounce;
- (void)writeSpotlightEvent:(id)arg1 isViewAppearEvent:(bool)arg2;

@end
