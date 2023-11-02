
@protocol IDSSendXPCProtocol <NSObject>

@required

- (void)sendXPCObject:(NSObject<OS_xpc_object> *)arg1;

@end
