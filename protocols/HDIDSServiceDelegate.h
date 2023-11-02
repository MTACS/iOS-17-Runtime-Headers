
@protocol HDIDSServiceDelegate <NSObject>

@required

- (void)service:(HDIDSService *)arg1 didReceiveMessage:(NSDictionary *)arg2 fromDevice:(HDIDSDevice *)arg3 messageContext:(HDIDSMessageContext *)arg4;
- (void)service:(HDIDSService *)arg1 didSendWithSuccess:(bool)arg2 identifier:(NSString *)arg3 error:(NSError *)arg4;

@end
