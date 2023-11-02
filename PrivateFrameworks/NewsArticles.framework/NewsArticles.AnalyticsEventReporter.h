
@interface NewsArticles.AnalyticsEventReporter : NSObject <NUAnalyticsReporting> {
    void articleCoordinator;
    void eventManager;
    void transformerManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)reportEvent:(id)arg1;

@end
