
@interface CLSCurationUtilities : NSObject

+ (id)blockedImportedByBundleIdentifiers;
+ (id)importedByBundleIdentifiersForBlockedForMemories;
+ (bool)isBlockedForMemoriesWithImportedByBundleIdentifier:(id)arg1;
+ (bool)isBlocklistedImportedByBundleIdentifier:(id)arg1;
+ (bool)isRiskyFileFormatWithAsset:(id)arg1;

@end
