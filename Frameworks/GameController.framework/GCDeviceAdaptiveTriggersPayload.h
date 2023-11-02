
@interface GCDeviceAdaptiveTriggersPayload : NSObject <NSSecureCoding> {
    NSArray * _amplitudes;
    NSNumber * _endPosition;
    NSNumber * _frequency;
    NSNumber * _mode;
    NSNumber * _startPosition;
    NSArray * _strengths;
}

@property (nonatomic, readonly) NSArray *amplitudes;
@property (nonatomic, readonly) NSNumber *endPosition;
@property (nonatomic, readonly) NSNumber *frequency;
@property (nonatomic, readonly) NSNumber *mode;
@property (nonatomic, readonly) NSNumber *startPosition;
@property (nonatomic, readonly) NSArray *strengths;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amplitudes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endPosition;
- (id)frequency;
- (bool)hasEqualAmplitudes:(id)arg1;
- (bool)hasEqualStrengths:(id)arg1;
- (id)initFeedbackWithResistiveStrengths:(struct { float x1[10]; })arg1;
- (id)initFeedbackWithStartPosition:(float)arg1 resistiveStrength:(float)arg2;
- (id)initOff;
- (id)initSlopeFeedbackWithStartPosition:(float)arg1 endPosition:(float)arg2 startStrength:(float)arg3 endStrength:(float)arg4;
- (id)initVibrationWithAmplitudes:(struct { float x1[10]; })arg1 frequency:(float)arg2;
- (id)initVibrationWithStartPosition:(float)arg1 amplitude:(float)arg2 frequency:(float)arg3;
- (id)initWeaponWithStartPosition:(float)arg1 endPosition:(float)arg2 resistiveStrength:(float)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mode;
- (id)redactedDescription;
- (id)startPosition;
- (id)strengths;

@end
