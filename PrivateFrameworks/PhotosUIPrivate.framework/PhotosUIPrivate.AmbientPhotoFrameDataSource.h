
@interface PhotosUIPrivate.AmbientPhotoFrameDataSource : PXPassiveContentDataSourceBase {
    void coldStartMode;
    void featuredAssets;
    void maxAssets;
    void maxSuggestions;
    void randomSeed;
    void restrictToSmartAlbumTypes;
    void snapshotMode;
}

+ (id)suggestionPredicateForSmartAlbumTypes:(unsigned long long)arg1;
+ (unsigned long long)supportedTypes;

- (void).cxx_destruct;
- (void)fetchSuggestions;
- (id)fetchSuggestionsForPersonLocalIdentifier:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 changeObserver:(id)arg2;
- (id)keyAssetFetchOptions;
- (void)setupPreviewAssets;

@end
