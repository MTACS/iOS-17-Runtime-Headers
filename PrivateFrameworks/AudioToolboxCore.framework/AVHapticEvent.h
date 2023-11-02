
@interface AVHapticEvent : NSObject <NSSecureCoding> {
    double  _duration;
    unsigned long long  _eventCategory;
    long long  _fixedParamCount;
    struct AVHapticPlayerFixedParameter { 
        unsigned long long type; 
        float value; 
    }  _fixedParams;
    AVHapticPlayerParameterCurve * _paramCurve;
    double  _time;
    union { 
        unsigned long long _eventType; 
        unsigned long long _paramType; 
    }  _u;
    float  _value;
}

@property (readonly) double duration;
@property (readonly) unsigned long long eventCategory;
@property (readonly) unsigned long long eventType;
@property (readonly) long long fixedParamCount;
@property (readonly) struct AVHapticPlayerFixedParameter { unsigned long long x1; float x2; }*fixedParams;
@property (readonly) unsigned long long paramType;
@property (readonly) AVHapticPlayerParameterCurve *parameterCurve;
@property (readonly) double time;
@property (readonly) float value;

+ (id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2;
+ (id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 duration:(double)arg3;
+ (id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter { unsigned long long x1; float x2; }*)arg3 count:(long long)arg4;
+ (id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter { unsigned long long x1; float x2; }*)arg3 count:(long long)arg4 duration:(double)arg5;
+ (id)eventWithParameter:(unsigned long long)arg1 value:(float)arg2 time:(double)arg3;
+ (id)eventWithParameterCurve:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventCategory;
- (unsigned long long)eventType;
- (long long)fixedParamCount;
- (struct AVHapticPlayerFixedParameter { unsigned long long x1; float x2; }*)fixedParams;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(unsigned long long)arg1 time:(double)arg2 duration:(double)arg3;
- (id)initWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter { unsigned long long x1; float x2; }*)arg3 count:(long long)arg4 duration:(double)arg5;
- (id)initWithParameter:(unsigned long long)arg1 value:(float)arg2 time:(double)arg3;
- (id)initWithParameterCurve:(id)arg1;
- (unsigned long long)paramType;
- (id)parameterCurve;
- (double)time;
- (float)value;

@end
