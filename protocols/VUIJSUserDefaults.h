
@protocol VUIJSUserDefaults <JSExport>

@required

- (JSValue *)getData:(NSString *)arg1;
- (void)removeData:(NSString *)arg1;
- (void)setData:(NSString *)arg1 :(JSValue *)arg2;

@end
