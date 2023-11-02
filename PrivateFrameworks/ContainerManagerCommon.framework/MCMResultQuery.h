
@interface MCMResultQuery : MCMResultBase {
    MCMClientIdentity * _clientIdentity;
    NSArray * _containers;
    bool  _includeInfo;
    bool  _includePath;
    bool  _includeUserManagedAssetsRelPath;
    bool  _issueSandboxExtensions;
    bool  _legacyExtensionPolicy;
    bool  _legacyPersonaPolicy;
}

@property (nonatomic, readonly) MCMClientIdentity *clientIdentity;
@property (nonatomic, readonly) NSArray *containers;
@property (nonatomic, readonly) bool includeInfo;
@property (nonatomic, readonly) bool includePath;
@property (nonatomic, readonly) bool includeUserManagedAssetsRelPath;
@property (nonatomic, readonly) bool issueSandboxExtensions;
@property (nonatomic, readonly) bool legacyExtensionPolicy;
@property (nonatomic, readonly) bool legacyPersonaPolicy;

- (void).cxx_destruct;
- (void)_compileContainerDataForIndex:(unsigned long long)arg1 container:(struct container_object_s {}**)arg2 infos:(id)arg3 tokens:(id)arg4;
- (id)clientIdentity;
- (id)containers;
- (bool)encodeResultOntoReply:(id)arg1;
- (bool)includeInfo;
- (bool)includePath;
- (bool)includeUserManagedAssetsRelPath;
- (id)initWithContainers:(id)arg1 clientIdentity:(id)arg2 issueSandboxExtensions:(bool)arg3 includePath:(bool)arg4 includeInfo:(bool)arg5 legacyPersonaPolicy:(bool)arg6 legacyExtensionPolicy:(bool)arg7 includeUserManagedAssetsRelPath:(bool)arg8;
- (bool)issueSandboxExtensions;
- (bool)legacyExtensionPolicy;
- (bool)legacyPersonaPolicy;

@end
