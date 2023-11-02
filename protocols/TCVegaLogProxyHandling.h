
@protocol TCVegaLogProxyHandling <JSExport>

@required

- (JSValue *)getPropertyOnObject:(JSValue *)arg1 named:(NSString *)arg2;
- (bool)setPropertyOnObject:(JSValue *)arg1 named:(NSString *)arg2 toValue:(JSValue *)arg3;

@optional

- (JSValue *)getPropertyOnObject:(JSValue *)arg1 named:(NSString *)arg2 __JS_EXPORT_AS__get:(id)arg3;
- (bool)setPropertyOnObject:(JSValue *)arg1 named:(NSString *)arg2 toValue:(JSValue *)arg3 __JS_EXPORT_AS__set:(id)arg4;

@end
