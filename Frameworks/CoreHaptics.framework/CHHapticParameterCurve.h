
@interface CHHapticParameterCurve : NSObject {
    NSArray * _controlPoints;
    NSString * _param;
    double  _time;
}

@property (readonly) NSArray *controlPoints;
@property (readonly) NSString *parameterID;
@property double relativeTime;

- (void).cxx_destruct;
- (id)controlPoints;
- (id)init;
- (id)initWithParameterID:(id)arg1 controlPoints:(id)arg2 relativeTime:(double)arg3;
- (id)parameterID;
- (double)relativeTime;
- (void)setRelativeTime:(double)arg1;

@end
