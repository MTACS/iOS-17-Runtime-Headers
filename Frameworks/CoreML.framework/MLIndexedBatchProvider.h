
@interface MLIndexedBatchProvider : NSObject <MLBatchProvider> {
    <MLBatchProvider> * _fullBatch;
    NSArray * _indices;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, retain) <MLBatchProvider> *fullBatch;
@property (nonatomic, retain) NSArray *indices;

- (void).cxx_destruct;
- (long long)count;
- (id)featuresAtIndex:(long long)arg1;
- (id)fullBatch;
- (id)indices;
- (id)initWithBatch:(id)arg1 indices:(id)arg2 error:(id*)arg3;
- (void)setFullBatch:(id)arg1;
- (void)setIndices:(id)arg1;

@end
