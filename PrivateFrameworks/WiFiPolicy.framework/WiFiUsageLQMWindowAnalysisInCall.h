
@interface WiFiUsageLQMWindowAnalysisInCall : WiFiUsageLQMWindowAnalysis {
    double  _duration;
    NSString * _status;
}

@property (nonatomic) double duration;
@property (nonatomic, retain) NSString *status;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)arg1;
- (double)duration;
- (id)initWithRollingWindow:(id)arg1 andCallStatus:(id)arg2 andCallDuration:(double)arg3 andContext:(struct context { bool x1; bool x2; bool x3; })arg4 andTimestamp:(id)arg5 onQueue:(id)arg6;
- (void)setDuration:(double)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
