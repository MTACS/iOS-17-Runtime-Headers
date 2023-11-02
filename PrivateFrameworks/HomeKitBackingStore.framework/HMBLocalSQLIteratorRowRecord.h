
@interface HMBLocalSQLIteratorRowRecord : HMBSQLQueryIterator {
    unsigned long long  _returning;
    unsigned long long  _zoneRow;
    int  _zoneRowBindOffset;
}

@property (nonatomic, readonly) unsigned long long returning;
@property (nonatomic, readonly) unsigned long long zoneRow;
@property (nonatomic, readonly) int zoneRowBindOffset;

- (bool)bindPropertiesToStatement:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (id)fetchRowFromStatement:(struct sqlite3_stmt { }*)arg1 skip:(bool*)arg2 updatedSequence:(unsigned long long*)arg3 error:(id*)arg4;
- (id)initWithSQLContext:(id)arg1 zoneRow:(unsigned long long)arg2 returning:(unsigned long long)arg3;
- (unsigned long long)returning;
- (unsigned long long)zoneRow;
- (int)zoneRowBindOffset;

@end
