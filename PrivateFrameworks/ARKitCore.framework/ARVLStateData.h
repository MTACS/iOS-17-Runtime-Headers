
@interface ARVLStateData : NSObject <ARDaemonSecureCoding, ARResultData, NSCopying> {
    double  _fusedReplayHeading;
    double  _fusedReplayHeadingTimestamp;
    CLLocation * _fusedReplayLocation;
    double  _fusedReplayLocationTimestamp;
    bool  _hasReturnedAvailabilityCheck;
    bool  _hasReturnedLocalization;
    bool  _hasStartedAvailabilityCheck;
    bool  _hasStartedLocalization;
    double  _timeSinceInitialization;
    double  _timeSinceLastLocalization;
    ARGeoTrackingStatus * _trackingStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double fusedReplayHeading;
@property (nonatomic, readonly) double fusedReplayHeadingTimestamp;
@property (nonatomic, readonly) CLLocation *fusedReplayLocation;
@property (nonatomic, readonly) double fusedReplayLocationTimestamp;
@property (nonatomic, readonly) bool hasReturnedAvailabilityCheck;
@property (nonatomic, readonly) bool hasReturnedLocalization;
@property (nonatomic, readonly) bool hasStartedAvailabilityCheck;
@property (nonatomic, readonly) bool hasStartedLocalization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeSinceInitialization;
@property (nonatomic, readonly) double timeSinceLastLocalization;
@property (nonatomic, readonly) ARGeoTrackingStatus *trackingStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)fusedReplayHeading;
- (double)fusedReplayHeadingTimestamp;
- (id)fusedReplayLocation;
- (double)fusedReplayLocationTimestamp;
- (bool)hasReturnedAvailabilityCheck;
- (bool)hasReturnedLocalization;
- (bool)hasStartedAvailabilityCheck;
- (bool)hasStartedLocalization;
- (id)init:(double)arg1 timeSinceInitialization:(double)arg2 trackingStatus:(id)arg3 fusedReplayLocation:(id)arg4 fusedReplayLocationTimestamp:(double)arg5 fusedReplayHeading:(double)arg6 fusedReplayHeadingTimestamp:(double)arg7 hasStartedAvailabilityCheck:(bool)arg8 hasReturnedAvailabilityCheck:(bool)arg9 hasStartedLocalization:(bool)arg10 hasReturnedLocalization:(bool)arg11;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)timeSinceInitialization;
- (double)timeSinceLastLocalization;
- (id)trackingStatus;

@end
