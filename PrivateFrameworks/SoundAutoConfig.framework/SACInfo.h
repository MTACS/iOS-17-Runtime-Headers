
@interface SACInfo : NSObject <NSSecureCoding> {
    NSNumber * _angle;
    NSNumber * _calibrationMode;
    NSArray * _companionInfo;
    NSArray * _lfeqIR;
    NSString * _position;
    NSString * _role;
    NSNumber * _roomGain;
    NSNumber * _spatialAudio;
}

@property (retain) NSNumber *angle;
@property (retain) NSNumber *calibrationMode;
@property (retain) NSArray *companionInfo;
@property (retain) NSArray *lfeqIR;
@property (retain) NSString *position;
@property (retain) NSString *role;
@property (retain) NSNumber *roomGain;
@property (retain) NSNumber *spatialAudio;

+ (id)calibrationModeDescription:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)angle;
- (id)calibrationMode;
- (id)companionInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lfeqIR;
- (id)position;
- (id)role;
- (id)roomGain;
- (void)setAngle:(id)arg1;
- (void)setCalibrationMode:(id)arg1;
- (void)setCompanionInfo:(id)arg1;
- (void)setLfeqIR:(id)arg1;
- (void)setPosition:(id)arg1;
- (void)setRole:(id)arg1;
- (void)setRoomGain:(id)arg1;
- (void)setSpatialAudio:(id)arg1;
- (id)spatialAudio;

@end
