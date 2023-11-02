
@interface SGMIFeatureStoreGuardedData : NSObject {
    NSMutableSet * _columnsToZero;
    _PASSqliteDatabase * _db;
    bool  _dbIsMigrated;
    SGMIDomainCountingTable * _features;
}

- (void).cxx_destruct;

@end
