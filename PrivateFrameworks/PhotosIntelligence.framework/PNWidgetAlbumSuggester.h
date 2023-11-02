
@interface PNWidgetAlbumSuggester : NSObject {
    PHAssetCollection * _assetCollection;
    PHPhotoLibrary * _photoLibrary;
    NSString * _sourceIdentifier;
    NSString * _suggestionContext;
    unsigned short  _suggestionSubtype;
    NSString * _widgetIdentifier;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) NSString *suggestionContext;
@property (nonatomic, readonly) unsigned short suggestionSubtype;
@property (nonatomic, readonly) PHFetchResult *suggestions;
@property (nonatomic, readonly) NSString *widgetIdentifier;

+ (unsigned short)widgetSuggestionSubtypeForAssetCollectionType:(long long)arg1;

- (void).cxx_destruct;
- (id)_assetFetchOptions;
- (id)_assetIndexesForDate:(id)arg1 count:(unsigned long long)arg2 from:(id)arg3;
- (id)_makeSuggestionsFromAssets:(id)arg1 numberOfSuggestions:(unsigned long long)arg2 date:(id)arg3;
- (id)_mutableAssetIndexesForAssetCount:(unsigned long long)arg1;
- (id)_predicateForFeaturedSuggestions;
- (void)_shuffleAssetIndexes:(id)arg1;
- (id)assetCollection;
- (id)fetchSuggestionsWithOptions:(id)arg1;
- (id)initWithAlbumLocalIdentifier:(id)arg1 widgetIdentifier:(id)arg2 photoLibrary:(id)arg3;
- (id)photoLibrary;
- (unsigned long long)removeSuggestionsNotRelevantForDate:(id)arg1;
- (id)sourceIdentifier;
- (id)suggestionContext;
- (unsigned short)suggestionSubtype;
- (id)suggestions;
- (id)updatedSuggestionLocalIdentifiersForDate:(id)arg1 numberOfSuggestions:(unsigned long long)arg2;
- (id)widgetIdentifier;

@end
