
@protocol GEOXPCSerializable <NSObject>

@required

- (void)encodeToXPCDictionary:(NSObject<OS_xpc_object> *)arg1;
- (id)initWithXPCDictionary:(NSObject<OS_xpc_object> *)arg1 error:(id*)arg2;

@end
