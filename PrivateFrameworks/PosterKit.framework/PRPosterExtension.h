
@interface PRPosterExtension : NSObject <PRPosterExtensionDescribing> {
    PRSPosterExtension * _extension;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PRUpdatingService * _lock_assetUpdater;
    NSOperationQueue * _refreshConfigurationQueue;
    NSOperationQueue * _reloadDescriptorsQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *pr_supportedRoles;
@property (nonatomic, readonly) PRSPosterExtension *prs_extension;
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

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (void).cxx_destruct;
- (void)clearUpdatingServiceForReason:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithPRSPosterExtension:(id)arg1;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (void)pr_addRefreshConfigurationOperation:(id)arg1 waitUntilFinished:(bool)arg2;
- (void)pr_addReloadDescriptorOperation:(id)arg1;
- (id)pr_assetUpdaterWithError:(id*)arg1;
- (id)pr_refreshConfigurationOperations;
- (id)pr_reloadDescriptorOperations;
- (id)pr_supportedRoles;
- (id)prs_extension;
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

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (bool)pbf_supportsGalleryOrUserDefaultsHasItOverriddenToSupportGallery:(out bool*)arg1;

@end
