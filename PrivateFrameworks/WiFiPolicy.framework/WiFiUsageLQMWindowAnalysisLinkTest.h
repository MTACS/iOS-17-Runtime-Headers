
@interface WiFiUsageLQMWindowAnalysisLinkTest : WiFiUsageLQMWindowAnalysis {
    NSString * _linkTestReason;
    WFMeasureResult * _linkTestResults;
}

@property (nonatomic, retain) NSString *linkTestReason;
@property (nonatomic, retain) WFMeasureResult *linkTestResults;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)arg1;
- (id)initWithRollingWindow:(id)arg1 andReason:(id)arg2 withWFMeasureResults:(id)arg3 andContext:(struct context { bool x1; bool x2; bool x3; })arg4 andTimestamp:(id)arg5 onQueue:(id)arg6;
- (id)linkTestReason;
- (id)linkTestResults;
- (void)setLinkTestReason:(id)arg1;
- (void)setLinkTestResults:(id)arg1;

@end
