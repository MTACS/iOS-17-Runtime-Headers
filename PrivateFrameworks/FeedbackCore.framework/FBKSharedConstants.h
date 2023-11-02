
@interface FBKSharedConstants : FBKSSharedConstants

+ (id)_localizedAttachmentLegalTextKeyForDraftID:(id)arg1;
+ (bool)currentIDMSEnvironmentMatchesCurrentFBKSEnvironment;
+ (long long)currentLegalVersion;
+ (id)darkModeCSS;
+ (void)deleteAttachmentLegalTextForDraftID:(id)arg1;
+ (void)deleteStaleAttachmentLegalTextEntries;
+ (id)developerURL;
+ (bool)hasDifferentLanguageSinceLastLaunch;
+ (void)initialize;
+ (bool)isEnhancedLoggingEnabled;
+ (bool)isProductionEnvironment;
+ (bool)isRunningInFBA;
+ (bool)listsFormsFetchedByTat;
+ (id)localizedAttachmentLegalTextForDraftID:(id)arg1;
+ (id)modelName;
+ (id)publicBetaURL;
+ (id)publicPortalURL;
+ (void)recordCurrentLanguagePreference;
+ (void)saveLocalizedAttachmentLegalText:(id)arg1 draftID:(id)arg2;
+ (id)seedPortalURL;
+ (id)sharedUserDefaults;
+ (bool)tracksFileUploadsLocally;
+ (bool)usesPersistentStore;
+ (bool)usesTemporaryDraftsDirectory;

@end
