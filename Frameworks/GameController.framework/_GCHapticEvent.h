
@interface _GCHapticEvent : NSObject <NSSecureCoding> {
    unsigned long long  _identifier;
    double  _intensity;
    double  _sharpness;
    double  _startTime;
    bool  _stopped;
    bool  _transientBeganAsContinuousEvent;
    long long  _type;
}

@property (nonatomic) unsigned long long identifier;
@property (nonatomic) double intensity;
@property (nonatomic) double sharpness;
@property (nonatomic) double startTime;
@property (nonatomic) bool stopped;
@property (nonatomic) bool transientBeganAsContinuousEvent;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluateDeviceNoteParams:(id)arg1;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSyntheticCommand:(id)arg1;
- (double)intensity;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setIntensity:(double)arg1;
- (void)setSharpness:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStopped:(bool)arg1;
- (void)setTransientBeganAsContinuousEvent:(bool)arg1;
- (void)setType:(long long)arg1;
- (double)sharpness;
- (double)startTime;
- (bool)stopped;
- (bool)transientBeganAsContinuousEvent;
- (long long)type;
- (struct pair<bool, float> { bool x1; float x2; })valueForNoteParam:(unsigned int)arg1 inParameters:(id)arg2;

@end
