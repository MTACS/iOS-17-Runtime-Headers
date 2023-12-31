
@protocol IKJSStorage <JSExport>

@required

- (void)clear;
- (NSString *)getItem:(NSString *)arg1;
- (NSString *)key:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)removeItem:(NSString *)arg1;
- (void)setItem:(NSString *)arg1 :(NSString *)arg2;

@end
