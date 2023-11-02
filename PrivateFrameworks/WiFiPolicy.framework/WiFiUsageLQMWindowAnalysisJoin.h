
@interface WiFiUsageLQMWindowAnalysisJoin : WiFiUsageLQMWindowAnalysis {
    NSString * _joinReason;
}

@property (nonatomic, retain) NSString *joinReason;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)arg1;
- (id)initWithRollingWindow:(id)arg1 andReasonString:(id)arg2 andContext:(struct context { bool x1; bool x2; bool x3; })arg3 andTimestamp:(id)arg4 onQueue:(id)arg5;
- (id)joinReason;
- (void)setJoinReason:(id)arg1;

@end
