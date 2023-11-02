
@protocol MCMClientFactoryWithXPC <MCMClientFactory>

@required

- (MCMClientIdentity *)clientIdentityWithClientMessageContext:(id <MCMClientMessageContext>)arg1 xpcMessage:(NSObject<OS_xpc_object> *)arg2 error:(id*)arg3;

@end
