
@interface MTMediaActivityEventHandler : MTEventHandler

@property (nonatomic) <MTMediaActivityEventHandlerDelegate> *delegate;

- (void)didCreateMetricsData:(id)arg1;
- (id)eventVersion:(id)arg1;
- (id)knownFields;
- (id)metricsDataForStartActionWithPosition:(unsigned long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (id)metricsDataForStopActionWithPosition:(unsigned long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 startMetricsData:(id)arg5 eventData:(id)arg6;

@end
