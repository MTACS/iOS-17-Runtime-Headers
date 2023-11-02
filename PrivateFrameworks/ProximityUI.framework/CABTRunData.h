
@interface CABTRunData : NSObject {
    NSDictionary * _armsReachEvent;
    NSDictionary * _firstPoseEvent;
    NSDictionary * _firstProximityLevelFoundEvent;
    NSDictionary * _firstRssiEvent;
    NSObject<OS_os_log> * _logger;
    NSNumber * _numberOfErrorEvents;
    NSNumber * _numberOfInvalidPoseEvents;
    NSNumber * _numberOfMotionEvents;
    NSNumber * _numberOfProximityLevelFoundEvents;
    NSNumber * _numberOfProximityLevelRevokedEvents;
    NSUUID * _productUUID;
    NSDictionary * _startEvent;
    NSDictionary * _stopEvent;
}

@property (nonatomic, retain) NSDictionary *armsReachEvent;
@property (nonatomic, retain) NSDictionary *firstPoseEvent;
@property (nonatomic, retain) NSDictionary *firstProximityLevelFoundEvent;
@property (nonatomic, retain) NSDictionary *firstRssiEvent;
@property (nonatomic, retain) NSNumber *numberOfErrorEvents;
@property (nonatomic, retain) NSNumber *numberOfInvalidPoseEvents;
@property (nonatomic, retain) NSNumber *numberOfMotionEvents;
@property (nonatomic, retain) NSNumber *numberOfProximityLevelFoundEvents;
@property (nonatomic, retain) NSNumber *numberOfProximityLevelRevokedEvents;
@property (nonatomic, retain) NSUUID *productUUID;
@property (nonatomic, retain) NSDictionary *startEvent;
@property (nonatomic, retain) NSDictionary *stopEvent;

- (void).cxx_destruct;
- (id)armsReachEvent;
- (void)error:(id)arg1;
- (void)firstPose:(id)arg1;
- (id)firstPoseEvent;
- (id)firstProximityLevelFoundEvent;
- (id)firstRssiEvent;
- (void)firstRssiMeasurement:(id)arg1;
- (id)init;
- (void)invalidPose:(id)arg1;
- (void)logData;
- (void)motion:(id)arg1;
- (id)numberOfErrorEvents;
- (id)numberOfInvalidPoseEvents;
- (id)numberOfMotionEvents;
- (id)numberOfProximityLevelFoundEvents;
- (id)numberOfProximityLevelRevokedEvents;
- (id)productUUID;
- (void)proximityLevelFound:(id)arg1;
- (void)proximityLevelRevoked:(id)arg1;
- (void)setArmsReachEvent:(id)arg1;
- (void)setFirstPoseEvent:(id)arg1;
- (void)setFirstProximityLevelFoundEvent:(id)arg1;
- (void)setFirstRssiEvent:(id)arg1;
- (void)setNumberOfErrorEvents:(id)arg1;
- (void)setNumberOfInvalidPoseEvents:(id)arg1;
- (void)setNumberOfMotionEvents:(id)arg1;
- (void)setNumberOfProximityLevelFoundEvents:(id)arg1;
- (void)setNumberOfProximityLevelRevokedEvents:(id)arg1;
- (void)setProductUUID:(id)arg1;
- (void)setStartEvent:(id)arg1;
- (void)setStopEvent:(id)arg1;
- (void)start:(id)arg1;
- (id)startEvent;
- (void)stop:(id)arg1;
- (id)stopEvent;

@end
