
@interface ATXDigestOnboardingMetricsLogger : NSObject {
    ATXDigestOnboardingLoggingBiomeStream * _digestOnboardingLoggingBiomeStream;
}

- (void).cxx_destruct;
- (id)digestOnboardingBookmark;
- (id)init;
- (id)initWithDigestOnboardingLoggingBiomeStream:(id)arg1;
- (void)logDigestOnboardingMetrics;
- (void)logDigestOnboardingMetricsWithXPCActivity:(id)arg1;
- (double)minutesAfterMidnight:(id)arg1;
- (void)writeBookmarkToFile:(id)arg1;

@end
