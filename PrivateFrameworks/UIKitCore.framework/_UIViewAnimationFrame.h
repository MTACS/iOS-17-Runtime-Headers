
@interface _UIViewAnimationFrame : NSObject {
    double  _duration;
    double  _startTime;
    id  _value;
}

@property (nonatomic) double duration;
@property (nonatomic) double startTime;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (long long)compareStartTimes:(id)arg1;
- (id)description;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setValue:(id)arg1;
- (double)startTime;
- (id)value;

@end
