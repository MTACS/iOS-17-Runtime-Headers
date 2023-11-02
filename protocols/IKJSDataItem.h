
@protocol IKJSDataItem <JSExport>

@required

+ (JSValue *)makeDataItem:(JSValue *)arg1 :(JSValue *)arg2;

- (NSString *)identifier;
- (NSString *)type;

@end
