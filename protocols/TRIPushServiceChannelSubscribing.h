
@protocol TRIPushServiceChannelSubscribing

@required

- (void)subscribeToChannel:(TRIPushChannelId *)arg1;
- (NSArray *)subscribedChannelIds;
- (void)unsubscribeFromChannel:(TRIPushChannelId *)arg1;

@end
