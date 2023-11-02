
@interface PXSharedLibrarySharingSuggestionPromise : NSObject <PXSharedLibrarySharingSuggestion> {
    NSDate * _considerNewAfterDate;
    <_PXSharedLibrarySharingSuggestionContainer> * _container;
    bool  _isNew;
    bool  _isPlaceholder;
    <PXDisplayAsset> * _keyAsset;
    NSArray * _locations;
    NSDate * _suggestedDate;
    NSString * _title;
}

@property (nonatomic, readonly) NSDate *considerNewAfterDate;
@property (nonatomic, readonly) <_PXSharedLibrarySharingSuggestionContainer> *container;
@property (nonatomic, readonly) PHAssetCollection *containerCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, readonly) bool isNew;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, readonly) <PXDisplayAsset> *keyAsset;
@property (nonatomic, readonly) NSArray *locations;
@property (nonatomic, readonly) NSDate *suggestedDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

+ (bool)isNewWithSuggestedDate:(id)arg1 considerNewAfterDate:(id)arg2;

- (void).cxx_destruct;
- (void)_fulfill;
- (void)_loadLightweightProperties;
- (void)_updateIsNew;
- (id)considerNewAfterDate;
- (id)container;
- (id)containerCollection;
- (id)copyIfNeededWithUpdatedConsiderNewAfterDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fetchAssetCollections;
- (id)identifier;
- (id)init;
- (id)initWithContainer:(id)arg1 considerNewAfterDate:(id)arg2 lightweightPlaceholder:(bool)arg3;
- (bool)isNew;
- (bool)isPlaceholder;
- (id)keyAsset;
- (id)locations;
- (id)suggestedDate;
- (id)title;

@end
