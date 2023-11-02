
@protocol HMDAccessoryFirmwareUpdateTask <NSObject>

@required

- (NSObject<OS_xpc_object> *)criteria;
- (double)initialDelay;
- (bool)isUserInitiated;
- (void)run;
- (bool)shouldRun;
- (bool)shouldRunOnCurrentDevice;

@end
