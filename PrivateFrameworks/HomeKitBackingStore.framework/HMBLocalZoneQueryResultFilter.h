
@interface HMBLocalZoneQueryResultFilter : HMBLocalZoneQueryResultRecordID {
    NSArray * _columns;
    id /* block */  _filter;
    HMBLocalSQLQueryTableQueryAll * _query;
}

@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly) id /* block */ filter;
@property (nonatomic, readonly) HMBLocalSQLQueryTableQueryAll *query;

- (void).cxx_destruct;
- (id)columns;
- (id)fetchRowFromStatement:(struct sqlite3_stmt { }*)arg1 skip:(bool*)arg2 updatedSequence:(unsigned long long*)arg3 error:(id*)arg4;
- (id /* block */)filter;
- (id)initWithLocalZone:(id)arg1 statement:(id)arg2 columns:(id)arg3 filter:(id /* block */)arg4;
- (id)query;

@end
