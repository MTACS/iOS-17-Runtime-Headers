
@interface WiFiUsageLQMWindowAnalysisDataTriggered : WiFiUsageLQMWindowAnalysis {
    NSString * _dataTriggerReason;
    NSArray * _triggerCriteriaList;
}

@property (nonatomic, retain) NSString *dataTriggerReason;
@property (nonatomic, readonly) NSArray *triggerCriteriaList;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)arg1;
- (id)dataTriggerReason;
- (id)initWithRollingWindow:(id)arg1 andSubReason:(id)arg2 andContext:(struct context { bool x1; bool x2; bool x3; })arg3 andTimestamp:(id)arg4 onQueue:(id)arg5;
- (void)performAnalysis;
- (void)setDataTriggerReason:(id)arg1;
- (id)triggerCriteriaList;

@end
