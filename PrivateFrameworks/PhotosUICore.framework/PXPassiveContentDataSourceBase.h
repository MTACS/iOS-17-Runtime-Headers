
@interface PXPassiveContentDataSourceBase : NSObject {
    unsigned long long  _availableTypes;
    NSHashTable * _changeObservers;
    PHFetchResult * _cityscapeSuggestions;
    PHFetchResult * _featuredSuggestions;
    NSMutableDictionary * _keyAssetBySuggestionUUID;
    PHFetchResult * _landscapeSuggestions;
    NSObject<OS_os_log> * _log;
    NSArray * _peopleLocalIdentifiers;
    PHFetchResult * _peopleSuggestions;
    NSMutableDictionary * _personSuggestionsByPersonLocalIdentifier;
    PHFetchResult * _petSuggestions;
    PHPhotoLibrary * _photoLibrary;
    NSArray * _previewAssets;
    unsigned long long  _selectedTypes;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property unsigned long long availableTypes;
@property (nonatomic, readonly) NSHashTable *changeObservers;
@property (nonatomic, retain) PHFetchResult *cityscapeSuggestions;
@property (nonatomic, retain) PHFetchResult *featuredSuggestions;
@property (nonatomic, readonly) NSDictionary *keyAssetBySuggestionUUID;
@property (nonatomic, retain) PHFetchResult *landscapeSuggestions;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSArray *peopleLocalIdentifiers;
@property (nonatomic, retain) PHFetchResult *peopleSuggestions;
@property (nonatomic, readonly) NSDictionary *personSuggestionsByPersonLocalIdentifier;
@property (nonatomic, retain) PHFetchResult *petSuggestions;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (retain) NSArray *previewAssets;
@property (nonatomic) unsigned long long selectedTypes;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)baseSuggestionFetchOptionsForPhotoLibrary:(id)arg1;
+ (id)fetchSuggestionsWithSubtype:(unsigned short)arg1 options:(id)arg2;
+ (id)localizedTitleForSingleSmartAlbumType:(unsigned long long)arg1;
+ (id)suggestionPredicateForSmartAlbumTypes:(unsigned long long)arg1;
+ (unsigned long long)supportedTypes;
+ (id)systemImageNameForSingleSmartAlbumType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addChangeObserver:(id)arg1;
- (unsigned long long)availableTypes;
- (void)cacheKeyAssetForSuggestionOids:(id)arg1;
- (void)cacheSuggestionsAndKeyAssetsForPersons:(id)arg1;
- (id)changeObservers;
- (id)cityscapeSuggestions;
- (id)combineSuggestionsForSelectedTypes:(unsigned long long)arg1 maxCount:(long long)arg2;
- (id)customPeopleSuggestions;
- (id)featuredSuggestions;
- (void)fetchSuggestions;
- (void)fetchSuggestionsAndAssets;
- (id)fetchSuggestionsForPersonLocalIdentifier:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 changeObserver:(id)arg2;
- (id)keyAssetBySuggestionUUID;
- (id)keyAssetFetchOptions;
- (id)landscapeSuggestions;
- (id)log;
- (void)notifyAvailableTypeDidChange;
- (void)notifyPreviewAssetsDidChange;
- (id)peopleLocalIdentifiers;
- (id)peopleSuggestions;
- (id)personSuggestionsByPersonLocalIdentifier;
- (id)petSuggestions;
- (id)photoLibrary;
- (id)previewAssets;
- (void)removeChangeObserver:(id)arg1;
- (unsigned long long)selectedTypes;
- (void)setAvailableTypes:(unsigned long long)arg1;
- (void)setCityscapeSuggestions:(id)arg1;
- (void)setFeaturedSuggestions:(id)arg1;
- (void)setLandscapeSuggestions:(id)arg1;
- (void)setPeopleLocalIdentifiers:(id)arg1;
- (void)setPeopleSuggestions:(id)arg1;
- (void)setPetSuggestions:(id)arg1;
- (void)setPreviewAssets:(id)arg1;
- (void)setSelectedTypes:(unsigned long long)arg1;
- (void)setupPreviewAssets;
- (id)workQueue;

@end
