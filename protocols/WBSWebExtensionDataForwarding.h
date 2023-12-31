
@protocol WBSWebExtensionDataForwarding

@optional

- (bool)backgroundPageIsPersistent;
- (bool)backgroundPageIsServiceWorker;
- (bool)backgroundPageUsesModules;
- (NSArray *)commands;
- (NSDictionary *)configuredPermissionOrigins;
- (NSDictionary *)configuredPermissions;
- (NSString *)contentSecurityPolicy;
- (NSSet *)currentAccessibleOrigins;
- (NSSet *)currentPermissionOrigins;
- (NSSet *)currentPermissions;
- (NSString *)displayDescription;
- (NSString *)displayName;
- (NSString *)displayShortName;
- (NSString *)displayVersion;
- (NSArray *)externallyConnectableMatchPatternStrings;
- (NSSet *)externallyConnectableMatchPatterns;
- (NSString *)generatedBackgroundPageContent;
- (void)grantPermissions:(NSSet *)arg1 origins:(NSSet *)arg2 expirationDate:(NSDate *)arg3;
- (NSDictionary *)grantedPermissionOrigins;
- (NSDictionary *)grantedPermissions;
- (bool)hasAbilityToInjectContentIntoWebpages;
- (bool)hasAction;
- (bool)hasBrowserAction;
- (bool)hasCommands;
- (bool)hasDeclarativeNetRequestHostAccessPermission;
- (bool)hasDeclarativeNetRequestPermission;
- (bool)hasInjectedContentDataForURL:(NSURL *)arg1;
- (bool)hasPageAction;
- (bool)hasPermission:(NSString *)arg1;
- (bool)hasPermissionToAccessAllHosts;
- (bool)hasPermissionToAccessAllURLs;
- (bool)hasPermissionToAccessURL:(NSURL *)arg1;
- (bool)hasPermissions:(NSSet *)arg1 origins:(NSSet *)arg2;
- (bool)hasStorage;
- (UIImage *)icon;
- (NSArray *)injectedContentData;
- (bool)isAccessibleResourceURL:(NSURL *)arg1 fromWebPageWithURL:(NSURL *)arg2;
- (void)loadBackgroundPageIfNecessaryWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSSet *)manifestAccessibleOrigins;
- (NSArray *)manifestErrors;
- (NSSet *)manifestOptionalPermissionOrigins;
- (NSSet *)manifestOptionalPermissions;
- (NSSet *)manifestPermissionOrigins;
- (NSSet *)manifestPermissions;
- (long long)manifestVersion;
- (NSURL *)newTabOverridePageURL;
- (long long)permissionStateForURL:(NSURL *)arg1;
- (long long)permissionStateForURL:(NSURL *)arg1 options:(unsigned long long)arg2;
- (void)populateAllPropertiesIfNeededToRecordManifestErrors;
- (UIImage *)preferencesIcon;
- (NSString *)processDisplayName;
- (void)removeGrantedAndRevokedPermissions:(NSSet *)arg1 origins:(NSSet *)arg2 exactPatternMatchesOnly:(bool)arg3;
- (void)removeGrantedPermissions:(NSSet *)arg1 origins:(NSSet *)arg2 exactPatternMatchesOnly:(bool)arg3;
- (void)removeRevokedPermissions:(NSSet *)arg1 origins:(NSSet *)arg2 exactPatternMatchesOnly:(bool)arg3;
- (bool)requestedOptionalAccessToAllHosts;
- (NSSet *)requestedPermissionOriginsNotAlreadyConfigured;
- (NSSet *)requestedPermissionsNotAlreadyConfigured;
- (bool)requestsAccessToAllHosts;
- (void)revokePermissions:(NSSet *)arg1 origins:(NSSet *)arg2 expirationDate:(NSDate *)arg3;
- (NSDictionary *)revokedPermissionOrigins;
- (NSDictionary *)revokedPermissions;
- (void)scheduleBackgroundPageToUnload;
- (void)setGrantedPermissionOrigins:(NSDictionary *)arg1;
- (void)setGrantedPermissions:(NSDictionary *)arg1;
- (void)setRequestedOptionalAccessToAllHosts:(bool)arg1;
- (void)setRevokedPermissionOrigins:(NSDictionary *)arg1;
- (void)setRevokedPermissions:(NSDictionary *)arg1;
- (bool)shouldShowToolbarItemForTab:(id <WBSWebExtensionTab>)arg1;
- (UIImage *)toolbarImage;
- (bool)usesManifestVersion3;
- (bool)verifyRequestedPermissions:(NSSet *)arg1 origins:(NSSet *)arg2 errorMessage:(id*)arg3;
- (NSString *)version;
- (NSArray *)webAccessibleResources;

@end
