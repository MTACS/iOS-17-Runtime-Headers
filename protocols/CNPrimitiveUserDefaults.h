
@protocol CNPrimitiveUserDefaults <NSObject>

@required

- (bool)primitiveBoolValueForKey:(NSString *)arg1 keyExists:(bool*)arg2;
- (long long)primitiveIntegerValueForKey:(NSString *)arg1 keyExists:(bool*)arg2;
- (id)primitiveObjectForKey:(NSString *)arg1;
- (void)primitiveRemoveObjectForKey:(NSString *)arg1;
- (void)setPrimitiveObject:(id)arg1 forKey:(NSString *)arg2;
- (void)setupAutosync;
- (bool)synchronize;

@end
