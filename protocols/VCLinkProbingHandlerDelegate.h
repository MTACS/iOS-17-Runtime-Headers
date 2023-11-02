
@protocol VCLinkProbingHandlerDelegate <NSObject>

@required

- (void)flushLinkProbingStatusWithOptions:(NSDictionary *)arg1;
- (void)queryProbingResultsWithOptions:(NSDictionary *)arg1;
- (void)startActiveProbingWithOptions:(NSDictionary *)arg1;
- (void)stopActiveProbingWithOptions:(NSDictionary *)arg1;

@optional

- (void)didLinkProbingLockdownEnd;
- (void)didReceiveStatsResponse:(bool)arg1;
- (void)didUpdateLinkPreferenceOrder:(NSArray *)arg1;
- (void)requestStatsWithOptions:(NSDictionary *)arg1;

@end
