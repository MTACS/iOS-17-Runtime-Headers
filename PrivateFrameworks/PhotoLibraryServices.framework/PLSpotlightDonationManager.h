
@interface PLSpotlightDonationManager : NSObject <PLSpotlightDonationManagerSignpostDelegate> {
    NSOperationQueue * _operationQueue;
    PLPhotoLibrary * _photoLibrary;
    NSString * _photoLibraryTypeDescription;
    CSSearchableIndex * _spotlightIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (nonatomic, retain) NSString *photoLibraryTypeDescription;
@property (nonatomic, readonly) CSSearchableIndex *spotlightIndex;
@property (readonly) Class superclass;

+ (bool)_deleteAllSearchableItemsForSystemPhotoLibraryWithError:(out id*)arg1;
+ (id)_photolibraryDatabaseUUIDForPhotolibraryWithURL:(id)arg1;
+ (void)handleDeletionForPhotoLibraryWithURL:(id)arg1 completion:(id /* block */)arg2;
+ (void)handleUniversalSearchPhotoLibraryEligibilityChangeWithDetectedPathChange:(bool)arg1;

- (void).cxx_destruct;
- (void)_deleteAllSearchableEntityItemsWithCompletion:(id /* block */)arg1;
- (void)_signPostIntervalForOperationType:(unsigned long long)arg1 searchableItemCount:(unsigned long long)arg2 isBegin:(bool)arg3;
- (void)addOperationCountObserver:(id)arg1;
- (void)beginSignpostIntervalForOperationType:(unsigned long long)arg1 searchableItemCount:(unsigned long long)arg2;
- (unsigned long long)deleteAllSearchableItemsFromSpotlight;
- (void)deleteAllSearchableItemsWithCompletion:(id /* block */)arg1;
- (unsigned long long)deleteItemsFromSpotlightWithSearchableItemIdentifiers:(id)arg1;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1;
- (void)donateSearchableItemEntities:(id)arg1 completion:(id /* block */)arg2;
- (void)donateSearchableItems:(id)arg1 bundleIdentifier:(id)arg2;
- (unsigned long long)donateSearchableItemsToSpotlight:(id)arg1 bundleIdentifier:(id)arg2;
- (void)endSignpostIntervalForOperationType:(unsigned long long)arg1 searchableItemCount:(unsigned long long)arg2;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)operationQueue;
- (unsigned long long)pendingOperationCount;
- (id)photoLibrary;
- (id)photoLibraryTypeDescription;
- (void)removeOperationCountObserver:(id)arg1;
- (void)setPhotoLibraryTypeDescription:(id)arg1;
- (void)setSpotlightOperationQueueSuspended:(bool)arg1;
- (id)spotlightDonationManagerLog;
- (id)spotlightIndex;

@end
