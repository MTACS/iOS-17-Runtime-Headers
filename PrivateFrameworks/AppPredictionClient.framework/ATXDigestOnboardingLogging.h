
@interface ATXDigestOnboardingLogging : NSObject {
    ATXDigestOnboardingAppSelectionLoggingBiomeStream * _digestOnboardingAppSelectionLoggingBiomeStream;
    ATXDigestOnboardingLoggingBiomeStream * _digestOnboardingLoggingBiomeStream;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDigestOnboardingLoggingBiomeStream:(id)arg1 digestOnboardingAppSelectionLoggingBiomeStream:(id)arg2;
- (void)logDigestOnboardingAppSelectionForShownApps:(id)arg1 appsAddedToDigest:(id)arg2 rankedApps:(id)arg3 sessionUUID:(id)arg4;
- (void)logDigestOnboardingWithEntrySource:(int)arg1 digestSetupOutcome:(int)arg2 finalUIShown:(int)arg3 timeTaken:(double)arg4 didSelectShowMore:(bool)arg5 numDaysForAverageNotificationCount:(unsigned long long)arg6 shownApps:(id)arg7 appsAddedToDigest:(id)arg8 deliveryTimes:(id)arg9;
- (id)onBoardingAppSelectionEventWithApp:(id)arg1 rank:(unsigned long long)arg2 addedToDigest:(bool)arg3 wasShownInDigest:(bool)arg4 sessionUUID:(id)arg5;

@end
