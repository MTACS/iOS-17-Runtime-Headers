
@interface CLDispatchTimerScheduler : NSObject <CLTimerScheduler> {
    NSObject<OS_dispatch_source> * _source;
    CLTimer * timer;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *source;
@property (nonatomic) CLTimer *timer;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDispatchSilo:(id)arg1;
- (void)reflectNextFireDelay:(double)arg1 fireInterval:(double)arg2;
- (void)setSource:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)source;
- (id)timer;

@end
