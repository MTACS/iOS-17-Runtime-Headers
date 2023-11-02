
@protocol CKRepairZonePCSOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleZonePCSRepairForID:(CKRecordZoneID *)arg1 pcsInfo:(CKZonePCSDiagnosticInformation *)arg2 error:(NSError *)arg3;

@end
