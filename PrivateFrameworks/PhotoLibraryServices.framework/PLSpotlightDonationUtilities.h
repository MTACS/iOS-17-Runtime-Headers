
@interface PLSpotlightDonationUtilities : NSObject

+ (void)_searchableItemsFromManagedObjects:(id)arg1 entityName:(id)arg2 translatorConfiguration:(id)arg3 itemsToUpdate:(out id*)arg4 searchableItemUUIDsToRemove:(out id*)arg5;
+ (long long)_wellKnownPhotoLibraryIdentifierFromPLPhotoLibrary:(id)arg1;
+ (id)bundleIdentifierForAsset:(id)arg1;
+ (id)domainIdentifierForPhotoLibrary:(id)arg1;
+ (id)domainIdentifierForSystemPhotoLibrary;
+ (id)domainIdentifierForSystemPhotoLibraryEntities;
+ (bool)isUniversalSearchEnabledForPhotoLibrary:(id)arg1;
+ (bool)isVideoSearchEnabledForPhotoLibrary:(id)arg1;
+ (id)photosBundleIdentifier;
+ (bool)searchableItemsFromManagedObjectIDs:(id)arg1 entityName:(id)arg2 translatorConfiguration:(id)arg3 photoLibrary:(id)arg4 searchableItemsToIndex:(out id*)arg5 searchableItemUUIDsToRemove:(out id*)arg6;
+ (id)searchableItemsFromManagedObjects:(id)arg1 entityName:(id)arg2 translatorConfiguration:(id)arg3;
+ (bool)shouldDisablePhotosLegacySearchDonationForPhotoLibrary:(id)arg1;
+ (id)spotlightUniqueIdentifierForAsset:(id)arg1;
+ (unsigned long long)universalSearchIneligibilityReasonsForPhotoLibraryWithURL:(id)arg1;
+ (bool)useSpotlightPrivateIndex;

@end
