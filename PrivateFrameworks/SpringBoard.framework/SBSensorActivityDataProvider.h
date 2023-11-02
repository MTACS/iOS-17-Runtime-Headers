
@interface SBSensorActivityDataProvider : NSObject <SBFSensorActivityDataProvider> {
    NSSet * _activeSensorActivityAttributions;
    STUIDataAccessStatusDomain * _dataAccessDomain;
    NSMutableSet * _observers;
    NSSet * _recentSensorActivityAttributions;
}

@property (nonatomic, readonly, copy) NSSet *activeAndRecentSensorActivityAttributions;
@property (nonatomic, readonly, copy) NSSet *activeCameraAndMicrophoneActivityAttributions;
@property (nonatomic, copy) NSSet *activeSensorActivityAttributions;
@property (nonatomic, readonly) STUIDataAccessStatusDomain *dataAccessDomain;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) SBSensorActivityAttribution *mostRecentCameraAndMicrophoneSensorActivityAttribution;
@property (nonatomic, readonly, copy) NSMutableSet *observers;
@property (nonatomic, copy) NSSet *recentSensorActivityAttributions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleNewDomainData:(id)arg1;
- (void)_notifyObserversOfActivityChange;
- (id)_recentCameraAndMicrophoneActivityAttributions;
- (id)activeAndRecentSensorActivityAttributions;
- (id)activeCameraAndMicrophoneActivityAttributions;
- (id)activeSensorActivityAttributions;
- (void)addObserver:(id)arg1;
- (id)dataAccessDomain;
- (id)init;
- (id)initWithSystemStatusServer:(id)arg1;
- (id)mostRecentCameraAndMicrophoneSensorActivityAttribution;
- (id)observers;
- (id)recentSensorActivityAttributions;
- (void)removeObserver:(id)arg1;
- (void)setActiveSensorActivityAttributions:(id)arg1;
- (void)setRecentSensorActivityAttributions:(id)arg1;

@end
