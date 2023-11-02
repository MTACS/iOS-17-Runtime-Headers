
@protocol MLComputeDataProvider

@required

- (NSDictionary *)batchAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)numberOfBatches;
- (unsigned long long)sizeOfBatchAtIndex:(unsigned long long)arg1;

@end
