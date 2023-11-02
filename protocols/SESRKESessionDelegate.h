
@protocol SESRKESessionDelegate <NSObject>

@required

- (void)sesSession:(SESRKESession *)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)sesSession:(SESRKESession *)arg1 didReceivePassthroughMessage:(NSData *)arg2 fromVehicle:(NSString *)arg3;
- (void)sesSession:(SESRKESession *)arg1 event:(NSDictionary *)arg2 fromVehicle:(NSString *)arg3;

@end
