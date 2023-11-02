
@protocol _SGSuggestionsServiceBaseProtocol <_SGSuggestionsServiceMetricsProtocol>

@required

+ (bool)isHarvestingSupported;

- (bool)isEnabledWithError:(id*)arg1;
- (void)keepDirty:(bool)arg1;
- (bool)queuesRequestsIfBusy;
- (void)setQueuesRequestsIfBusy:(bool)arg1;
- (void)setSyncTimeout:(double)arg1;
- (double)syncTimeout;

@end
