
@interface PRSPosterExtension : NSObject <PRSPosterExtensionDescribing> {
    _EXHostConfiguration * _hostConfiguration;
    _EXExtensionIdentity * _identity;
    NSUUID * _instanceIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RBSProcessIdentity * _processIdentity;
    LSApplicationExtensionRecord * _record;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _EXHostConfiguration *prs_hostConfiguration;
@property (nonatomic, readonly) _EXExtensionIdentity *prs_identity;
@property (nonatomic, readonly) NSUUID *prs_instanceIdentifier;
@property (nonatomic, readonly) NSString *prs_localizedName;
@property (nonatomic, readonly) NSData *prs_persistentIdentifier;
@property (nonatomic, readonly) NSBundle *prs_posterExtensionBundle;
@property (nonatomic, readonly) NSString *prs_posterExtensionBundleIdentifier;
@property (nonatomic, readonly) NSString *prs_posterExtensionContainerBundleIdentifier;
@property (nonatomic, readonly) LSPropertyList *prs_posterExtensionEntitlementsPlist;
@property (nonatomic, readonly) LSPropertyList *prs_posterExtensionInfoPlist;
@property (nonatomic, readonly) RBSProcessIdentity *prs_processIdentity;
@property (readonly) Class superclass;

+ (id)extensionWithHostConfiguration:(id)arg1 instanceIdentifier:(id)arg2;
+ (id)extensionWithIdentity:(id)arg1;
+ (id)extensionWithIdentity:(id)arg1 instanceIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithHostConfiguration:(id)arg1 instanceIdentifier:(id)arg2;
- (id)applicationExtensionRecord;
- (id)description;
- (unsigned long long)hash;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (id)pr_hostConfiguration;
- (id)pr_identity;
- (id)prs_hostConfiguration;
- (id)prs_identity;
- (id)prs_instanceIdentifier;
- (id)prs_localizedName;
- (id)prs_persistentIdentifier;
- (id)prs_posterExtensionBundle;
- (id)prs_posterExtensionBundleIdentifier;
- (id)prs_posterExtensionContainerBundleIdentifier;
- (id)prs_posterExtensionEntitlementsPlist;
- (id)prs_posterExtensionInfoPlist;
- (id)prs_processIdentity;

@end
