
@interface DESSandBoxManager : NSObject {
    NSMutableArray * _consumedSandboxExtensions;
    NSArray * _extensions;
}

+ (id)sandboxExtensionsToXPCConnection:(id)arg1 fileURLs:(id)arg2 requireWrite:(bool)arg3 outError:(id*)arg4;

- (void).cxx_destruct;
- (bool)consumeExtensionsWithError:(id*)arg1;
- (void)dealloc;
- (id)initWithExtensions:(id)arg1;
- (void)releaseExtensions;

@end
