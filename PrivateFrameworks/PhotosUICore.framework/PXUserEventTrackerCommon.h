
@interface PXUserEventTrackerCommon : NSObject {
    bool  _applicationIsInForeground;
    unsigned long long  _currentLogState;
    double  _currentLogStateStartDate;
    unsigned long long  _currentLogSubState;
    double  _currentLogSubStateStartDate;
    unsigned long long  _currentLogSubSubState;
    double  _currentLogSubSubStateStartDate;
    id  _currentSessionSender;
    unsigned long long  _currentSessionSource;
    unsigned long long  _currentSessionTab;
    unsigned long long  _currentTab;
    bool  _enableDetailedDebugLogging;
}

@property (nonatomic) unsigned long long currentLogState;
@property (nonatomic) unsigned long long currentLogSubState;
@property (nonatomic) unsigned long long currentLogSubSubState;
@property (setter=setCurrentTab:, nonatomic) unsigned long long currentTab;
@property (nonatomic, readonly) bool enableDetailedDebugLogging;

- (void).cxx_destruct;
- (id)PXLogStateDescription:(unsigned long long)arg1;
- (id)PXLogSubStateDescription:(unsigned long long)arg1;
- (id)PXLogSubSubStateDescription:(unsigned long long)arg1;
- (void)_setCurrentSessionSource:(unsigned long long)arg1 sender:(id)arg2 isInForeground:(bool)arg3;
- (void)aggregateSetMemoryFeedNumberOfDaysSinceLastVisit:(long long)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (unsigned long long)currentLogState;
- (unsigned long long)currentLogSubState;
- (unsigned long long)currentLogSubSubState;
- (unsigned long long)currentTab;
- (void)didFinishViewingMemoriesFeedView;
- (bool)enableDetailedDebugLogging;
- (void)eventSourceDidChange:(unsigned long long)arg1 sender:(id)arg2;
- (void)eventSourceDidDisappear:(unsigned long long)arg1 sender:(id)arg2;
- (void)eventSourceWillAppear:(unsigned long long)arg1 sender:(id)arg2;
- (id)init;
- (bool)isEventSourceSenderAppearingForTheFirstTime:(id)arg1;
- (void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logImpressionCountForEventSource:(unsigned long long)arg1;
- (void)logViewCountForLogState:(unsigned long long)arg1;
- (void)logViewCountForLogSubState:(unsigned long long)arg1;
- (void)logViewCountForLogSubSubState:(unsigned long long)arg1;
- (void)setCurrentLogState:(unsigned long long)arg1;
- (void)setCurrentLogState:(unsigned long long)arg1 logSubState:(unsigned long long)arg2 logSubSubState:(unsigned long long)arg3 forceLogging:(bool)arg4;
- (void)setCurrentLogSubState:(unsigned long long)arg1;
- (void)setCurrentLogSubSubState:(unsigned long long)arg1;
- (void)setCurrentTab:(unsigned long long)arg1;
- (void)willViewMemoriesFeedView;

@end
