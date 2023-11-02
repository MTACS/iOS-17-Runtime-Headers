
@protocol FBKDeviceDiagnosticsDelegate

@required

- (void)deviceDiagnosticsController:(FBKDeviceDiagnosticsController *)arg1 didAddAttachment:(FBKAttachment *)arg2 toDevice:(FBKGroupedDevice *)arg3;
- (void)deviceDiagnosticsController:(FBKDeviceDiagnosticsController *)arg1 didAddDevices:(NSArray *)arg2;
- (void)deviceDiagnosticsController:(FBKDeviceDiagnosticsController *)arg1 didChangeState:(long long)arg2;
- (void)deviceDiagnosticsController:(FBKDeviceDiagnosticsController *)arg1 didFailToAttach:(FBKAttachment *)arg2 toDevice:(FBKGroupedDevice *)arg3 error:(NSError *)arg4;
- (void)deviceDiagnosticsController:(FBKDeviceDiagnosticsController *)arg1 didFailToConnectToDevice:(FBKGroupedDevice *)arg2;
- (void)deviceDiagnosticsController:(FBKDeviceDiagnosticsController *)arg1 didRemoveAttachment:(FBKAttachment *)arg2 fromDevice:(FBKGroupedDevice *)arg3;
- (void)deviceDiagnosticsController:(FBKDeviceDiagnosticsController *)arg1 didRemoveDevice:(FBKGroupedDevice *)arg2;
- (void)deviceDiagnosticsController:(FBKDeviceDiagnosticsController *)arg1 didUpdateAttachment:(FBKAttachment *)arg2 onDevice:(FBKGroupedDevice *)arg3;
- (void)deviceDiagnosticsController:(FBKDeviceDiagnosticsController *)arg1 didUpdateDevice:(FBKGroupedDevice *)arg2;
- (void)deviceDiagnosticsController:(void *)arg1 needsSelectionFromDevices:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: FBKDeviceDiagnosticsController *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*

@end
