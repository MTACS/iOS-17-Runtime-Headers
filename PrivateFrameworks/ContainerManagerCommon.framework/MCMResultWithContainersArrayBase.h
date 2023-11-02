
@interface MCMResultWithContainersArrayBase : MCMResultBase <MCMResultWithContainersArray> {
    MCMClientIdentity * _clientIdentity;
    NSArray * _containerIdentities;
    NSArray * _containerPaths;
    NSArray * _containers;
    bool  _includeInfo;
    bool  _includePath;
    bool  _includeUserManagedAssetsRelPath;
    bool  _skipSandboxExtensions;
}

@property (nonatomic, readonly) MCMClientIdentity *clientIdentity;
@property (nonatomic, readonly) NSArray *containerIdentities;
@property (nonatomic, readonly) NSArray *containerPaths;
@property (nonatomic, readonly) NSArray *containers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MCMError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includeInfo;
@property (nonatomic, readonly) bool includePath;
@property (nonatomic, readonly) bool includeUserManagedAssetsRelPath;
@property (nonatomic, readonly) bool skipSandboxExtensions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientIdentity;
- (id)containerIdentities;
- (id)containerPaths;
- (id)containers;
- (bool)encodeResultOntoReply:(id)arg1;
- (bool)includeInfo;
- (bool)includePath;
- (bool)includeUserManagedAssetsRelPath;
- (id)initWithContainerPaths:(id)arg1 containerIdentities:(id)arg2 includePath:(bool)arg3 clientIdentity:(id)arg4 skipSandboxExtensions:(bool)arg5;
- (id)initWithContainers:(id)arg1 includePath:(bool)arg2 includeInfo:(bool)arg3 includeUserManagedAssetsRelPath:(bool)arg4 clientIdentity:(id)arg5 skipSandboxExtensions:(bool)arg6;
- (bool)skipSandboxExtensions;

@end
