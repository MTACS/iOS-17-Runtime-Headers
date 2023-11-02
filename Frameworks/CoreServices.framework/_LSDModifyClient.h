
@interface _LSDModifyClient : _LSDClient <_LSDModifyProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canRegisterWithOptions:(unsigned int)arg1;
- (bool)clientHasMIEntitlement:(id)arg1;
- (bool)clientIsEntitledForPostInstallationOperations;
- (void)forceSaveForTestingWithCompletion:(id /* block */)arg1;
- (void)garbageCollectDatabaseWithCompletionHandler:(id /* block */)arg1;
- (void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)performPostInstallationRegistration:(id)arg1 personaUniqueStrings:(id)arg2 operationUUID:(id)arg3 reply:(id /* block */)arg4;
- (void)performPostUninstallationUnregistrationOfBundleID:(id)arg1 operationUUID:(id)arg2 unregisterType:(unsigned int)arg3 precondition:(id)arg4 reply:(id /* block */)arg5;
- (void)performShimmedInstallOfArtifact:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)performShimmedUninstallOfApplicationWithIdentifier:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)performUpdateOfPersonasOfBundleID:(id)arg1 toPersonaUniqueStrings:(id)arg2 operationUUID:(id)arg3 reply:(id /* block */)arg4;
- (void)rebuildApplicationDatabasesForSystem:(bool)arg1 internal:(bool)arg2 user:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)refreshContentInFrameworkAtURL:(id)arg1 reply:(id /* block */)arg2;
- (void)registerContainerURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerExtensionPoint:(id)arg1 platform:(unsigned int)arg2 declaringURL:(id)arg3 withInfo:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)registerItemInfo:(id)arg1 alias:(id)arg2 diskImageAlias:(id)arg3 bundleURL:(id)arg4 installationPlist:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)relaxApplicationTypeRequirements:(bool)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeAllHandlerPrefsForBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllHandlersWithCompletionHandler:(id /* block */)arg1;
- (void)removeHandlerForContentType:(id)arg1 roles:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)removeHandlerForURLScheme:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resetServerStoreWithCompletionHandler:(id /* block */)arg1;
- (void)setDatabaseIsSeeded:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setHandler:(id)arg1 version:(struct LSVersionNumber { unsigned char x1[32]; })arg2 forURLScheme:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setHandler:(id)arg1 version:(struct LSVersionNumber { unsigned char x1[32]; })arg2 roles:(unsigned int)arg3 forContentType:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setPreferenceValue:(id)arg1 forKey:(id)arg2 forApplicationAtURL:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setPreferenceValueForCallingApplication:(id)arg1 forKey:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setUpdateAvailabilities:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)synchronizeWithMobileInstallation;
- (void)uninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)unregisterApplicationAtURL:(id)arg1 reply:(id /* block */)arg2;
- (void)unregisterApplicationsAtMountPoint:(id)arg1 operationUUID:(id)arg2 reply:(id /* block */)arg3;
- (void)unregisterBundleUnit:(unsigned int)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)unregisterExtensionPoint:(id)arg1 platform:(unsigned int)arg2 withVersion:(id)arg3 parentBundleUnit:(unsigned int)arg4 completionHandler:(id /* block */)arg5;
- (void)updateContainerUnit:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 placeholderMetadata:(id)arg4 sendNotification:(int)arg5 operationUUID:(id)arg6 returnSaveToken:(bool)arg7 completionHandler:(id /* block */)arg8;
- (void)willHandleInvocation:(id)arg1 isReply:(bool)arg2;

@end
