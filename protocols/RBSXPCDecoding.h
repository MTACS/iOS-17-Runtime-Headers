
@protocol RBSXPCDecoding <NSObject>

@required

- (bool)containsValueForKey:(NSString *)arg1;
- (bool)decodeBoolForKey:(NSString *)arg1;
- (id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(NSString *)arg3;
- (double)decodeDoubleForKey:(NSString *)arg1;
- (long long)decodeInt64ForKey:(NSString *)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(NSString *)arg2;
- (NSString *)decodeStringForKey:(NSString *)arg1;
- (unsigned long long)decodeUInt64ForKey:(NSString *)arg1;
- (NSObject<OS_xpc_object> *)decodeXPCObjectOfType:(struct _xpc_type_s { }*)arg1 forKey:(NSString *)arg2;

@end
