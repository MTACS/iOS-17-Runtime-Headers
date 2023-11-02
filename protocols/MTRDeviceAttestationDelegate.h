
@protocol MTRDeviceAttestationDelegate <NSObject>

@optional

- (void)deviceAttestation:(MTRDeviceController *)arg1 completedForDevice:(void*)arg2 attestationDeviceInfo:(MTRDeviceAttestationDeviceInfo *)arg3 error:(NSError *)arg4;
- (void)deviceAttestation:(MTRDeviceController *)arg1 failedForDevice:(void*)arg2 error:(NSError *)arg3;
- (void)deviceAttestationCompletedForController:(MTRDeviceController *)arg1 opaqueDeviceHandle:(void*)arg2 attestationDeviceInfo:(MTRDeviceAttestationDeviceInfo *)arg3 error:(NSError *)arg4;
- (void)deviceAttestationFailedForController:(MTRDeviceController *)arg1 opaqueDeviceHandle:(void*)arg2 error:(NSError *)arg3;

@end
