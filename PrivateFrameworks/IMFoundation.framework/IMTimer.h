
@interface IMTimer : NSObject {
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    SEL  _selector;
    id  _target;
    double  _timeInterval;
    id  _timer;
    bool  _useCurrentRunLoop;
    id  _userInfo;
    bool  _wakeDevice;
}

@property (nonatomic, readonly, retain) NSDate *fireDate;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (id)_initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(bool)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 useCurrentRunLoop:(bool)arg7 queue:(id)arg8;
- (void)_reschedulePCPersistentTimer;
- (void)dealloc;
- (id)fireDate;
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(bool)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6;
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(bool)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 queue:(id)arg7;
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(bool)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 useCurrentRunLoop:(bool)arg7;
- (void)invalidate;
- (void)setFireTimeInterval:(double)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
