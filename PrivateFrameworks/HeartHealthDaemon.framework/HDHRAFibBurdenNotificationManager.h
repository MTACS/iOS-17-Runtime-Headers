
@interface HDHRAFibBurdenNotificationManager : NSObject <HDHRAFibBurdenNotificationManaging, HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate> {
    HKCalendarCache * _calendarCache;
    id /* block */  _dateGenerator;
    HKAnalyticsEventSubmissionManager * _eventSubmissionManager;
    HDHRAFibBurdenNotificationModeDeterminer * _modeDeterminer;
    <HDHRAFibBurdenNotificationManagerNotificationLastSentDateStore> * _notificationLastSentDateStore;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)_buildNotificationBodyForCurrentPercentageString:(id)arg1 isCurrentValueClamped:(bool)arg2 previousPercentageString:(id)arg3 isPreviousValueClamped:(bool)arg4;
+ (id)_buildNotificationForAFibBurdenCurrentPercentage:(id)arg1 isCurrentValueClamped:(bool)arg2 previousPercentage:(id)arg3 isPreviousValueClamped:(bool)arg4 startDate:(id)arg5 endDate:(id)arg6 currentDate:(id)arg7 expirationDate:(id)arg8 uuid:(id)arg9 calendar:(id)arg10;
+ (id)_buildNotificationForLackOfAFibBurdenWithCurrentDate:(id)arg1 expirationDate:(id)arg2 shouldForwardToWatch:(bool)arg3 uuid:(id)arg4;
+ (id)_generateDateRangeStringForAnalysisSampleWithStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3;
+ (id)_julianDayFromDate:(id)arg1 calendar:(id)arg2;
+ (id)_notificationBodyKeyForCurrentPercentageString:(id)arg1 isCurrentValueClamped:(bool)arg2 previousPercentageString:(id)arg3 isPreviousValueClamped:(bool)arg4;

- (void).cxx_destruct;
- (id)_buildNotificationForMode:(id)arg1;
- (id)_buildValueNotificationForMode:(id)arg1 currentDate:(id)arg2;
- (id)_generateExpirationDateWithCurrentDate:(id)arg1;
- (void)_sendNotificationRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_sendNotificationWithMode:(id)arg1 completion:(id /* block */)arg2;
- (id)_userNotificationCenter;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 modeDeterminer:(id)arg2 notificationLastSentDateStore:(id)arg3 calendarCache:(id)arg4 dateGenerator:(id /* block */)arg5 eventSubmissionManager:(id)arg6;
- (void)sevenDayAnalysisScheduler:(id)arg1 didSuccessfullyCompleteAnalysisWithSample:(id)arg2 onboardedWithinAnalysisInterval:(bool)arg3 featureStatus:(id)arg4;

@end
