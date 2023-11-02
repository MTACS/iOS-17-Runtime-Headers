
@protocol TAVisitStateObserver <NSObject>

@optional

- (void)visitState:(TAVisitState *)arg1 didChangeStateFromType:(unsigned long long)arg2 toType:(unsigned long long)arg3;
- (void)visitState:(TAVisitState *)arg1 didIssueMetricsSubmissionHint:(unsigned long long)arg2;

@end
