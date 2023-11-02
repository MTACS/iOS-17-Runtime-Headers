
@interface SiriCoreSQLiteQueryResult : NSObject {
    unsigned long long  _beginMachTime;
    NSArray * _columnNameTuple;
    NSArray * _columnValueTuples;
    NSDictionary * _columnValuesMap;
    unsigned long long  _endMachTime;
    NSError * _error;
    SiriCoreSQLiteQuery * _query;
    NSArray * _records;
    NSArray * _rowValueMaps;
    NSArray * _rowValueTuples;
    SiriCoreSQLiteStatement * _statement;
}

@property (nonatomic, readonly) unsigned long long beginMachTime;
@property (nonatomic, readonly, copy) NSArray *columnNameTuple;
@property (nonatomic, readonly, copy) NSArray *columnValueTuples;
@property (nonatomic, readonly, copy) NSDictionary *columnValuesMap;
@property (nonatomic, readonly) unsigned long long endMachTime;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly, copy) SiriCoreSQLiteQuery *query;
@property (nonatomic, readonly, copy) NSArray *records;
@property (nonatomic, readonly, copy) NSArray *rowValueMaps;
@property (nonatomic, readonly, copy) NSArray *rowValueTuples;
@property (nonatomic, readonly) SiriCoreSQLiteStatement *statement;

- (void).cxx_destruct;
- (unsigned long long)beginMachTime;
- (id)columnNameTuple;
- (id)columnValueTuples;
- (id)columnValuesMap;
- (id)description;
- (unsigned long long)endMachTime;
- (id)error;
- (id)initWithQuery:(id)arg1 beginMachTime:(unsigned long long)arg2 endMachTime:(unsigned long long)arg3 statement:(id)arg4 columnNameTuple:(id)arg5 columnValueTuples:(id)arg6 columnValuesMap:(id)arg7 rowValueTuples:(id)arg8 rowValueMaps:(id)arg9 records:(id)arg10 error:(id)arg11;
- (id)query;
- (id)records;
- (id)rowValueMaps;
- (id)rowValueTuples;
- (id)statement;

@end
