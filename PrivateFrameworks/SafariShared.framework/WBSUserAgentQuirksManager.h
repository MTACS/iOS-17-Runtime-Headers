
@interface WBSUserAgentQuirksManager : NSObject {
    WBSRemotePlistController * _remotePlistController;
}

- (void).cxx_destruct;
- (void)getQuirksForURLString:(id)arg1 withDefaultUserAgent:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithBuiltInQuirkListURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6;
- (void)prepareForTermination;

@end
