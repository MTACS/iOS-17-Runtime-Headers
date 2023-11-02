
@protocol BSXPCCoding <NSObject>

@required

- (void)encodeWithXPCDictionary:(NSObject<OS_xpc_object> *)arg1;
- (id)initWithXPCDictionary:(NSObject<OS_xpc_object> *)arg1;

@optional

- (Class)fallbackXPCEncodableClass;

@end
