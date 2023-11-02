
@interface SOSStatus : NSObject <NSSecureCoding> {
    long long  _flowState;
    bool  _isPairedDeviceStatus;
    long long  _resolution;
    NSDate * _timeOfDetection;
    NSDate * _timeOfResolution;
    long long  _trigger;
    NSUUID * _uuid;
}

@property (nonatomic) long long flowState;
@property (nonatomic, readonly) bool isFlowActive;
@property (nonatomic, readonly) bool isFlowActiveAndNotResting;
@property (nonatomic) bool isPairedDeviceStatus;
@property (nonatomic, readonly) bool isPreCall;
@property (nonatomic) long long resolution;
@property (nonatomic, readonly) bool shouldBlockNonEmergencyCalls;
@property (nonatomic, readonly) bool shouldRejectNewSOSTriggers;
@property (nonatomic, readonly) bool shouldRetriggerSOS;
@property (nonatomic, retain) NSDate *timeOfDetection;
@property (nonatomic, retain) NSDate *timeOfResolution;
@property (nonatomic) long long trigger;
@property (nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)flowState;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 trigger:(long long)arg2 timeOfDetection:(id)arg3;
- (id)initWithUUID:(id)arg1 trigger:(long long)arg2 timeOfDetection:(id)arg3 timeOfResolution:(id)arg4 resolution:(long long)arg5;
- (id)initWithUUID:(id)arg1 trigger:(long long)arg2 timeOfDetection:(id)arg3 timeOfResolution:(id)arg4 resolution:(long long)arg5 flowState:(long long)arg6 isPairedDeviceStatus:(bool)arg7;
- (bool)isFlowActive;
- (bool)isFlowActiveAndNotResting;
- (bool)isPairedDeviceStatus;
- (bool)isPreCall;
- (bool)isValid;
- (long long)resolution;
- (void)setFlowState:(long long)arg1;
- (void)setIsPairedDeviceStatus:(bool)arg1;
- (void)setResolution:(long long)arg1;
- (void)setTimeOfDetection:(id)arg1;
- (void)setTimeOfResolution:(id)arg1;
- (void)setTrigger:(long long)arg1;
- (void)setUuid:(id)arg1;
- (bool)shouldBlockNonEmergencyCalls;
- (bool)shouldRejectNewSOSTriggers;
- (bool)shouldRetriggerSOS;
- (id)timeOfDetection;
- (id)timeOfResolution;
- (long long)trigger;
- (id)uuid;

@end
