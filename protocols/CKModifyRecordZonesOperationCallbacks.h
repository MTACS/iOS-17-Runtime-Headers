
@protocol CKModifyRecordZonesOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleDeleteForRecordZoneID:(CKRecordZoneID *)arg1 error:(NSError *)arg2;
- (void)handleSaveForRecordZoneID:(CKRecordZoneID *)arg1 recordZone:(CKRecordZone *)arg2 error:(NSError *)arg3;

@end
