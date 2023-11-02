
@protocol BSXPCEncoding <NSObject>

@required

- (void)encodeBool:(bool)arg1 forKey:(NSString *)arg2;
- (void)encodeCGPoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(NSString *)arg2;
- (void)encodeCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(NSString *)arg2;
- (void)encodeCGSize:(struct CGSize { double x1; double x2; })arg1 forKey:(NSString *)arg2;
- (void)encodeCollection:(NSObject<NSFastEnumeration> *)arg1 forKey:(NSString *)arg2;
- (void)encodeDictionary:(NSDictionary *)arg1 forKey:(NSString *)arg2;
- (void)encodeDouble:(double)arg1 forKey:(NSString *)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(NSString *)arg2;
- (void)encodeObject:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(NSString *)arg2;
- (void)encodeXPCObject:(NSObject<OS_xpc_object> *)arg1 forKey:(NSString *)arg2;

@end
