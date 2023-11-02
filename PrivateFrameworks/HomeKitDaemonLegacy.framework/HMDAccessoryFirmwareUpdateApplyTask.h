
@interface HMDAccessoryFirmwareUpdateApplyTask : HMDAccessoryFirmwareUpdateTask <HMFLogging> {
    <HMDAccessoryFirmwareUpdatePolicy> * _policy;
    bool  _userInitiated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <HMDAccessoryFirmwareUpdatePolicy> *policy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isApplyAllowedByPolicy;
- (id)criteria;
- (id)initWithSession:(id)arg1 profile:(id)arg2 policy:(id)arg3 userInitiated:(bool)arg4 delay:(bool)arg5;
- (bool)isUserInitiated;
- (id)policy;
- (void)run;
- (bool)shouldRun;

@end
