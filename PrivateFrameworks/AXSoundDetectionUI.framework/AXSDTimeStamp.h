
@interface AXSDTimeStamp : NSObject {
    double  _duration;
    double  _time;
}

@property (readonly) double duration;
@property (readonly) double time;

- (double)duration;
- (id)initWithResult:(id)arg1;
- (id)initWithTime:(double)arg1 andDuration:(double)arg2;
- (double)time;

@end
