
@interface HMDAccessoryFirmwareUpdateStagingTask : HMDAccessoryFirmwareUpdateTask {
    bool  _userInitiated;
}

- (id)criteria;
- (id)initWithSession:(id)arg1 profile:(id)arg2 userInitiated:(bool)arg3 delay:(bool)arg4;
- (bool)isUserInitiated;
- (void)run;
- (bool)shouldRun;

@end
