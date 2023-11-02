
@interface WBSDomainAllowListManager : NSObject {
    WBSRemotePlistController * _remotePlistController;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithBuiltInAllowListURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6;
- (void)isDomainAllowed:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)prepareForTermination;

@end
