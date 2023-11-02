
@interface WBSBundleWebExtension : NSObject <WBSWebExtensionDataForwarding> {
    WKBrowsingContextHandle * _backgroundPageHandle;
    NSMutableSet * _browsingContextsDisplayingExtensionContent;
    WBSWebExtensionData * _data;
    WKWebProcessPlugInScriptWorld * _isolatedWorld;
    WBSBundleWebExtensionBrowsingContext * _popupHandle;
}

@property (nonatomic, retain) WKBrowsingContextHandle *backgroundPageHandle;
@property (nonatomic, readonly) bool backgroundPageIsPersistent;
@property (nonatomic, readonly) bool backgroundPageIsServiceWorker;
@property (nonatomic, readonly) bool backgroundPageUsesModules;
@property (nonatomic, readonly) JSValue *backgroundPageWindowObject;
@property (nonatomic, readonly) NSArray *commands;
@property (nonatomic, readonly) NSString *composedIdentifier;
@property (nonatomic, readonly) NSDictionary *configuredPermissionOrigins;
@property (nonatomic, readonly) NSDictionary *configuredPermissions;
@property (nonatomic, readonly) NSString *contentSecurityPolicy;
@property (nonatomic, readonly) NSSet *currentAccessibleOrigins;
@property (nonatomic, readonly) NSSet *currentPermissionOrigins;
@property (nonatomic, readonly) NSSet *currentPermissions;
@property (nonatomic, retain) WBSWebExtensionData *data;
@property (nonatomic, readonly) NSString *displayDescription;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *displayShortName;
@property (nonatomic, readonly) NSString *displayVersion;
@property (nonatomic, readonly) NSArray *externallyConnectableMatchPatternStrings;
@property (nonatomic, readonly) NSSet *externallyConnectableMatchPatterns;
@property (nonatomic, readonly) NSString *generatedBackgroundPageContent;
@property (nonatomic, copy) NSDictionary *grantedPermissionOrigins;
@property (nonatomic, copy) NSDictionary *grantedPermissions;
@property (nonatomic, readonly) bool hasAbilityToInjectContentIntoWebpages;
@property (nonatomic, readonly) bool hasAction;
@property (nonatomic, readonly) bool hasBrowserAction;
@property (nonatomic, readonly) bool hasCommands;
@property (nonatomic, readonly) bool hasDeclarativeNetRequestHostAccessPermission;
@property (nonatomic, readonly) bool hasDeclarativeNetRequestPermission;
@property (nonatomic, readonly) bool hasPageAction;
@property (nonatomic, readonly) bool hasStorage;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) NSArray *injectedContentData;
@property (nonatomic, retain) WKWebProcessPlugInScriptWorld *isolatedWorld;
@property (nonatomic, readonly) WBSWebExtensionLocalization *localization;
@property (nonatomic, readonly) NSDictionary *manifest;
@property (nonatomic, readonly) NSSet *manifestAccessibleOrigins;
@property (nonatomic, readonly) NSArray *manifestErrors;
@property (nonatomic, readonly) NSSet *manifestOptionalPermissionOrigins;
@property (nonatomic, readonly) NSSet *manifestOptionalPermissions;
@property (nonatomic, readonly) NSSet *manifestPermissionOrigins;
@property (nonatomic, readonly) NSSet *manifestPermissions;
@property (nonatomic, readonly) long long manifestVersion;
@property (nonatomic, readonly) NSURL *newTabOverridePageURL;
@property (nonatomic, retain) WBSBundleWebExtensionBrowsingContext *popupHandle;
@property (nonatomic, readonly) UIImage *preferencesIcon;
@property (nonatomic, readonly) NSString *processDisplayName;
@property (nonatomic, readonly) NSArray *relatedBrowsingContextHandles;
@property (nonatomic) bool requestedOptionalAccessToAllHosts;
@property (nonatomic, readonly) NSSet *requestedPermissionOriginsNotAlreadyConfigured;
@property (nonatomic, readonly) NSSet *requestedPermissionsNotAlreadyConfigured;
@property (nonatomic, readonly) bool requestsAccessToAllHosts;
@property (nonatomic, copy) NSDictionary *revokedPermissionOrigins;
@property (nonatomic, copy) NSDictionary *revokedPermissions;
@property (nonatomic, readonly) UIImage *toolbarImage;
@property (nonatomic, readonly) bool usesManifestVersion3;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSArray *webAccessibleResources;

- (void).cxx_destruct;
- (id)_windowObjectForBrowsingContext:(id)arg1;
- (void)addBrowsingContextDisplayingExtensionContent:(id)arg1;
- (id)allWindowObjectsWithProperties:(id)arg1 usingContext:(struct OpaqueJSContext { }*)arg2;
- (id)backgroundPageHandle;
- (id)backgroundPageWindowObject;
- (id)composedIdentifier;
- (id)data;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithWebExtensionData:(id)arg1;
- (id)isolatedWorld;
- (id)localization;
- (id)manifest;
- (id)popupHandle;
- (id)relatedBrowsingContextHandles;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setBackgroundPageHandle:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIsolatedWorld:(id)arg1;
- (void)setPopupHandle:(id)arg1;

@end