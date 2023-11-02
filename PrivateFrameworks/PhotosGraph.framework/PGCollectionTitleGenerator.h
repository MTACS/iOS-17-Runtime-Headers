
@interface PGCollectionTitleGenerator : NSObject {
    <PGEventEnrichment> * _collection;
    PHAssetCollection * _curatedAssetCollection;
    bool  _forDiagnostics;
    PHAsset * _keyAsset;
    PGTitleGenerationContext * _titleGenerationContext;
    PGTitleTuple * _titleTuple;
    NSSet * _whitelistedMeaningLabels;
}

@property (nonatomic, retain) <PGEventEnrichment> *collection;
@property (nonatomic, retain) PHAssetCollection *curatedAssetCollection;
@property (nonatomic) bool forDiagnostics;
@property (nonatomic, retain) PHAsset *keyAsset;
@property (nonatomic, retain) PGTitleTuple *titleTuple;
@property (nonatomic, retain) NSSet *whitelistedMeaningLabels;

- (void).cxx_destruct;
- (void)_generateTitleTuples;
- (id)_meaningLabelForTitle;
- (id)_sortedMeaningLabels;
- (id)collection;
- (id)curatedAssetCollection;
- (bool)forDiagnostics;
- (id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 titleGenerationContext:(id)arg4;
- (id)initWithCollection:(id)arg1 titleGenerationContext:(id)arg2;
- (id)initWithCollection:(id)arg1 whitelistedMeaningLabels:(id)arg2 titleGenerationContext:(id)arg3;
- (id)keyAsset;
- (void)setCollection:(id)arg1;
- (void)setCuratedAssetCollection:(id)arg1;
- (void)setForDiagnostics:(bool)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setTitleTuple:(id)arg1;
- (void)setWhitelistedMeaningLabels:(id)arg1;
- (id)titleTuple;
- (id)whitelistedMeaningLabels;

@end
