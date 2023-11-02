
@protocol HMDCameraClipManagerDelegate <NSObject>

@optional

- (void)clipManager:(HMDCameraClipManager *)arg1 didDeleteClipWithUUID:(NSUUID *)arg2;
- (void)clipManager:(HMDCameraClipManager *)arg1 didUpdateSignificantEvent:(HMCameraClipSignificantEvent *)arg2 withHomePresence:(id <HMDHomePresenceCheck>)arg3;
- (void)clipManagerDidDisableCloudStorage:(HMDCameraClipManager *)arg1;
- (void)clipManagerDidStart:(HMDCameraClipManager *)arg1;
- (void)clipManagerDidStartUpCloudZone:(HMDCameraClipManager *)arg1;
- (void)clipManagerDidStop:(HMDCameraClipManager *)arg1;

@end
