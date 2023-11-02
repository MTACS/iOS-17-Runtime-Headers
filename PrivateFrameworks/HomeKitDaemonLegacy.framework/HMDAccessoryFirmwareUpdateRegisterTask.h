
@interface HMDAccessoryFirmwareUpdateRegisterTask : HMDAccessoryFirmwareUpdateTask {
    bool  _userInitiated;
}

- (id)criteria;
- (id)initWithSession:(id)arg1 profile:(id)arg2 initialDelay:(double)arg3;
- (bool)isUserInitiated;
- (void)run;
- (bool)shouldRun;

@end
