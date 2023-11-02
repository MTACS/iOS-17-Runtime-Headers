
@interface REMPaths : NSObject

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

+ (id)URLForGroupContainerWithIdentifier:(id)arg1;
+ (bool)_legacy_shouldUseCentralizedDataPath;
+ (id)attributesForGroupContainerDirectory;
+ (id)createTemporaryFileDirectoryURLIfNeededWithError:(id*)arg1;
+ (id)dataSeparationEnabled_applicationDocumentsURL;
+ (id)legacy_applicationDocumentsURL;
+ (id)legacy_centralizedDataPath;
+ (void)unitTest_setLegacyApplicationDocumentsURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ReminderKitInternal.framework/ReminderKitInternal

+ (id)_legacy_mlModelURL;
+ (id)_legacy_temporaryMLModelURL;
+ (id)mlModelURL;

@end
