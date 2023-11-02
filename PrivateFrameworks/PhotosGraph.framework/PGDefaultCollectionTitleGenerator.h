
@interface PGDefaultCollectionTitleGenerator : PGTitleGenerator {
    <PGEventEnrichment> * _collection;
    PHAssetCollection * _curatedAssetCollection;
    bool  _debug;
    bool  _forDiagnostics;
    PHAsset * _keyAsset;
}

@property (nonatomic, readonly) <PGEventEnrichment> *collection;
@property (nonatomic, readonly) PHAssetCollection *curatedAssetCollection;
@property (getter=isDebug, nonatomic) bool debug;
@property (nonatomic) bool forDiagnostics;
@property (nonatomic, readonly) PHAsset *keyAsset;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithManager:(id)arg1 curationContext:(id)arg2 result:(id /* block */)arg3;
- (id)collection;
- (id)curatedAssetCollection;
- (bool)forDiagnostics;
- (id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 titleGenerationContext:(id)arg4;
- (bool)isDebug;
- (id)keyAsset;
- (void)setDebug:(bool)arg1;
- (void)setForDiagnostics:(bool)arg1;

@end
