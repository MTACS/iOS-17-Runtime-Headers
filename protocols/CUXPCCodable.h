
@protocol CUXPCCodable

@required

- (void)encodeWithXPCObject:(NSObject<OS_xpc_object> *)arg1;
- (id)initWithXPCObject:(NSObject<OS_xpc_object> *)arg1 error:(id*)arg2;

@end
