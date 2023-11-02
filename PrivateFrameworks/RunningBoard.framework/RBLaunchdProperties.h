
@interface RBLaunchdProperties : NSObject {
    NSString * _beforeTranslocationBundlePath;
    bool  _disableFreezing;
    bool  _doesOverrideHasBackoff;
    bool  _doesOverrideManagement;
    NSString * _executablePath;
    bool  _explicitAngelFlag;
    bool  _hasBackoff;
    NSString * _homeDirectory;
    int  _hostPid;
    NSString * _jobLabel;
    bool  _multiInstance;
    unsigned char  _overrideManageFlags;
    NSString * _path;
    RBSProcessIdentity * _specifiedIdentity;
    NSString * _tmpDirectory;
    long long  _type;
    NSString * _underlyingAssertion;
    NSUUID * _uuid;
    bool  _variableEUID;
}

@property (getter=isXPCService, nonatomic, readonly) bool XPCService;
@property (getter=isAngel, nonatomic, readonly) bool angel;
@property (nonatomic, readonly) NSString *beforeTranslocationBundlePath;
@property (getter=isDaemon, nonatomic, readonly) bool daemon;
@property (nonatomic, readonly) bool disableFreezing;
@property (nonatomic, readonly) bool doesOverrideManagement;
@property (nonatomic, readonly) NSString *executablePath;
@property (nonatomic, readonly) bool hasBackoff;
@property (nonatomic, readonly, copy) NSString *homeDirectory;
@property (nonatomic, readonly) int hostPid;
@property (nonatomic, readonly) NSString *jobLabel;
@property (getter=isMultiInstance, nonatomic, readonly) bool multiInstance;
@property (nonatomic, readonly) unsigned char overrideManageFlags;
@property (nonatomic, readonly, copy) RBSProcessIdentity *specifiedIdentity;
@property (nonatomic, readonly, copy) NSString *tmpDirectory;
@property (nonatomic, readonly) NSString *underlyingAssertion;
@property (nonatomic, readonly) NSUUID *uuid;
@property (getter=hasVariableEUID, nonatomic, readonly) bool variableEUID;

+ (id)_instanceWithProperties:(id)arg1 xpcProps:(id)arg2;
+ (id)processIdentityForEndpoint:(id)arg1;
+ (id)propertiesForJob:(id)arg1;
+ (id)propertiesForLabel:(id)arg1 error:(id*)arg2;
+ (id)propertiesForPid:(int)arg1;

- (void).cxx_destruct;
- (id)_configureAppWithProperties:(id)arg1;
- (id)_configureDaemonOrAngelWithProperties:(id)arg1 path:(id)arg2 isAngel:(bool)arg3;
- (id)_configureXPCServiceWithProperties:(id)arg1 HostPid:(int)arg2;
- (id)_initWithProperties:(id)arg1 xpcProps:(id)arg2;
- (void)_parseAdditionalProperties:(id)arg1;
- (void)_parseLASSProperties:(id)arg1;
- (id)beforeTranslocationBundlePath;
- (bool)disableFreezing;
- (bool)doesOverrideManagement;
- (id)executablePath;
- (bool)hasBackoff;
- (bool)hasVariableEUID;
- (id)homeDirectory;
- (int)hostPid;
- (bool)isAngel;
- (bool)isDaemon;
- (bool)isMultiInstance;
- (bool)isXPCService;
- (id)jobLabel;
- (unsigned char)overrideManageFlags;
- (id)resolvedIdentity;
- (id)resolvedIdentityWithPid:(int)arg1 auid:(unsigned int)arg2;
- (id)specifiedIdentity;
- (id)tmpDirectory;
- (id)underlyingAssertion;
- (id)uuid;

@end
