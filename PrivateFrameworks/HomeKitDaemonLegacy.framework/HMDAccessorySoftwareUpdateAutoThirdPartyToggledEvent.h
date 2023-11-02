
@interface HMDAccessorySoftwareUpdateAutoThirdPartyToggledEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    bool  _autoThirdPartySoftwareUpdateEnable;
    unsigned long long  _numCameraAccessories;
    unsigned long long  _numCameraAccessoriesRecordingEnabled;
    unsigned long long  _numCriticalSensorAccessories;
    unsigned long long  _numHAPAccessories;
    unsigned long long  _numSecurityClassAccessories;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (readonly) bool autoThirdPartySoftwareUpdateEnable;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) unsigned long long numCameraAccessories;
@property (readonly) unsigned long long numCameraAccessoriesRecordingEnabled;
@property (readonly) unsigned long long numCriticalSensorAccessories;
@property (readonly) unsigned long long numHAPAccessories;
@property (readonly) unsigned long long numSecurityClassAccessories;
@property (readonly) Class superclass;

+ (id)eventWithAutoThirdPartyUpdateEnable:(bool)arg1 numHAPAccessories:(unsigned long long)arg2 numCameraAccessories:(unsigned long long)arg3 numCameraAccessoriesRecordingEnabled:(unsigned long long)arg4 numSecurityClassAccessories:(unsigned long long)arg5 numCriticalSensorAccessories:(unsigned long long)arg6;
+ (id)eventWithHome:(id)arg1;

- (bool)autoThirdPartySoftwareUpdateEnable;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithAutoThirdPartyUpdateEnable:(bool)arg1 numHAPAccessories:(unsigned long long)arg2 numCameraAccessories:(unsigned long long)arg3 numCameraAccessoriesRecordingEnabled:(unsigned long long)arg4 numSecurityClassAccessories:(unsigned long long)arg5 numCriticalSensorAccessories:(unsigned long long)arg6;
- (unsigned long long)numCameraAccessories;
- (unsigned long long)numCameraAccessoriesRecordingEnabled;
- (unsigned long long)numCriticalSensorAccessories;
- (unsigned long long)numHAPAccessories;
- (unsigned long long)numSecurityClassAccessories;

@end
