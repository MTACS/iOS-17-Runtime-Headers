
@interface HomeKitEvents.QueryMetricsObserver : NSObject <HMMLogEventObserver> {
    void logEventDispatcher;
    void logSubmitter;
    void pendingQueryLogEvents;
}

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)init;

@end
