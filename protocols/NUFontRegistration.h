
@protocol NUFontRegistration <NSObject>

@required

- (bool)registerFontWithURL:(NSURL *)arg1 error:(id*)arg2;
- (void)unregisterFontWithURL:(NSURL *)arg1;

@end
