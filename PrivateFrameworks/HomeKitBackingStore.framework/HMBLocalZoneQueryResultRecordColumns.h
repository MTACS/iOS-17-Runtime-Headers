
@interface HMBLocalZoneQueryResultRecordColumns : HMBLocalZoneQueryResult

- (id)fetchRow:(id)arg1 error:(id*)arg2;
- (id)fetchRowFromStatement:(struct sqlite3_stmt { }*)arg1 skip:(bool*)arg2 updatedSequence:(unsigned long long*)arg3 error:(id*)arg4;

@end
