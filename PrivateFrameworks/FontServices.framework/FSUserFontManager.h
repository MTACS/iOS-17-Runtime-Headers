
@interface FSUserFontManager : NSObject

+ (id)_UserFontManagerConnection;
+ (void)_removeAllUserFonts;
+ (struct { unsigned int x1[8]; })auditToken;
+ (void)deleteAppDialogWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)directoryNameFromIdentifier:(id)arg1;
+ (void)enableOrDisablePersistentURLs:(id)arg1 enabled:(bool)arg2;
+ (id)fontProvidersSubscriptionSupportInfoAndFontFamiliesInstalled:(unsigned long long*)arg1 andRemovedCount:(unsigned long long*)arg2 andProfileFontsCount:(unsigned long long*)arg3;
+ (id)identifierFromDirectoryName:(id)arg1;
+ (void)installFonts:(id)arg1 forIdentifier:(id)arg2 enabled:(bool)arg3 appInfo:(id)arg4 completionHandler:(id /* block */)arg5;
+ (id)knownFontProviders;
+ (id)profileFontsInfo;
+ (id)registeredFamiliesForIdentifier:(id)arg1 enabled:(bool)arg2;
+ (id)registeredFontsForIdentifier:(id)arg1 enabled:(bool)arg2;
+ (id)registeredFontsInfoForIdentifier:(id)arg1 enabled:(bool)arg2 appInfo:(id)arg3;
+ (void)reset;
+ (id)resumeSuspendedFontFiles;
+ (double)secondsSinceLastAccessed:(id)arg1;
+ (void)suspendFontProvider:(id)arg1;
+ (id)suspendedFontProviders;
+ (void)synchronizeFontAssets:(id /* block */)arg1;
+ (void)synchronizeFontProviders;
+ (void)synchronizeProfileFonts:(id /* block */)arg1;
+ (void)uninstallFonts:(id)arg1 forIdentifier:(id)arg2 appInfo:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)unregisterAndRemoveFontFilesForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)updateAppInfo:(id)arg1 forIdentifier:(id)arg2;
+ (id)userFontsInfo;
+ (id)xpcInterface;

@end
