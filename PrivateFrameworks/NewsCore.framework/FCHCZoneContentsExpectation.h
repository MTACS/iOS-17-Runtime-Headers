
@interface FCHCZoneContentsExpectation : NSObject <FCHCExpectation> {
    CKDatabase * _database;
    NSArray * _recordTests;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, retain) CKDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *recordTests;
@property (readonly) Class superclass;
@property (nonatomic, copy) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (id)database;
- (id)recordTests;
- (void)setDatabase:(id)arg1;
- (void)setRecordTests:(id)arg1;
- (void)setZoneID:(id)arg1;
- (void)validate;
- (id)zoneID;

@end
