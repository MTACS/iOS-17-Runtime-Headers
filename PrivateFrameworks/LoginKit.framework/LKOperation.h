
@interface LKOperation : NSObject {
    double  _duration;
    NSDate * _endTime;
    NSDate * _startTime;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDate *endTime;
@property (nonatomic, readonly) NSDate *startTime;

- (void).cxx_destruct;
- (id)dictionary;
- (double)duration;
- (id)endTime;
- (id)init;
- (void)setDuration:(double)arg1;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
