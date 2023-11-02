
@interface GEONavdAnalyticsManager : NSObject {
    <GEONavdAnalyticsReporter> * _analyticsReporter;
}

@property (nonatomic, retain) <GEONavdAnalyticsReporter> *analyticsReporter;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)analyticsReporter;
- (void)setAnalyticsReporter:(id)arg1;

@end
