
@interface VCPDatabaseBatchIterator : NSObject {
    NSDictionary * _analysis;
    PHAsset * _asset;
    NSArray * _assets;
    NSDictionary * _batchAnalyses;
    int  _batchSize;
    int  _idxCurrent;
    int  _idxLast;
    VCPDatabaseReader * _reader;
    NSSet * _resultsTypes;
}

@property (nonatomic, readonly) NSDictionary *analysis;
@property (nonatomic, readonly) PHAsset *asset;

+ (id)iteratorForAssets:(id)arg1 withDatabaseReader:(id)arg2 resultTypes:(id)arg3 batchSize:(int)arg4;

- (void).cxx_destruct;
- (id)analysis;
- (id)asset;
- (id)initWithDatabaseReader:(id)arg1 forAssets:(id)arg2 resultsTypes:(id)arg3 batchSize:(int)arg4;
- (bool)next;
- (void)nextBatch;

@end
