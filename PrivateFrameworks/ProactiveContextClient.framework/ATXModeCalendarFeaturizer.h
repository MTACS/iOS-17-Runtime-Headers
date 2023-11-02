
@interface ATXModeCalendarFeaturizer : NSObject <ATXModeFeaturizer> {
    bool  _calendarRefreshCoalesceTimerIsEnabled;
    <ATXModeFeaturizerDelegate> * _delegate;
    EKEventStore * _eventStore;
    _PASSimpleCoalescingTimer * _featureUpdateTimer;
    ATXMicrolocationLocalization * _microlocationLocalization;
    NSHashTable * _timers;
}

@property (nonatomic) bool calendarRefreshCoalesceTimerIsEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATXModeFeaturizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isCalendarLikelyWork:(id)arg1;

- (void).cxx_destruct;
- (void)_addTimerForDate:(id)arg1;
- (void)_eventsDidChange:(id)arg1;
- (id)_fetchEligibleEventsForDay;
- (bool)_isDate:(id)arg1 betweenStartDate:(id)arg2 andEndDate:(id)arg3;
- (void)_setFeaturesForEventsCurrentlyIn:(id)arg1 now:(id)arg2 featureSet:(id)arg3;
- (bool)_shouldConsiderEventBasedOnParticipantStatus:(long long)arg1;
- (bool)_shouldInitiateMicrolocationLocalizationWithMostRecentWorkEvent:(id)arg1 upcomingWorkEvent:(id)arg2 now:(id)arg3;
- (bool)_shouldStayInWorkModeInBetweenMostRecentWorkEvent:(id)arg1 andUpcomingWorkEvent:(id)arg2;
- (void)_updateFeatures;
- (void)beginListening;
- (bool)calendarRefreshCoalesceTimerIsEnabled;
- (void)dealloc;
- (id)delegate;
- (id)initWithLocationManager:(id)arg1;
- (id)provideFeatures;
- (void)setCalendarRefreshCoalesceTimerIsEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)stopListening;

@end
