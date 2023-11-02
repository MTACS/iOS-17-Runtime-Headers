
@interface HDCurrentActivitySummaryHelper : NSObject {
    NSDate * _dateOverride;
    bool  _hasLoadedActivitySummaries;
    HKObserverSet * _observers;
    HDProfile * _profile;
    HDActivitySummaryQueryHelper * _queryHelper;
    NSObject<OS_dispatch_queue> * _queue;
    NSTimeZone * _timezoneOverride;
    long long  _todayIndex;
    HKActivitySummary * _todaySummary;
    NSArray * _typesForDataCollection;
    long long  _yesterdayIndex;
    HKActivitySummary * _yesterdaySummary;
}

@property (nonatomic, retain) NSDate *dateOverride;
@property (readonly) bool hasLoadedActivitySummaries;
@property (nonatomic, retain) NSTimeZone *timezoneOverride;
@property (readonly) HKActivitySummary *todayActivitySummary;
@property (readonly) HKActivitySummary *yesterdayActivitySummary;

- (void).cxx_destruct;
- (void)_handleSignificantTimeChangeNotification:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)dateOverride;
- (void)dealloc;
- (bool)hasLoadedActivitySummaries;
- (id)initWithProfile:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setDateOverride:(id)arg1;
- (void)setTimezoneOverride:(id)arg1;
- (id)timezoneOverride;
- (id)todayActivitySummary;
- (id)yesterdayActivitySummary;

@end
