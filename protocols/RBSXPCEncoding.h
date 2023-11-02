
@protocol RBSXPCEncoding <NSObject>

@required

- (void)encodeBool:(bool)arg1 forKey:(NSString *)arg2;
- (void)encodeCollection:(NSObject<NSFastEnumeration> *)arg1 forKey:(NSString *)arg2;
- (void)encodeDouble:(double)arg1 forKey:(NSString *)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(NSString *)arg2;
- (void)encodeObject:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(NSString *)arg2;
- (void)encodeXPCObject:(NSObject<OS_xpc_object> *)arg1 forKey:(NSString *)arg2;

@end
