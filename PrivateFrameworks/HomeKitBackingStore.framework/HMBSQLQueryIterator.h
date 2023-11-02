
@interface HMBSQLQueryIterator : NSEnumerator {
    NSMutableArray * _cachedResults;
    NSNumber * _currentSequence;
    NSError * _error;
    unsigned long long  _maximumRowsPerQuery;
    int  _sequenceBindOffset;
    HMBSQLQueryStatement * _statement;
}

@property (nonatomic, retain) NSMutableArray *cachedResults;
@property (nonatomic, retain) NSNumber *currentSequence;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) unsigned long long maximumRowsPerQuery;
@property (nonatomic) int sequenceBindOffset;
@property (nonatomic, readonly) HMBSQLQueryStatement *statement;

+ (unsigned long long)maximumRowsPerSelect;
+ (void)setMaximumRowsPerSelect:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)bindPropertiesToStatement:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (id)cachedResults;
- (id)currentSequence;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)error;
- (id)fetchRow:(id)arg1 error:(id*)arg2;
- (id)fetchRowFromStatement:(struct sqlite3_stmt { }*)arg1 skip:(bool*)arg2 updatedSequence:(unsigned long long*)arg3 error:(id*)arg4;
- (id)initWithStatement:(id)arg1 initialSequence:(id)arg2 maximumRowsPerSelect:(unsigned long long)arg3;
- (id)initWithStatement:(id)arg1 initialSequence:(id)arg2 maximumRowsPerSelect:(unsigned long long)arg3 error:(id)arg4;
- (unsigned long long)maximumRowsPerQuery;
- (id)nextObject;
- (int)sequenceBindOffset;
- (void)setCachedResults:(id)arg1;
- (void)setCurrentSequence:(id)arg1;
- (void)setError:(id)arg1;
- (void)setSequenceBindOffset:(int)arg1;
- (id)statement;

@end
