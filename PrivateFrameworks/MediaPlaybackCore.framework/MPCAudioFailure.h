
@interface MPCAudioFailure : NSObject {
    double  _duration;
    double  _startTime;
    long long  _type;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) long long type;

+ (id)multiSamplesFailure:(double)arg1 duration:(double)arg2;
+ (id)singleSampleFailure:(double)arg1 duration:(double)arg2;

- (double)duration;
- (id)initWithType:(long long)arg1 startTime:(double)arg2 duration:(double)arg3;
- (double)startTime;
- (long long)type;

@end
