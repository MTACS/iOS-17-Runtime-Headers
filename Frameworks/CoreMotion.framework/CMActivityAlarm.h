
@interface CMActivityAlarm : NSObject {
    double  _activityDuration;
    double  _duration;
    unsigned int  _trigger;
    id /* block */  fHandler;
    bool  fIsValid;
    NSObject<OS_dispatch_queue> * fQueue;
    struct __CFRunLoop { } * fRunLoop;
}

@property (nonatomic) double activityDuration;
@property (nonatomic) double duration;
@property (nonatomic) unsigned int trigger;

+ (bool)activityAlarmAvailable;
+ (id)activityAlarmInfo;

- (double)activityDuration;
- (void)dealloc;
- (double)duration;
- (void)fire;
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onRunLoop:(struct __CFRunLoop { }*)arg3 withHandler:(id /* block */)arg4;
- (void)invalidate;
- (bool)isValid;
- (void)setActivityDuration:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setTrigger:(unsigned int)arg1;
- (unsigned int)trigger;

@end
