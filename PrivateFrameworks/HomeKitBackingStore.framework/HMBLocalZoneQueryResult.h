
@interface HMBLocalZoneQueryResult : HMBSQLQueryIterator {
    NSDictionary * _arguments;
    HMBLocalZone * _localZone;
    unsigned long long  _zoneRow;
    int  _zoneRowBindOffset;
}

@property (nonatomic, readonly) NSDictionary *arguments;
@property (nonatomic, readonly) HMBLocalZone *localZone;
@property (nonatomic, readonly) unsigned long long zoneRow;
@property (nonatomic, readonly) int zoneRowBindOffset;

+ (bool)bindPropertiesToStatement:(struct sqlite3_stmt { }*)arg1 arguments:(id)arg2 zoneBindRowOffset:(int)arg3 zoneRow:(unsigned long long)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (id)arguments;
- (bool)bindPropertiesToStatement:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (id)initWithLocalZone:(id)arg1 statement:(id)arg2 initialSequence:(id)arg3 arguments:(id)arg4 maximumRowsPerSelect:(unsigned long long)arg5;
- (id)localZone;
- (unsigned long long)zoneRow;
- (int)zoneRowBindOffset;

@end
