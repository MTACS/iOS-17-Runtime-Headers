
@interface PLSpotlightDonationOperation : PLSpotlightAsyncOperation {
    NSString * _bundleIdentifier;
    PLPhotoLibrary * _photoLibrary;
    CSSearchableIndex * _searchableIndex;
    NSArray * _searchableItems;
    <PLSpotlightDonationManagerSignpostDelegate> * _signpostDelegate;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) CSSearchableIndex *searchableIndex;
@property (nonatomic, readonly, copy) NSArray *searchableItems;
@property (nonatomic) <PLSpotlightDonationManagerSignpostDelegate> *signpostDelegate;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)initWithPhotoLibrary:(id)arg1 spotlightSearchableIndex:(id)arg2 searchableItems:(id)arg3 bundleIdentifier:(id)arg4;
- (void)main;
- (id)photoLibrary;
- (id)searchableIndex;
- (id)searchableItems;
- (void)setSignpostDelegate:(id)arg1;
- (id)signpostDelegate;

@end
