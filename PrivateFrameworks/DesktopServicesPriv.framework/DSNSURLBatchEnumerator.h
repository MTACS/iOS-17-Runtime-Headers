
@interface DSNSURLBatchEnumerator : NSObject {
    unsigned long long  _batchSize;
    unsigned long long  _index;
    NSArray * _targetNames;
    NSArray * _urls;
}

- (void).cxx_destruct;
- (id)initWithURLs:(id)arg1 targets:(id)arg2 batchSize:(unsigned long long)arg3;
- (id)nextBatch;

@end
