
@interface MLWindowedBatchProvider : NSObject <MLBatchProvider> {
    <MLBatchProvider> * _fullBatch;
    long long  _startIndex;
    long long  _windowLength;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, retain) <MLBatchProvider> *fullBatch;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long windowLength;

- (void).cxx_destruct;
- (long long)count;
- (id)featuresAtIndex:(long long)arg1;
- (id)fullBatch;
- (id)initWithBatch:(id)arg1 startIndex:(long long)arg2 windowLength:(long long)arg3 error:(id*)arg4;
- (void)setFullBatch:(id)arg1;
- (void)setStartIndex:(long long)arg1;
- (void)setWindowLength:(long long)arg1;
- (long long)startIndex;
- (long long)windowLength;

@end
