
@interface HMDAccessoryFirmwareUpdatePolicy : NSObject <HMDAccessoryFirmwareUpdatePolicy> {
    HMDHAPAccessory * _accessory;
    bool  _status;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDHAPAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool status;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessory;
- (void)configure;
- (bool)evaluate;
- (void)evaluateAndNotify;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2;
- (id)logIdentifier;
- (void)notify:(bool)arg1;
- (void)setStatus:(bool)arg1;
- (bool)status;
- (id)workQueue;

@end
