
@interface CBRamp : NSObject {
    double  _currentAbsoluteTimestamp;
    double  _currentTimestamp;
    float  _currentValue;
    float  _frequency;
    NSString * _identifier;
    bool  _isFinished;
    float  _length;
    NSObject<OS_os_log> * _logHandle;
    float  _originalValue;
    NSDictionary * _properties;
    id /* block */  _rampProgressCallback;
    double  _sMachTimebaseFactor;
    double  _startAbsoluteTime;
    double  _startTime;
    float  _targetValue;
}

@property (readonly) double currentAbsoluteTimestamp;
@property (readonly) double currentTimestamp;
@property (readonly) float currentValue;
@property (readonly) float frequency;
@property (readonly) NSString *identifier;
@property (readonly) bool isFinished;
@property (readonly) float length;
@property (readonly) float originalValue;
@property (readonly) NSDictionary *properties;
@property (copy) id /* block */ rampProgressCallback;
@property (readonly) double startAbsoluteTime;
@property (readonly) double startTime;
@property (readonly) float targetValue;

+ (id)className;
+ (id)newLinearRampWithWithOrigin:(float)arg1 target:(float)arg2 length:(float)arg3 frequency:(float)arg4 identifier:(id)arg5;

- (void)clockRamp;
- (void)clockRamp:(double)arg1;
- (double)currentAbsoluteTimestamp;
- (double)currentTimestamp;
- (float)currentValue;
- (void)dealloc;
- (id)description;
- (float)frequency;
- (id)identifier;
- (id)init;
- (id)initWithOrigin:(float)arg1 target:(float)arg2 length:(float)arg3 frequency:(float)arg4 identifier:(id)arg5;
- (id)initWithOrigin:(float)arg1 target:(float)arg2 length:(float)arg3 frequency:(float)arg4 identifier:(id)arg5 properties:(id)arg6;
- (bool)isFinished;
- (float)length;
- (float)originalValue;
- (id)properties;
- (id /* block */)rampProgressCallback;
- (void)setRampProgressCallback:(id /* block */)arg1;
- (double)startAbsoluteTime;
- (double)startTime;
- (float)targetValue;
- (void)updateTargetValue:(float)arg1;

@end
