
@protocol VSJSEventTargetObject <JSExport>

@required

- (void)addEventListener:(NSString *)arg1 :(JSValue *)arg2 :(JSValue *)arg3;
- (void)removeEventListener:(NSString *)arg1 :(JSValue *)arg2;

@end
