
@interface _PASBloomFilterForWriting : _PASBloomFilter

+ (id)bloomFilterInMemoryWithNumberOfValuesN:(unsigned long long)arg1 errorRateP:(float)arg2;

- (bool)saveToFile:(id)arg1;
- (void)setWithHashes:(id)arg1;

@end
