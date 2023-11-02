
@protocol CalMigrationAnalyticsSender <NSObject>

@required

- (void)sendEvent:(NSString *)arg1 withPayload:(NSDictionary *)arg2;

@end
