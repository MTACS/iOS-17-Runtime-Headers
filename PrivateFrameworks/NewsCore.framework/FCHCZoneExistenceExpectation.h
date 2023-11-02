
@interface FCHCZoneExistenceExpectation : NSObject <FCHCExpectation> {
    CKDatabase * _database;
    bool  _shouldExist;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, retain) CKDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldExist;
@property (readonly) Class superclass;
@property (nonatomic, copy) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (id)database;
- (void)setDatabase:(id)arg1;
- (void)setShouldExist:(bool)arg1;
- (void)setZoneID:(id)arg1;
- (bool)shouldExist;
- (void)validate;
- (id)zoneID;

@end
