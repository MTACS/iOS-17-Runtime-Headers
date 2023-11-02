
@interface PXTimelineDataSource : NSObject {
    NSMutableArray * _featuredPhotoCandidates;
    NSMutableArray * _filteredContent;
    NSDictionary * _keyAssetByFeaturedPhotoLocalIdentifier;
    NSDictionary * _keyAssetByMemoryLocalIdentifier;
    NSMutableArray * _memoryCandidates;
    PHPhotoLibrary * _photoLibrary;
    NSString * _sourceIdentifier;
    unsigned long long  _sourceType;
    NSDictionary * _suggestedCropByFeaturedPhotoLocalIdentifier;
    PHUserFeedbackCalculator * _userFeedbackCalculator;
    struct CGSize { 
        double width; 
        double height; 
    }  _widgetSize;
    unsigned long long  _widgetSizeClass;
}

@property (nonatomic, retain) NSMutableArray *featuredPhotoCandidates;
@property (nonatomic, readonly) NSArray *featuredPhotos;
@property (nonatomic, retain) NSMutableArray *filteredContent;
@property (nonatomic, readonly) NSDictionary *keyAssetByFeaturedPhotoLocalIdentifier;
@property (nonatomic, readonly) NSDictionary *keyAssetByMemoryLocalIdentifier;
@property (nonatomic, readonly) NSArray *memories;
@property (nonatomic, retain) NSMutableArray *memoryCandidates;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (nonatomic, readonly) NSDictionary *suggestedCropByFeaturedPhotoLocalIdentifier;
@property (nonatomic, retain) PHUserFeedbackCalculator *userFeedbackCalculator;
@property (nonatomic) struct CGSize { double x1; double x2; } widgetSize;
@property (nonatomic, readonly) unsigned long long widgetSizeClass;

+ (bool)_momentIsLocationTypeAtWork:(id)arg1;

- (void).cxx_destruct;
- (id)_defaultSortDescriptors;
- (id)_fetchFallbackMemoriesAndSetFeatured;
- (id)_fetchFallbackSuggestionsAndSetFeatured;
- (id)_fetchMemoriesWithFeaturedState:(long long)arg1;
- (id)_fetchMemoriesWithFeaturedState:(long long)arg1 fetchLimit:(unsigned long long)arg2;
- (id)_fetchMomentByAssetUUIDForAssets:(id)arg1;
- (id)_fetchSuggestionsWithFeaturedState:(unsigned short)arg1;
- (id)_fetchSuggestionsWithFeaturedState:(unsigned short)arg1 fetchLimit:(unsigned long long)arg2;
- (id)_gatedCropSpecBySuggestionLocalIdentiferFromSuggestions:(id)arg1;
- (id)_gatedKeyAssetByMemoryLocalIdentifierWithMemories:(id)arg1;
- (id)_gatedKeyAssetBySuggestionLocalIdentifierWithSuggestions:(id)arg1;
- (void)_initializeFeaturedCandidatesWithMemoryResult:(id)arg1 suggestionResult:(id)arg2;
- (void)_initializeWithForceEntryUUID:(id)arg1;
- (bool)_isAcceptableUserFeedbackForAssetCollection:(id)arg1 personUUIDs:(id)arg2 asset:(id)arg3;
- (id)featuredPhotoCandidates;
- (id)featuredPhotos;
- (id)filteredContent;
- (id)init;
- (id)initWithAlbumLocalIdentifier:(id)arg1 widgetIdentifier:(id)arg2 widgetSize:(struct CGSize { double x1; double x2; })arg3 photoLibrary:(id)arg4;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 forWidgetSize:(struct CGSize { double x1; double x2; })arg2;
- (id)keyAssetByFeaturedPhotoLocalIdentifier;
- (id)keyAssetByMemoryLocalIdentifier;
- (id)keyAssetFetchOptions;
- (id)memories;
- (id)memoryCandidates;
- (id)photoLibrary;
- (void)setFeaturedPhotoCandidates:(id)arg1;
- (void)setFilteredContent:(id)arg1;
- (void)setMemoryCandidates:(id)arg1;
- (void)setUserFeedbackCalculator:(id)arg1;
- (void)setWidgetSize:(struct CGSize { double x1; double x2; })arg1;
- (id)sourceIdentifier;
- (unsigned long long)sourceType;
- (id)suggestedCropByFeaturedPhotoLocalIdentifier;
- (id)userFeedbackCalculator;
- (struct CGSize { double x1; double x2; })widgetSize;
- (unsigned long long)widgetSizeClass;

@end
