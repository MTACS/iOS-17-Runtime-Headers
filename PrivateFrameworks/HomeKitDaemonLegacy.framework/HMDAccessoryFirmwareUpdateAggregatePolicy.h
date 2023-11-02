
@interface HMDAccessoryFirmwareUpdateAggregatePolicy : HMDAccessoryFirmwareUpdatePolicy {
    NSArray * _policies;
}

@property (nonatomic, readonly) NSArray *policies;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_registerForNotifications;
- (void)configure;
- (bool)evaluate;
- (void)handlePolicyStatusChange:(id)arg1;
- (id)initWithPolicies:(id)arg1 accessory:(id)arg2 workQueue:(id)arg3;
- (id)policies;

@end
