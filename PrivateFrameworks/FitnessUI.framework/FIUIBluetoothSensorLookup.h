
@interface FIUIBluetoothSensorLookup : NSObject <CBCentralManagerDelegate> {
    CBCentralManager * _centralManager;
    long long  _pendingTypes;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) CBCentralManager *centralManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long pendingTypes;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)didUpdateBTSensorSeenStatus;
+ (bool)hasHadPairedCyclingCadenceSensors;
+ (bool)hasHadPairedCyclingPowerSensors;
+ (bool)hasHadPairedCyclingSpeedSensors;
+ (id)shared;

- (void).cxx_destruct;
- (void)_queueCheckForPeripherals;
- (void)_queueSpinUpBTCheck:(long long)arg1;
- (void)_spinUpCheck;
- (id)centralManager;
- (void)centralManagerDidUpdateState:(id)arg1;
- (bool)hasHadPairedCyclingCadenceSensors;
- (bool)hasHadPairedCyclingPowerSensors;
- (bool)hasHadPairedCyclingSpeedSensors;
- (id)init;
- (long long)pendingTypes;
- (id)queue;
- (void)setCentralManager:(id)arg1;
- (void)setPendingTypes:(long long)arg1;
- (void)setQueue:(id)arg1;
- (bool)testAndSetPeripheral:(id)arg1 forTag:(id)arg2 defaultsKey:(id)arg3;

@end
