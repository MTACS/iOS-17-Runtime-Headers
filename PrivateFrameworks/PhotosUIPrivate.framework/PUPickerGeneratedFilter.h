
@interface PUPickerGeneratedFilter : NSObject {
    bool  _allowsAlbums;
    bool  _allowsSearchSuggestions;
    NSPredicate * _assetPredicate;
    bool  _containsStickersFilter;
    unsigned long long  _possibleAssetTypes;
    bool  _pu_legacy_mediaTypesIncludesLivePhoto;
    unsigned long long  _requiredAssetTypes;
}

@property (nonatomic, readonly) bool allowsAlbums;
@property (nonatomic, readonly) bool allowsSearchSuggestions;
@property (nonatomic, readonly, copy) NSPredicate *assetPredicate;
@property (nonatomic, readonly) bool containsStickersFilter;
@property (nonatomic, readonly) long long displayAssetMediaType;
@property (nonatomic, readonly) unsigned long long genericAssetTypes;
@property (nonatomic, readonly) long long noContentPlaceholderType;
@property (nonatomic, readonly) unsigned long long possibleAssetTypes;
@property (nonatomic, readonly) bool pu_legacy_mediaTypesIncludesLivePhoto;
@property (nonatomic, readonly) unsigned long long requiredAssetTypes;
@property (nonatomic, readonly) unsigned long long searchQueryFilterOptions;

+ (id)_excludingLoopingVideosFilter;
+ (id)_excludingStreamedVideosFilter;
+ (id)_imagesFilter;
+ (id)_loopingVideosFilter;
+ (id)_pu_legacy_filterForUIImagePickerControllerMediaTypes:(id)arg1;
+ (id)_videosFilter;

- (void).cxx_destruct;
- (bool)allowsAlbums;
- (bool)allowsSearchSuggestions;
- (id)assetPredicate;
- (bool)containsStickersFilter;
- (long long)displayAssetMediaType;
- (long long)displayAssetMediaTypeConsideringAssetObjectIDs:(id)arg1 photoLibrary:(id)arg2;
- (unsigned long long)genericAssetTypes;
- (id)init;
- (id)initWithFilter:(id)arg1;
- (id)initWithUIImagePickerControllerMediaTypes:(id)arg1;
- (long long)noContentPlaceholderType;
- (unsigned long long)possibleAssetTypes;
- (bool)pu_legacy_mediaTypesIncludesLivePhoto;
- (unsigned long long)requiredAssetTypes;
- (unsigned long long)searchQueryFilterOptions;

@end
