
@protocol PLAlbumProtocol <PLAssetContainer>

@required

- (void)batchFetchAssets:(NSOrderedSet *)arg1;
- (bool)canContributeToCloudSharedAlbum;
- (NSURL *)groupURL;
- (bool)hasUnseenContentBoolValue;
- (NSString *)importSessionID;
- (bool)isCameraAlbum;
- (bool)isCloudSharedAlbum;
- (bool)isFamilyCloudSharedAlbum;
- (bool)isFolder;
- (bool)isInTrash;
- (bool)isLibrary;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isOwnedCloudSharedAlbum;
- (bool)isPanoramasAlbum;
- (bool)isPendingPhotoStreamAlbum;
- (bool)isPhotoStreamAlbum;
- (bool)isProjectAlbum;
- (bool)isRecentlyAddedAlbum;
- (bool)isStandInAlbum;
- (bool)isUserLibraryAlbum;
- (NSNumber *)kind;
- (int)kindValue;
- (int)pendingItemsCount;
- (int)pendingItemsType;
- (PLPhotoLibrary *)photoLibrary;
- (NSObject *)posterImage;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
- (void)setHasUnseenContentBoolValue:(bool)arg1;
- (void)setImportSessionID:(NSString *)arg1;
- (void)setPendingItemsCount:(int)arg1;
- (void)setPendingItemsType:(int)arg1;
- (bool)shouldDeleteWhenEmpty;
- (id /* block */)sortingComparator:(void *)arg1; // needs 1 arg types, found 6: id /* block */, id, id, void*, id, SEL

@optional

- (unsigned long long)batchSize;
- (NSMutableIndexSet *)filteredIndexesForPredicate:(NSPredicate *)arg1;
- (NSMutableOrderedSet *)mutableAssets;
- (NSString *)name;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setUINotificationsEnabled:(bool)arg1;

@end
