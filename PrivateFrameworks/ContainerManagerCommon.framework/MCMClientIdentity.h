
@interface MCMClientIdentity : NSObject <MCMAllows, NSCopying> {
    bool  _cached;
    <MCMClientCodeSignInfo> * _codeSignInfo;
    struct { 
        unsigned int val[8]; 
    }  _effectiveAuditToken;
    bool  _extension;
    bool  _kernel;
    unsigned int  _platform;
    int  _posixPID;
    MCMPOSIXUser * _posixUser;
    struct { 
        unsigned int val[8]; 
    }  _realAuditToken;
    NSURL * _sandboxContainerURL;
    bool  _sandboxed;
    MCMUserIdentity * _userIdentity;
}

@property (nonatomic, readonly) bool cached;
@property (nonatomic, readonly) <MCMClientCodeSignInfo> *codeSignInfo;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } effectiveAuditToken;
@property (getter=isExtension, nonatomic, readonly) bool extension;
@property (getter=isKernel, nonatomic, readonly) bool kernel;
@property (nonatomic, readonly) unsigned int platform;
@property (nonatomic, readonly) int posixPID;
@property (nonatomic, readonly) MCMPOSIXUser *posixUser;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } realAuditToken;
@property (nonatomic, readonly) NSURL *sandboxContainerURL;
@property (getter=isSandboxed, nonatomic, readonly) bool sandboxed;
@property (nonatomic, readonly) MCMUserIdentity *userIdentity;

+ (id)anonymousPrivilegedClientIdentityWithUserIdentity:(id)arg1;
+ (id)privilegedClientIdentityWithUserIdentity:(id)arg1 kernel:(bool)arg2;

- (void).cxx_destruct;
- (bool)cached;
- (id)clientIdentityByChangingCached:(bool)arg1;
- (id)codeSignInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct container_client { char *x1; unsigned int x2; char *x3; unsigned int x4; unsigned int x5; struct { unsigned int x_6_1_1[8]; } x6; int x7; bool x8; bool x9; bool x10; id x11; }*)createLibsystemClient;
- (id)description;
- (struct { unsigned int x1[8]; })effectiveAuditToken;
- (id)init;
- (id)initInternal;
- (id)initWithPOSIXUser:(id)arg1 POSIXPID:(int)arg2 platform:(unsigned int)arg3 userIdentity:(id)arg4 effectiveAuditToken:(struct { unsigned int x1[8]; })arg5 realAuditToken:(struct { unsigned int x1[8]; })arg6 codeSignInfo:(id)arg7 extension:(bool)arg8 sandboxed:(bool)arg9 sandboxContainerURL:(id)arg10 kernel:(bool)arg11;
- (bool)isAllowedToAccessCodesignMapping;
- (bool)isAllowedToAccessContainerIdentity:(id)arg1 error:(unsigned long long*)arg2;
- (bool)isAllowedToAccessInfoMetadata;
- (bool)isAllowedToAccessUserAssets;
- (bool)isAllowedToChangeReferences;
- (bool)isAllowedToControlCaches;
- (bool)isAllowedToDelete;
- (bool)isAllowedToLookupAllContainersOfClass:(unsigned long long)arg1;
- (bool)isAllowedToLookupContainerIdentity:(id)arg1;
- (bool)isAllowedToLookupGroupContainersOfClass:(unsigned long long)arg1 ownedByIdentifier:(id)arg2;
- (bool)isAllowedToLookupViaPrivateEntitlementWithClass:(unsigned long long)arg1 identifier:(id)arg2;
- (bool)isAllowedToReadReferences;
- (bool)isAllowedToRecreateContainerStructure;
- (bool)isAllowedToRegenerateDirectoryUUIDs;
- (bool)isAllowedToReplaceContainers;
- (bool)isAllowedToRestoreContainer;
- (bool)isAllowedToSetDataProtection;
- (bool)isAllowedToStageSharedContent;
- (bool)isAllowedToStartDataMigration;
- (bool)isAllowedToStartUserDataMigration;
- (bool)isAllowedToTest;
- (bool)isAllowedToWipeAnyDataContainer;
- (bool)isAllowedToWipePlugInDataContainerWithIdentifier:(id)arg1;
- (bool)isExtension;
- (bool)isKernel;
- (bool)isSandboxed;
- (char *)issueSandboxExtensionWithMetadata:(id)arg1 legacyExtensionPolicy:(bool)arg2 error:(id*)arg3;
- (bool)needsSandboxExtensionForContainerWithClass:(unsigned long long)arg1 identifier:(id)arg2;
- (unsigned int)platform;
- (int)posixPID;
- (id)posixUser;
- (struct { unsigned int x1[8]; })realAuditToken;
- (id)sandboxContainerURL;
- (id)shortDescription;
- (id)userIdentity;

@end
