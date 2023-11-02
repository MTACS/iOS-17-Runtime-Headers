
@protocol HMDAuthServerDelegate <NSObject>

@required

- (void)didFinishActivation:(NSError *)arg1 context:(id)arg2;
- (void)handleActivationResponse:(NSData *)arg1 context:(id)arg2;
- (void)handlePPIDInfoResponse:(HAPAccessoryInfo *)arg1 context:(id)arg2 error:(NSError *)arg3;

@end
