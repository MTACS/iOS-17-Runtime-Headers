
@interface HMBLocalZoneQueryResultAllOfTypeRaw : HMBSQLQueryIterator {
    NSString * _modelType;
    int  _modelTypeBindOffset;
    unsigned long long  _returning;
    unsigned long long  _zoneRow;
    int  _zoneRowBindOffset;
}

@property (nonatomic, readonly) NSString *modelType;
@property (nonatomic, readonly) int modelTypeBindOffset;
@property (nonatomic, readonly) unsigned long long returning;
@property (nonatomic, readonly) unsigned long long zoneRow;
@property (nonatomic, readonly) int zoneRowBindOffset;

- (void).cxx_destruct;
- (bool)bindPropertiesToStatement:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (id)fetchRowFromStatement:(struct sqlite3_stmt { }*)arg1 skip:(bool*)arg2 updatedSequence:(unsigned long long*)arg3 error:(id*)arg4;
- (id)initWithLocalZone:(id)arg1 zoneRow:(unsigned long long)arg2 modelType:(id)arg3 returning:(unsigned long long)arg4;
- (id)modelType;
- (int)modelTypeBindOffset;
- (unsigned long long)returning;
- (unsigned long long)zoneRow;
- (int)zoneRowBindOffset;

@end
