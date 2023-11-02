
@protocol SESDCKSessionCallbackInterface <SESSessionCallbackInterface>

@required

- (void)didReceivePassthroughMessage:(NSData *)arg1;
- (void)sendEvent:(NSDictionary *)arg1;

@end
