
@interface PXWallpaperSmartAlbumDataSource : PXPassiveContentDataSourceBase <PHPhotoLibraryChangeObserver> {
    PFPosterMediaSuggestion * _centerMedia;
    NSDictionary * _classificationByPreviewAssetUUID;
    NSDictionary * _shuffleSuggestionByKeyAssetUUID;
    PHSuggestion * _workQueue_centerSuggestion;
}

@property (nonatomic, readonly) PFPosterMediaSuggestion *centerMedia;
@property (retain) NSDictionary *classificationByPreviewAssetUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *shuffleSuggestionByKeyAssetUUID;
@property (readonly) Class superclass;
@property (nonatomic, retain) PHSuggestion *workQueue_centerSuggestion;

+ (bool)isAnySmartAlbumAvailableInPhotoLibrary:(id)arg1;
+ (id)suggestionPredicateForSmartAlbumTypes:(unsigned long long)arg1;
+ (unsigned long long)supportedTypes;

- (void).cxx_destruct;
- (id)centerMedia;
- (id)classificationByPreviewAssetUUID;
- (id)customPeopleSuggestions;
- (id)fetchAssetIfNeededForAssetUUID:(id)arg1;
- (id)fetchShuffleSuggestionContainingAsset:(id)arg1;
- (void)fetchSuggestions;
- (id)fetchSuggestionsForPersonLocalIdentifier:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 changeObserver:(id)arg2 centerMedia:(id)arg3;
- (id)initWithPhotoLibrary:(id)arg1 changeObserver:(id)arg2 registerForPhotoLibraryChanges:(bool)arg3 centerMedia:(id)arg4;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setClassificationByPreviewAssetUUID:(id)arg1;
- (void)setShuffleSuggestionByKeyAssetUUID:(id)arg1;
- (void)setWorkQueue_centerSuggestion:(id)arg1;
- (void)setupPreviewAssets;
- (bool)shouldIncludeCenterMediaWithPreviewAssets:(id)arg1;
- (id)shuffleSuggestionByKeyAssetUUID;
- (id)workQueue_centerSuggestion;

@end
