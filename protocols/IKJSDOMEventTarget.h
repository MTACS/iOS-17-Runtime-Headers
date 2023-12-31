
@protocol IKJSDOMEventTarget <JSExport>

@required

- (void)addEventListener:(NSString *)arg1 :(JSValue *)arg2 :(bool)arg3;
- (bool)dispatchEvent:(IKDOMEvent *)arg1;
- (void)removeEventListener:(NSString *)arg1 :(JSValue *)arg2 :(bool)arg3;

@end
