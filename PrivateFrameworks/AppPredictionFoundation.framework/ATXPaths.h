
@interface ATXPaths : NSObject

+ (id)_getDirectoryCreating:(bool)arg1;
+ (void)_recursivelyCreateDirectoryWithErrorHandlingAtPath:(id)arg1;
+ (id)appPredictionBackupDirectory;
+ (id)appPredictionCacheDirectory;
+ (id)appPredictionDirectory;
+ (id)appPredictionDirectoryFile:(id)arg1;
+ (id)biomeStreamsRootDirectory;
+ (id)bookmarksPathFile:(id)arg1;
+ (id)clientModelCachesRootDirectory;
+ (id)complicationInlineSetCacheFilePath;
+ (id)complicationLandscapeModularSetCacheFilePath;
+ (id)complicationModularSetCacheFilePath;
+ (id)contextualActionsModelDirectory;
+ (id)contextualActionsModelFileWithFilename:(id)arg1;
+ (void)createDataVault:(id)arg1;
+ (void)createDirectoriesIfNeeded;
+ (id)faceGalleryDemoConfigurationFilePath;
+ (id)feedbackRootDirectory;
+ (id)magicalMomentsPredictionTablesRootDirectory;
+ (id)metricsRootDirectory;
+ (id)modeCachesRootDirectory;
+ (id)modificationDateOfFileAtPath:(id)arg1;
+ (id)onboardingStackResultCacheFilePath;
+ (id)onboardingStackWidgetCacheFilePath;
+ (id)posterConfigurationCacheFilePath;
+ (id)posterDescriptorCacheFilePath;
+ (id)scoreNormalizationModelDirectory;
+ (id)scoreNormalizationModelFileWithFilename:(id)arg1;
+ (id)trialFolderResourcePath;
+ (id)uiCachesRootDirectory;
+ (id)watchFaceConfigurationCacheFilePath;
+ (id)websiteSuggestionsVerticalModelCacheFilePath;
+ (id)websiteTitlesAndSubtitlesCacheFilePath;
+ (id)widgetPredictionModelDirectory;
+ (id)widgetPredictionModelFileWithFilename:(id)arg1;

@end
