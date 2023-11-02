
@interface NewsAnalytics.AppSessionObserver : NSObject <NSSNewsAnalyticsAppSessionManagerObserving> {
    void appSessionManager;
}

- (void).cxx_destruct;
- (void)endAppSessionWithEndReason:(id)arg1;
- (id)init;
- (void)startAppSessionWithUserIDReset:(id)arg1;

@end
