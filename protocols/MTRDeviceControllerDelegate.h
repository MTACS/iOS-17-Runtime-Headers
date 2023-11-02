
@protocol MTRDeviceControllerDelegate <NSObject>

@optional

- (void)controller:(MTRDeviceController *)arg1 commissioningComplete:(NSError *)arg2;
- (void)controller:(MTRDeviceController *)arg1 commissioningComplete:(NSError *)arg2 nodeID:(NSNumber *)arg3;
- (void)controller:(MTRDeviceController *)arg1 commissioningSessionEstablishmentDone:(NSError *)arg2;
- (void)controller:(MTRDeviceController *)arg1 readCommissioningInfo:(MTRProductIdentity *)arg2;
- (void)controller:(MTRDeviceController *)arg1 statusUpdate:(long long)arg2;

@end
