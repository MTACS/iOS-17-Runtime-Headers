
@interface HMDAccessoryFirmwareUpdateTask : HMFObject <HMDAccessoryFirmwareUpdateTask, HMFLogging> {
    double  _initialDelay;
    HMDAccessoryFirmwareUpdateProfile * _profile;
    HMDAccessoryFirmwareUpdateSession * _session;
}

@property (readonly) HMDHAPAccessory *accessory;
@property (readonly) long long accessoryActiveTransport;
@property (readonly) NSObject<OS_xpc_object> *criteria;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) double initialDelay;
@property (readonly) HMDAccessoryFirmwareUpdateProfile *profile;
@property (readonly) HMDAccessoryFirmwareUpdateSession *session;
@property (nonatomic, readonly) bool shouldRun;
@property (readonly) bool shouldRunOnCurrentDevice;
@property (readonly) Class superclass;
@property (getter=isUserInitiated, nonatomic, readonly) bool userInitiated;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessory;
- (long long)accessoryActiveTransport;
- (id)criteria;
- (id)description;
- (id)initWithSession:(id)arg1 profile:(id)arg2 initialDelay:(double)arg3;
- (double)initialDelay;
- (bool)isUserInitiated;
- (id)privateDescription;
- (id)profile;
- (void)run;
- (id)session;
- (bool)shouldRun;
- (bool)shouldRunOnCurrentDevice;

@end
