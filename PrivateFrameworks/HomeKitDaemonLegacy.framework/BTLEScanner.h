
@interface BTLEScanner : HMFObject <HAPBTLECentralManagerDelegate, HMFTimerDelegate> {
    HAPBTLECentralManager * _centralManager;
    CUBLEScanner * _cubleScanner;
    HMDAccessoryQueues * _scanQueue;
    HMFTimer * _scanTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkCanScan;
- (void)_flushQueue;
- (void)_stopScan;
- (void)_stopTimer;
- (void)didUpdateBTLEState:(long long)arg1;
- (id)init;
- (void)timerDidFire:(id)arg1;

@end
