
@interface NSSQLiteIndexStatistics : NSObject {
    long long  _executionCount;
    NSString * _indexName;
    long long  _instructionCount;
    long long  _rowCount;
    NSString * _storeIdentifier;
}

@property (nonatomic, readonly) long long executionCount;
@property (nonatomic, readonly) NSString *indexName;
@property (nonatomic, readonly) long long instructionCount;
@property (nonatomic, readonly) long long rowCount;
@property (nonatomic, readonly) NSString *storeIdentifier;

- (void)dealloc;
- (long long)executionCount;
- (id)indexName;
- (id)init;
- (id)initWithName:(id)arg1 storeID:(id)arg2;
- (id)initWithResultDictionary:(id)arg1 storeID:(id)arg2;
- (long long)instructionCount;
- (long long)rowCount;
- (id)storeIdentifier;

@end
