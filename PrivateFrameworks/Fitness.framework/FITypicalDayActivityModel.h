
@interface FITypicalDayActivityModel : NSObject <FISleepDataProviderDelegate> {
    NSObject<OS_dispatch_group> * _activitySummaryBarrierGroup;
    bool  _activitySummaryLoaded;
    <FITypicalDayActivityModelDelegate> * _delegate;
    NSDateInterval * _interval;
    NSDate * _projectedOffWristDateToday;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queue_bucketDates;
    HKActivitySummary * _queue_currentActivitySummary;
    FISimpleHistogram * _queue_exerciseHistogram;
    FISimpleHistogram * _queue_moveHistogram;
    FISleepDataProvider * _sleepDataProvider;
    FISleepUserDay * _sleepUserDay;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sleepUserDayLock;
    long long  _totalActiveDays;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FITypicalDayActivityModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long totalActiveDays;

+ (id)_emptySimpleHistogram;

- (void).cxx_destruct;
- (id)_bucketDateForIndex:(unsigned long long)arg1 startOfDay:(id)arg2;
- (long long)_bucketIndexForDate:(id)arg1 startOfDay:(id)arg2 bucketDates:(id)arg3;
- (id)_goodMorningAlertDismissedDateForToday;
- (double)_percentageOfTypicalDayComparedToNowForGoal:(long long)arg1;
- (double)_queue_briskWalkTimeToCompleteMoveGoalWithDateOfBirth:(id)arg1 biologicalSex:(long long)arg2 height:(id)arg3 weight:(id)arg4 wheelchairUse:(long long)arg5 experienceType:(unsigned long long)arg6;
- (id)_queue_calculateProjectedOffWristDateFromHistogram:(id)arg1 activeDays:(long long)arg2;
- (double)_queue_currentValueForHistogram:(id)arg1;
- (bool)_queue_enumerateActivitySummariesOrderedByCacheIndexWithCalendar:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (void)_queue_populateHistogramsAndOffWristDateForToday;
- (void)_queue_updateHistogram:(id)arg1 goalType:(long long)arg2 activitySummary:(id)arg3;
- (void)_queue_updateProjectedOffWristDateHistogram:(id)arg1 activitySummary:(id)arg2 activeDays:(long long*)arg3;
- (void)_setProjectedOffWristDateToday:(id)arg1;
- (void)_setSleepUserDay:(id)arg1;
- (id)_sleepDataProvider;
- (void)_updateSleepUserDay;
- (void)_waitUntilActivitySummaryLoaded;
- (bool)_willCompleteGoalWithType:(long long)arg1 bufferPercentage:(double)arg2;
- (double)briskWalkTimeToCompleteMoveGoalWithAcitivitySettingsController:(id)arg1;
- (id)currentCalendar;
- (id)currentDate;
- (double)currentExerciseGoalPercentage;
- (double)currentMoveGoalPercentage;
- (double)currentStandGoalPercentage;
- (id)debugDescription;
- (id)delegate;
- (id)endOfToday;
- (void)handleUpdatedCurrentActivitySummary:(id)arg1;
- (id)initForDateInterval:(id)arg1 delegate:(id)arg2;
- (id)initForDateInterval:(id)arg1 delegate:(id)arg2 sleepDataProvider:(id)arg3;
- (bool)isSleepAlarmEnabledForToday;
- (double)percentageOfTypicalDayBriskMinutesEarnedComparedToNow;
- (double)percentageOfTypicalDayMoveComparedToNow;
- (double)projectedDayDuration;
- (id)projectedOffWrist;
- (bool)projectedToBeatMoveRecordByEndOfDay;
- (void)rebuildWithInterval:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldSuggestWalkWithActivitySettingsController:(id)arg1;
- (void)sleepDataProviderLastAlarmWakeUpDateDidChange;
- (void)sleepDataProviderLastGoodMorningDismissedDateDidChange;
- (void)sleepDataProviderUserDayDidUpdate;
- (id)sleepUserDay;
- (id)startOfToday;
- (long long)totalActiveDays;
- (id)userEndOfDay;
- (id)userStartOfDay;
- (id)userWakeUpDateForToday;
- (double)valueOfTypicalDayBriskMinutesEarnedByNow;
- (double)valueOfTypicalDayMoveEarnedByNow;
- (bool)willCompleteExerciseGoalWithBufferPercentage:(double)arg1;
- (bool)willCompleteMoveGoalWithBufferPercentage:(double)arg1;
- (bool)willCompleteStandGoalOrItIsTooLateWithBufferPercentage:(double)arg1;
- (bool)willCompletingMoveRingEarnStreakAchievement;

@end
