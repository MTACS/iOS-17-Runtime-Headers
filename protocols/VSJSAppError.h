
@protocol VSJSAppError <JSExport>

@required

- (unsigned long long)code;
- (id)init;
- (NSString *)message;
- (void)setCode:(unsigned long long)arg1;
- (void)setMessage:(NSString *)arg1;

@end
