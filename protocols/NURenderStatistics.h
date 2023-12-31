
@protocol NURenderStatistics <NSObject>

@required

- (double)completeDuration;
- (double)completeLatency;
- (NSArray *)dependencies;
- (double)duration;
- (double)latency;
- (double)prepareDuration;
- (double)prepareLatency;
- (double)renderDuration;
- (double)renderLatency;
- (double)replyLatency;
- (double)requestTime;
- (double)responseTime;
- (double)totalDuration;

@end
