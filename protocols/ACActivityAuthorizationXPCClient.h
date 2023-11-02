
@protocol ACActivityAuthorizationXPCClient

@required

- (oneway void)activityAuthorizationDidChangeWithOptions:(NSData *)arg1;
- (oneway void)frequentUpdatesAuthorizationDidChangeWithOptions:(NSData *)arg1;

@end
