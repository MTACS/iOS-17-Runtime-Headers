
@interface IMDRecordBatchFetcher : NSObject <NSFastEnumeration> {
    unsigned long long  _batchSize;
    id * _fastEnumerationBuffer;
    unsigned long long  _fastEnumerationBufferSize;
    NSArray * _fastEnumerationLastBatch;
    long long  _lastRowID;
    NSPredicate * _predicate;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) long long lastRowID;
@property (nonatomic, retain) NSPredicate *predicate;

- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;
- (long long)lastRowID;
- (id)nextBatch;
- (id)nextBatchWithSize:(unsigned long long)arg1;
- (id)predicate;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setLastRowID:(long long)arg1;
- (void)setPredicate:(id)arg1;

@end
