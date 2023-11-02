
@interface PLSpotlightDeletionOperation : PLSpotlightAsyncOperation {
    PLPhotoLibrary * _photoLibrary;
    CSSearchableIndex * _searchableIndex;
    NSArray * _searchableItemIdentifiers;
}

@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) CSSearchableIndex *searchableIndex;
@property (nonatomic, readonly, copy) NSArray *searchableItemIdentifiers;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)arg1 spotlightSearchableIndex:(id)arg2 searchableItemIdentifiers:(id)arg3;
- (void)main;
- (id)photoLibrary;
- (id)searchableIndex;
- (id)searchableItemIdentifiers;

@end
