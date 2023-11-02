
@protocol FCCKDatabaseRecordMiddleware <NSObject>

@required

- (CKRecord *)clientToServerRecord:(CKRecord *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;
- (CKRecordID *)clientToServerRecordID:(CKRecordID *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;
- (NSString *)clientToServerRecordType:(NSString *)arg1 withRecordID:(CKRecordID *)arg2 inDatabase:(FCCKPrivateDatabase *)arg3 error:(id*)arg4;
- (CKRecordZone *)clientToServerRecordZone:(CKRecordZone *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;
- (CKRecordZoneID *)clientToServerRecordZoneID:(CKRecordZoneID *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;
- (CKRecord *)serverToClientRecord:(CKRecord *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;
- (CKRecordID *)serverToClientRecordID:(CKRecordID *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;
- (NSString *)serverToClientRecordType:(NSString *)arg1 withRecordID:(CKRecordID *)arg2 inDatabase:(FCCKPrivateDatabase *)arg3 error:(id*)arg4;
- (CKRecordZone *)serverToClientRecordZone:(CKRecordZone *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;
- (CKRecordZoneID *)serverToClientRecordZoneID:(CKRecordZoneID *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;

@end
