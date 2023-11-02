
@interface HMDBTLEAdvertiser : HMFObject <HAPBTLECentralManagerDelegate, HMFTimerDelegate> {
    HMDHAPAccessory * _accessory;
    double  _advertisementTimeInterval;
    HMFTimer * _advertisementTimer;
    HAPBTLECentralManager * _centralManager;
    CUBLEAdvertiser * _leAdvertiser;
    HMDAccessoryQueues * _powerOnQueues;
    double  _reachabilityTimeInterval;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) HMDHAPAccessory *accessory;
@property (nonatomic) double advertisementTimeInterval;
@property (nonatomic, retain) HMFTimer *advertisementTimer;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, retain) HAPBTLECentralManager *centralManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isReady, readonly) bool isReady;
@property (nonatomic, retain) CUBLEAdvertiser *leAdvertiser;
@property (nonatomic, retain) HMDAccessoryQueues *powerOnQueues;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic) double reachabilityTimeInterval;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)initializeAdvertiser;
+ (id)sharedAdvertiser;

- (void).cxx_destruct;
- (void)_advertisementTimeout;
- (void)_cancelOn:(id)arg1;
- (void)_clearAdvertiser;
- (void)_completePendingPowerOnRequest:(id)arg1;
- (void)_flushQueue:(id)arg1;
- (void)_flushQueues;
- (void)_startAdvertising;
- (void)_stopAdvertisement:(id)arg1;
- (id)accessory;
- (double)advertisementTimeInterval;
- (id)advertisementTimer;
- (void)cancelOn:(id)arg1;
- (id)centralManager;
- (void)didUpdateBTLEState:(long long)arg1;
- (id)init;
- (bool)isAdvertisingForAccessory:(id)arg1;
- (bool)isReady;
- (id)leAdvertiser;
- (void)powerOn:(id)arg1;
- (id)powerOnQueues;
- (double)reachabilityTimeInterval;
- (void)setAccessory:(id)arg1;
- (void)setAdvertisementTimeInterval:(double)arg1;
- (void)setAdvertisementTimer:(id)arg1;
- (void)setCentralManager:(id)arg1;
- (void)setLeAdvertiser:(id)arg1;
- (void)setPowerOnQueues:(id)arg1;
- (void)setReachabilityTimeInterval:(double)arg1;
- (void)stopAdvertisement:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
