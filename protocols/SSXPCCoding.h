
@protocol SSXPCCoding <NSObject>

@optional

- (NSObject<OS_xpc_object> *)copyXPCEncoding;
- (id)initWithXPCEncoding:(NSObject<OS_xpc_object> *)arg1;

@end
