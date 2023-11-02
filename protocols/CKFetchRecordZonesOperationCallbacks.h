
@protocol CKFetchRecordZonesOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleFetchForRecordZoneID:(CKRecordZoneID *)arg1 recordZone:(CKRecordZone *)arg2 error:(NSError *)arg3;

@end
