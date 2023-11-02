
@protocol DNDSSyncEngineLastChanceDataStoring <NSObject>

@required

- (void)addRecord:(CKRecord *)arg1;
- (void)purge;
- (CKRecord *)recordWithID:(CKRecordID *)arg1;
- (NSDictionary *)records;
- (NSArray *)recordsWithZoneID:(CKRecordZoneID *)arg1;
- (void)removeRecordWithID:(CKRecordID *)arg1;
- (void)removeRecordsWithZoneID:(CKRecordZoneID *)arg1;

@end
