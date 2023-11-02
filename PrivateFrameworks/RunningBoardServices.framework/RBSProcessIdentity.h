
@interface RBSProcessIdentity : NSObject <FBSSceneClientIdentifying, NSCopying, NSSecureCoding, RBSProcessMatching, RBSXPCSecureCoding> {
    NSString * _angelJobLabel;
    NSString * _description;
    unsigned long long  _hash;
    NSString * _persona;
    int  _pid;
    NSData * _validationToken;
}

@property (getter=isXPCService, nonatomic, readonly) bool XPCService;
@property (getter=isAngel, nonatomic, readonly) bool angel;
@property (nonatomic, readonly, copy) NSString *angelJobLabel;
@property (getter=isAnonymous, nonatomic, readonly) bool anonymous;
@property (getter=isApplication, nonatomic, readonly) bool application;
@property (nonatomic, readonly, copy) NSString *applicationJobLabel;
@property (nonatomic, readonly) unsigned int auid;
@property (getter=hasConsistentLaunchdJob, nonatomic, readonly) bool consistentLaunchdJob;
@property (nonatomic, readonly, copy) NSString *consistentLaunchdJobLabel;
@property (getter=isDaemon, nonatomic, readonly) bool daemon;
@property (nonatomic, readonly, copy) NSString *daemonJobLabel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned char defaultManageFlags;
@property (readonly, copy) NSString *description;
@property (getter=isDext, nonatomic, readonly) bool dext;
@property (nonatomic, readonly) NSString *dextContainingAppBundleID;
@property (nonatomic, readonly) NSString *dextLabel;
@property (nonatomic, readonly) NSString *dextServerName;
@property (getter=isEmbeddedApplication, nonatomic, readonly) bool embeddedApplication;
@property (nonatomic, readonly, copy) NSString *embeddedApplicationIdentifier;
@property (getter=isExtension, nonatomic, readonly) bool extension;
@property (getter=isExternal, nonatomic, readonly) bool external;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) RBSProcessIdentifier *hostIdentifier;
@property (nonatomic, readonly, copy) RBSProcessIdentity *hostIdentity;
@property (nonatomic, readonly) bool inheritsCoalitionBand;
@property (nonatomic) unsigned char osServiceType;
@property (nonatomic, readonly, copy) NSString *persona;
@property (nonatomic, readonly, copy) NSString *personaString;
@property (nonatomic, readonly) int platform;
@property (nonatomic, readonly) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsLaunchingDirectly;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly, copy) NSData *validationToken;
@property (nonatomic, readonly, copy) NSString *xpcServiceIdentifier;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)_identityForXPCServiceIdentifier:(id)arg1 variant:(long long)arg2;
+ (id)extensionIdentityForBundleIdentifier:(id)arg1 persona:(id)arg2 instanceUUID:(id)arg3 hostIdentifier:(id)arg4 validationToken:(id)arg5;
+ (id)extensionIdentityForPlugInKitIdentifier:(id)arg1 bundledURL:(id)arg2 hostIdentifier:(id)arg3 UUID:(id)arg4;
+ (id)extensionIdentityForPlugInKitIdentifier:(id)arg1 hostIdentifier:(id)arg2 UUID:(id)arg3;
+ (id)externalExtensionIdentityForExtensionKitIdentifier:(id)arg1 bundledURL:(id)arg2 hostIdentifier:(id)arg3 UUID:(id)arg4;
+ (id)externalExtensionIdentityForExtensionKitIdentifier:(id)arg1 hostIdentifier:(id)arg2 UUID:(id)arg3;
+ (id)identityForAngelJobLabel:(id)arg1;
+ (id)identityForApplicationJobLabel:(id)arg1;
+ (id)identityForApplicationJobLabel:(id)arg1 bundleID:(id)arg2 platform:(int)arg3;
+ (id)identityForDaemonJobLabel:(id)arg1;
+ (id)identityForDextWithServerName:(id)arg1 tagString:(id)arg2 containingAppBundleID:(id)arg3;
+ (id)identityForEmbeddedApplicationIdentifier:(id)arg1;
+ (id)identityForEmbeddedApplicationIdentifier:(id)arg1 auid:(unsigned int)arg2;
+ (id)identityForEmbeddedApplicationIdentifier:(id)arg1 jobLabel:(id)arg2 auid:(unsigned int)arg3 platform:(int)arg4;
+ (id)identityForExecutablePath:(id)arg1 pid:(int)arg2 auid:(unsigned int)arg3;
+ (id)identityForLSApplicationIdentity:(id)arg1;
+ (id)identityForLSApplicationIdentity:(id)arg1 LSApplicationRecord:(id)arg2;
+ (id)identityForLaunchdJobLabel:(id)arg1 isMultiInstance:(bool)arg2 pid:(int)arg3 auid:(unsigned int)arg4;
+ (id)identityForMacApplicationJobLabel:(id)arg1 appID:(id)arg2 bundleID:(id)arg3 platform:(int)arg4;
+ (id)identityForMacApplicationJobLabel:(id)arg1 appID:(id)arg2 platform:(int)arg3;
+ (id)identityForMacApplicationJobLabel:(id)arg1 wrappedInfoProvider:(id)arg2 platform:(int)arg3;
+ (id)identityForPlugInKitIdentifier:(id)arg1;
+ (id)identityForUnknownServiceWithJobLabel:(id)arg1;
+ (id)identityForWrappedInfoProviderIdentity:(id)arg1;
+ (id)identityForXPCServiceExecutablePath:(id)arg1 host:(id)arg2;
+ (id)identityForXPCServiceExecutablePath:(id)arg1 pid:(int)arg2 auid:(unsigned int)arg3 host:(id)arg4 UUID:(id)arg5;
+ (id)identityForXPCServiceIdentifier:(id)arg1;
+ (id)identityForXPCServiceIdentifier:(id)arg1 hostInstance:(id)arg2 UUID:(id)arg3 persona:(id)arg4 validationToken:(id)arg5 variant:(long long)arg6;
+ (id)identityForXPCServiceIdentifier:(id)arg1 hostInstance:(id)arg2 UUID:(id)arg3 variant:(long long)arg4;
+ (id)identityOfCurrentProcess;
+ (bool)shouldManageExtensionWithExtensionPoint:(id)arg1;
+ (bool)supportsRBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (bool)_matchesIdentity:(id)arg1;
- (id)angelJobLabel;
- (id)applicationJobLabel;
- (unsigned int)auid;
- (id)consistentLaunchdJobLabel;
- (id)copyWithAuid:(unsigned int)arg1;
- (id)copyWithPersonaString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daemonJobLabel;
- (id)debugDescription;
- (unsigned char)defaultManageFlags;
- (id)description;
- (id)dextContainingAppBundleID;
- (id)dextLabel;
- (id)dextServerName;
- (id)embeddedApplicationIdentifier;
- (id)encodeForJob;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (bool)hasConsistentLaunchdJob;
- (unsigned long long)hash;
- (id)hostIdentifier;
- (id)hostIdentity;
- (bool)inheritsCoalitionBand;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDecodeFromJob:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isAngel;
- (bool)isAnonymous;
- (bool)isApplication;
- (bool)isDaemon;
- (bool)isDext;
- (bool)isEmbeddedApplication;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIdentity:(id)arg1;
- (bool)isExtension;
- (bool)isExternal;
- (bool)isXPCService;
- (bool)matchesProcess:(id)arg1;
- (bool)matchesRecoveredIdentity:(id)arg1;
- (unsigned char)osServiceType;
- (id)persona;
- (id)personaString;
- (int)platform;
- (id)processPredicate;
- (void)setOsServiceType:(unsigned char)arg1;
- (id)shortDescription;
- (bool)supportsLaunchingDirectly;
- (bool)treatedAsAnAppByFrontBoard:(id*)arg1;
- (id)uuid;
- (id)validationToken;
- (id)xpcServiceIdentifier;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (Class)fb_processClass;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

- (id)fbs_sceneClientIdentity;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (id)createRBSTarget;
- (id)environment;
- (id)identity;
- (bool)isSystem;
- (id)process;

@end
