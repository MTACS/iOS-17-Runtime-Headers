
@interface PXContentSyndicationPhotoKitAssetGroup : NSObject {
    NSArray * _syndicationIdentifiers;
    NSArray * _unsavedSyndicatedAssets;
    NSArray * _userLibraryAssets;
}

@property (nonatomic, readonly) NSArray *syndicationIdentifiers;
@property (nonatomic, readonly) NSArray *unsavedSyndicatedAssets;
@property (nonatomic, readonly) NSArray *userLibraryAssets;

- (void).cxx_destruct;
- (id)initWithAssets:(id)arg1;
- (id)syndicationIdentifiers;
- (id)unsavedSyndicatedAssets;
- (id)userLibraryAssets;

@end
