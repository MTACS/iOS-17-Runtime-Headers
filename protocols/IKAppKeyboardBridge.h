
@protocol IKAppKeyboardBridge <NSObject>

@required

- (JSValue *)jsHints;
- (NSString *)jsSource;
- (NSString *)jsText;
- (void)setJSHints:(JSValue *)arg1;
- (void)setJSSource:(NSString *)arg1;
- (void)setJSText:(NSString *)arg1;

@end
