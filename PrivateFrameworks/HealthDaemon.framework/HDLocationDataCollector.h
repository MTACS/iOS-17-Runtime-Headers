
@interface HDLocationDataCollector : NSObject <HDLocationManagerObserver> {
    unsigned long long  _activityType;
    <HDLocationEventDelegate> * _delegate;
    double  _desiredAccuracy;
    bool  _didSaveLocationData;
    CMElevation * _elevation;
    unsigned long long  _elevationGain;
    double  _lastPausedTime;
    int  _lastStatus;
    HDAssertion * _locationUpdatingAssertion;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HKWorkoutRoute * _route;
    <HDSampleSaving> * _sampleSavingDelegate;
    unsigned long long  _skippedLocationsCount;
    long long  _state;
    unsigned long long  _validLocationsCount;
    NSUUID * _workoutUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDLocationEventDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CMElevation *elevation;
@property (readonly) unsigned long long hash;
@property (readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_savedLocationData;
- (int)authorizationStatus;
- (id)createCMElevation;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)elevation;
- (void)healthLocationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)healthLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)healthLocationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)initWithProfile:(id)arg1 sampleSavingDelegate:(id)arg2 configuration:(id)arg3 workoutUUID:(id)arg4;
- (bool)isElevationAvailable;
- (bool)locationServicesEnabled;
- (void)pauseUpdates;
- (void)resumeUpdates;
- (void)setDelegate:(id)arg1;
- (void)setElevation:(id)arg1;
- (void)startUpdates;
- (long long)state;
- (void)stopUpdates;
- (void)stopUpdatesAndDiscardData;
- (id)workoutLocationManager;

@end
