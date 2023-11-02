
@protocol SESRKESessionCallbackInterface <SESSessionCallbackInterface>

@required

- (void)didInvalidateWithError:(NSError *)arg1;
- (void)didReceivePassthroughMessage:(NSData *)arg1 fromVehicle:(NSString *)arg2;
- (void)sendEvent:(NSDictionary *)arg1 fromVehicle:(NSString *)arg2;

@end
