
@interface FCTypicalDayProvider : NSObject <FITypicalDayActivityModelDelegate, HDCurrentActivitySummaryHelperObserver, HDProfileReadyObserver> {
    FCCDateProvider * _dateProvider;
    NSDate * _lastRebuildDate;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    int  _significantTimeChangeToken;
    FITypicalDayActivityModel * _typicalDayModel;
    NSDate * _userEndOfDay;
    NSDate * _userStartOfDay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FITypicalDayActivityModel *typicalDayModel;
@property (nonatomic, retain) NSDate *userEndOfDay;
@property (nonatomic, retain) NSDate *userStartOfDay;

- (void).cxx_destruct;
- (void)_onqueue_handleUpdatedActivitySummary:(id)arg1;
- (void)_onqueue_rebuildTypicalDayModelForced:(bool)arg1;
- (void)_onqueue_registerForSignificantTimeChanges;
- (void)_significantTimeChangeOccurred:(id)arg1;
- (id)_typicalDayIntervalFromToday;
- (id)clientProvidedUserEndOfDay;
- (id)clientProvidedUserStartOfDay;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (id)currentCalendar;
- (id)currentDate;
- (void)dealloc;
- (bool)enumerateActivitySummariesFromDateComponents:(id)arg1 toDateComponents:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (id)firstOnWristDateToday;
- (id)initWithDateProvider:(id)arg1 profile:(id)arg2 serviceQueue:(id)arg3;
- (void)profileDidBecomeReady:(id)arg1;
- (void)setUserEndOfDay:(id)arg1;
- (void)setUserStartOfDay:(id)arg1;
- (id)typicalDayModel;
- (id)userEndOfDay;
- (id)userStartOfDay;

@end
