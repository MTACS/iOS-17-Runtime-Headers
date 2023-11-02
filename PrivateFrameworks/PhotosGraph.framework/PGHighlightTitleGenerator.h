
@interface PGHighlightTitleGenerator : NSObject {
    <PGEventEnrichment> * _collection;
    bool  _createVerboseTitle;
    PHAssetCollection * _curatedAssetCollection;
    PHAsset * _keyAsset;
    PGGraphMomentNodeCollection * _momentNodes;
    PGTitleGenerationContext * _titleGenerationContext;
    PGTitleTuple * _titleTuple;
}

@property (nonatomic, retain) <PGEventEnrichment> *collection;
@property (nonatomic) bool createVerboseTitle;
@property (nonatomic, retain) PHAssetCollection *curatedAssetCollection;
@property (nonatomic, retain) PHAsset *keyAsset;
@property (nonatomic, retain) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, retain) PGTitleTuple *titleTuple;

+ (id)commonMeaningLabelForTitleUsingMomentNodes:(id)arg1;
+ (id)meaningLabelsSortedByPriority;

- (void).cxx_destruct;
- (void)_generateTitleTuples;
- (id)collection;
- (bool)createVerboseTitle;
- (id)curatedAssetCollection;
- (id)initWithCollection:(id)arg1 curatedAssetCollection:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(bool)arg4 titleGenerationContext:(id)arg5;
- (id)initWithCollection:(id)arg1 filteredMomentNodes:(id)arg2 curatedAssetCollection:(id)arg3 keyAsset:(id)arg4 createVerboseTitle:(bool)arg5 titleGenerationContext:(id)arg6;
- (id)keyAsset;
- (id)momentNodes;
- (void)setCollection:(id)arg1;
- (void)setCreateVerboseTitle:(bool)arg1;
- (void)setCuratedAssetCollection:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setMomentNodes:(id)arg1;
- (void)setTitleTuple:(id)arg1;
- (id)titleTuple;

@end
