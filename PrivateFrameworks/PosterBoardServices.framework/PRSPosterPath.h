
@interface PRSPosterPath : NSObject <BSInvalidatable, BSXPCSecureCoding, NSSecureCoding> {
    NSURL * _contentsURL;
    NSString * _descriptorIdentifier;
    ATXPosterDescriptorGalleryOptions * _galleryOptions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _lock_allExtensions;
    bool  _lock_invalidated;
    bool  _lock_purged;
    long long  _lock_sandboxExtensionHandle;
    unsigned char  _lock_validityExtensions;
    unsigned char  _lock_validityExtensionsHigh;
    unsigned char  _options;
    NSString * _role;
    BSAuditToken * _sandboxExtensionAuditToken;
    NSURL * _sandboxExtensionURL;
    PRSServerPosterIdentity * _serverIdentity;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) NSURL *containerURL;
@property (nonatomic, readonly, copy) NSURL *contentsURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *descriptorIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *role;
@property (nonatomic, readonly, copy) PRSServerPosterIdentity *serverIdentity;
@property (readonly) Class superclass;

+ (void)_setDisableUniquing:(bool)arg1;
+ (id)debugDescription;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;
+ (id)temporaryDescriptorPathWithIdentifier:(id)arg1 role:(id)arg2;
+ (id)temporaryPathForRole:(id)arg1;

- (void).cxx_destruct;
- (long long)compareDescriptorIdentifiers:(id)arg1;
- (id)containerURL;
- (id)contentsURL;
- (bool)copyContentsOfPath:(id)arg1 error:(out id*)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptorIdentifier;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)ensureContentsURLIsReachableAndReturnError:(out id*)arg1;
- (id)extendContentsReadAccessToAuditToken:(id)arg1 error:(out id*)arg2;
- (id)extendValidityForReason:(id)arg1;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (bool)isServerPosterPath;
- (id)loadGalleryOptionsWithError:(out id*)arg1;
- (id)loadUserInfoWithError:(out id*)arg1;
- (id)role;
- (id)serverIdentity;
- (bool)storeGalleryOptions:(id)arg1 error:(out id*)arg2;
- (bool)storeUserInfo:(id)arg1 error:(out id*)arg2;

@end
