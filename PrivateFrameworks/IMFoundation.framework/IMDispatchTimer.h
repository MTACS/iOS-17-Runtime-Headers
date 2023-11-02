
@interface IMDispatchTimer : NSObject {
    NSDate * _fireDate;
    id /* block */  _handlerBlock;
    bool  _isValid;
    bool  _repeats;
    double  _timeInterval;
    NSObject<OS_dispatch_source> * _timerSource;
    id  _userInfo;
}

@property (nonatomic, retain) NSDate *fireDate;
@property (nonatomic, copy) id /* block */ handlerBlock;
@property (nonatomic) bool isValid;
@property (nonatomic) bool repeats;
@property (nonatomic) double timeInterval;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (void)fire;
- (id)fireDate;
- (id /* block */)handlerBlock;
- (id)initWithQueue:(id)arg1 interval:(unsigned long long)arg2 repeats:(bool)arg3 handlerBlock:(id /* block */)arg4;
- (id)initWithQueue:(id)arg1 interval:(unsigned long long)arg2 repeats:(bool)arg3 userInfo:(id)arg4 handlerBlock:(id /* block */)arg5;
- (void)invalidate;
- (bool)isValid;
- (bool)repeats;
- (void)setFireDate:(id)arg1;
- (void)setHandlerBlock:(id /* block */)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setRepeats:(bool)arg1;
- (void)setTimeInterval:(double)arg1;
- (void)setTimerSource:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)stop;
- (double)timeInterval;
- (id)timerSource;
- (void)updateTimerInterval:(unsigned long long)arg1 repeats:(bool)arg2;
- (id)userInfo;

@end
