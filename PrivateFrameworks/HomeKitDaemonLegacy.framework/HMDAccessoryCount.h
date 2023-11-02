
@interface HMDAccessoryCount : NSObject {
    HMDHome * _home;
}

@property HMDHome *home;
@property (readonly) unsigned long long numCameraAccessories;
@property (readonly) unsigned long long numCameraAccessoriesRecordingEnabled;
@property (readonly) unsigned long long numCriticalSensorAccessories;
@property (readonly) unsigned long long numHAPAccessories;
@property (readonly) unsigned long long numSecurityClassAccessories;

- (void).cxx_destruct;
- (id)home;
- (id)initWithHome:(id)arg1;
- (unsigned long long)numCameraAccessories;
- (unsigned long long)numCameraAccessoriesRecordingEnabled;
- (unsigned long long)numCriticalSensorAccessories;
- (unsigned long long)numHAPAccessories;
- (unsigned long long)numHAPAccessoriesWithAnyServiceWithTypes:(id)arg1;
- (unsigned long long)numSecurityClassAccessories;
- (void)setHome:(id)arg1;

@end
