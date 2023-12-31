
@interface SXAnalyticsReporterProxy : NSObject <SXAnalyticsReporting> {
    <SXAnalyticsReporting> * _analyticsReporter;
}

@property (nonatomic, readonly) <SXAnalyticsReporting> *analyticsReporter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyticsReporter;
- (id)initWithAnalyticsReporter:(id)arg1;
- (void)reportEvent:(id)arg1;

@end
