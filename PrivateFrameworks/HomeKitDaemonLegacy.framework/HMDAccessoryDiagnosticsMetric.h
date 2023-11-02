
@interface HMDAccessoryDiagnosticsMetric : HMFObject <HMFLogging> {
    HMDAccessory * _accessory;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessory;
- (void)collectAndSubmitMetric;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2;
- (id)logIdentifier;
- (void)resetDiagnosticMetric;
- (id)state;
- (id)workQueue;

@end
