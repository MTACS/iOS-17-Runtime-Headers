
@interface PGGraphSyndicatedAssetsMetricEvent : PGAbstractMetricEvent {
    NSDictionary * _payload;
    PGManagerWorkingContext * _workingContext;
}

@property (nonatomic, retain) PGManagerWorkingContext *workingContext;

- (void).cxx_destruct;
- (void)gatherMetricsWithProgressBlock:(id /* block */)arg1;
- (id)identifier;
- (id)initWithWorkingContext:(id)arg1;
- (id)payload;
- (void)setWorkingContext:(id)arg1;
- (id)workingContext;

@end
