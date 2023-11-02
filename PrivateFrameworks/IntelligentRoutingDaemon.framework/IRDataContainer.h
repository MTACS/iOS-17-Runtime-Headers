
@interface IRDataContainer : NSObject {
    NSURL * _containerRootURL;
    long long  _extensionHandle;
}

@property (nonatomic, retain) NSURL *containerRootURL;
@property (nonatomic) long long extensionHandle;

- (void).cxx_destruct;
- (void)_releaseExtensionHandle;
- (void)_releaseQuery:(struct container_query_s { }*)arg1;
- (id)containerRootURL;
- (long long)extensionHandle;
- (id)getContainerPathWithSandboxAccess;
- (id)init;
- (void)setContainerRootURL:(id)arg1;
- (void)setExtensionHandle:(long long)arg1;

@end
