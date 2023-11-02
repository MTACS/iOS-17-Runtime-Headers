
@interface CKDRecordCacheEntry : CKSQLiteCacheTableEntry {
    NSNumber * _databaseScope;
    NSString * _dsid;
    NSNumber * _environment;
    NSString * _etag;
    NSSet * _knownUserKeys;
    NSDate * _modificationTime;
    NSData * _recordData;
    NSString * _recordID;
    NSString * _rowID;
    NSNumber * _size;
    NSString * _zoneIdentifier;
}

@property (nonatomic, retain) NSNumber *databaseScope;
@property (nonatomic, retain) NSString *dsid;
@property (nonatomic, retain) NSNumber *environment;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) NSSet *knownUserKeys;
@property (nonatomic, retain) NSDate *modificationTime;
@property (nonatomic, retain) NSData *recordData;
@property (nonatomic, retain) NSString *recordID;
@property (nonatomic, retain) NSString *rowID;
@property (nonatomic, retain) NSNumber *size;
@property (nonatomic, retain) NSString *zoneIdentifier;

- (void).cxx_destruct;
- (id)databaseScope;
- (id)description;
- (id)dsid;
- (id)environment;
- (id)etag;
- (id)knownUserKeys;
- (id)modificationTime;
- (id)recordData;
- (id)recordID;
- (id)rowID;
- (void)setDatabaseScope:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setKnownUserKeys:(id)arg1;
- (void)setModificationTime:(id)arg1;
- (void)setRecordData:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRowID:(id)arg1;
- (void)setSize:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (id)size;
- (id)zoneIdentifier;

@end
