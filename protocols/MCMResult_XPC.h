
@protocol MCMResult_XPC <MCMResult>

@required

- (bool)encodeResultOntoReply:(NSObject<OS_xpc_object> *)arg1;

@end
