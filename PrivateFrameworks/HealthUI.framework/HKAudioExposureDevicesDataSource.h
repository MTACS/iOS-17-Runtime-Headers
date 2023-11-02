
@interface HKAudioExposureDevicesDataSource : NSObject {
    unsigned long long  _deviceType;
    NSSet * _devices;
    NSDictionary * _devicesByName;
    HKHealthStore * _healthStore;
    HKObserverSet * _observers;
    HKQuery * _query;
    bool  _ready;
}

@property (nonatomic, readonly) long long deviceCount;
@property (nonatomic) unsigned long long deviceType;
@property (nonatomic, copy) NSSet *devices;
@property (nonatomic, copy) NSDictionary *devicesByName;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKObserverSet *observers;
@property (nonatomic, retain) HKQuery *query;
@property (getter=isReady, nonatomic) bool ready;

- (void).cxx_destruct;
- (void)_cleanUp;
- (id)_localizedNameForDevice:(id)arg1;
- (id)_makeDeviceQueryForDeviceType;
- (void)_notify_dataSourceIsReady;
- (id)_sampleTypeForDeviceType;
- (void)addObserver:(id)arg1;
- (void)cancelQuery;
- (long long)deviceCount;
- (unsigned long long)deviceType;
- (id)devices;
- (id)devicesByName;
- (id)healthStore;
- (id)initWithDeviceType:(unsigned long long)arg1 healthStore:(id)arg2;
- (bool)isReady;
- (id)observers;
- (id)query;
- (void)removeObserver:(id)arg1;
- (void)setDeviceType:(unsigned long long)arg1;
- (void)setDevices:(id)arg1;
- (void)setDevicesByName:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setReady:(bool)arg1;
- (void)startQuery;

@end
