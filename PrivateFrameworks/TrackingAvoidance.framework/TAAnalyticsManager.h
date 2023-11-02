
@interface TAAnalyticsManager : NSObject <TAPersistenceManagerObserver, TATrackingAvoidanceServiceObserver> {
    TAAnalyticsManagerSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_convertAISFetch:(id)arg1;
+ (id)_convertBOMObservation:(id)arg1;
+ (id)_convertDetection:(id)arg1 service:(id)arg2;
+ (id)_convertHomeDetection:(id)arg1 service:(id)arg2;
+ (id)_convertPlaySoundWithDetection:(id)arg1;
+ (id)_convertRecord:(id)arg1 service:(id)arg2;
+ (id)_convertRecordForAISFetch:(id)arg1 service:(id)arg2;
+ (id)_convertScanRequest:(id)arg1 service:(id)arg2;
+ (double)_getMotionDuration:(unsigned long long)arg1 motionDistribution:(id)arg2;
+ (long long)getHour:(id)arg1;

- (void).cxx_destruct;
- (void)_submitDefaultAISFetchCountEvent;
- (void)_submitEvent:(id)arg1 content:(id)arg2;
- (void)didReadFromURL:(id)arg1 bytes:(unsigned long long)arg2;
- (void)didWriteToURL:(id)arg1 bytes:(unsigned long long)arg2;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)trackingAvoidanceService:(id)arg1 didFindSuspiciousDevices:(id)arg2;
- (void)trackingAvoidanceService:(id)arg1 didRequestAIS:(id)arg2;
- (void)trackingAvoidanceService:(id)arg1 didStageSuspiciousDevices:(id)arg2;
- (void)trackingAvoidanceService:(id)arg1 didUnstageSuspiciousDevices:(id)arg2;
- (void)trackingAvoidanceService:(id)arg1 didUpdateSuspiciousDevices:(id)arg2;
- (void)trackingAvoidanceService:(id)arg1 requestingAdditionalInformation:(id)arg2;

@end
