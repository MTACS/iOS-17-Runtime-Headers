
@protocol FxHostPrivateAPI <NSObject>

@required

- (NSURL *)URLForHostResource:(NSString *)arg1 withExtension:(NSString *)arg2 subDirectory:(NSString *)arg3 inBundle:(NSBundle *)arg4;
- (NSURL *)URLForHostResource:(NSString *)arg1 withExtension:(NSString *)arg2 subDirectory:(NSString *)arg3 inBundleWithIdentifier:(NSString *)arg4;
- (NSURL *)URLForHostResource:(NSString *)arg1 withExtension:(NSString *)arg2 subDirectory:(NSString *)arg3 inBundleWithURL:(NSURL *)arg4;
- (NSURL *)URLForMediaFolder;
- (bool)giveEffectUIFocus;
- (bool)navigateToTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (void)restartConnection:(NSXPCConnection *)arg1 forPlugin:(NSString *)arg2 session:(unsigned long long)arg3;

@end
