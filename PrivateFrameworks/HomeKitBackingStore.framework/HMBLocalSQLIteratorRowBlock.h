
@interface HMBLocalSQLIteratorRowBlock : HMBSQLQueryIterator {
    bool  _ascending;
    unsigned long long  _zoneRow;
    int  _zoneRowBindOffset;
}

@property (getter=isAscending, nonatomic, readonly) bool ascending;
@property (nonatomic, readonly) unsigned long long zoneRow;
@property (nonatomic, readonly) int zoneRowBindOffset;

- (bool)bindPropertiesToStatement:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (id)fetchRowFromStatement:(struct sqlite3_stmt { }*)arg1 skip:(bool*)arg2 updatedSequence:(unsigned long long*)arg3 error:(id*)arg4;
- (id)initWithSQLContext:(id)arg1 zoneRow:(unsigned long long)arg2 statement:(id)arg3 isAscending:(bool)arg4;
- (bool)isAscending;
- (unsigned long long)zoneRow;
- (int)zoneRowBindOffset;

@end
