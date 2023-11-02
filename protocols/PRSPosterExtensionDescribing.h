
@protocol PRSPosterExtensionDescribing <BSInvalidatable>

@required

- (_EXHostConfiguration *)prs_hostConfiguration;
- (_EXExtensionIdentity *)prs_identity;
- (NSUUID *)prs_instanceIdentifier;
- (NSString *)prs_localizedName;
- (NSData *)prs_persistentIdentifier;
- (NSBundle *)prs_posterExtensionBundle;
- (NSString *)prs_posterExtensionBundleIdentifier;
- (NSString *)prs_posterExtensionContainerBundleIdentifier;
- (LSPropertyList *)prs_posterExtensionEntitlementsPlist;
- (LSPropertyList *)prs_posterExtensionInfoPlist;
- (RBSProcessIdentity *)prs_processIdentity;

@end
