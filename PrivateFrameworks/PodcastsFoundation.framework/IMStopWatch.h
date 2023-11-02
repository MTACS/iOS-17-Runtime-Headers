
@interface IMStopWatch : NSObject {
    NSString * _descriptionString;
    unsigned long long  _startTime;
}

+ (void)initialize;
+ (id)stopwatch;
+ (id)stopwatchWithDescription:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)report;
- (void)reportWithMarker:(id)arg1;
- (void)reset;
- (void)setDescription:(id)arg1;
- (void)start;
- (double)time;

@end
