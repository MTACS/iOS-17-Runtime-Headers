
@protocol NSXPCConnectionDelegate <NSObject>

@optional

- (void)connection:(NSXPCConnection *)arg1 handleInvocation:(NSInvocation *)arg2 isReply:(bool)arg3;
- (<NSSecureCoding> *)replacementObjectForXPCConnection:(NSXPCConnection *)arg1 encoder:(NSXPCCoder *)arg2 object:(id)arg3;

@end