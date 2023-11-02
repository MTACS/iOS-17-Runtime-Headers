
@interface WFDebouncer : NSObject {
    double  _delay;
    NSObject<OS_dispatch_source> * _delayTimer;
    double  _maximumDelay;
    NSObject<OS_dispatch_source> * _maximumDelayTimer;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _targetTable;
    id  _userInfo;
}

@property (nonatomic, readonly) double delay;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *delayTimer;
@property (nonatomic, readonly) double maximumDelay;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *maximumDelayTimer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSMapTable *targetTable;
@property (nonatomic, readonly) id userInfo;

- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (double)delay;
- (id)delayTimer;
- (void)fire;
- (id)initWithDelay:(double)arg1 maximumDelay:(double)arg2 queue:(id)arg3;
- (id)initWithDelay:(double)arg1 maximumDelay:(double)arg2 queue:(id)arg3 userInfo:(id)arg4;
- (id)initWithDelay:(double)arg1 queue:(id)arg2;
- (double)maximumDelay;
- (id)maximumDelayTimer;
- (void)poke;
- (id)queue;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)resetDelayTimer;
- (void)resetMaximumDelayTimer;
- (void)restartDelayTimer;
- (void)setDelayTimer:(id)arg1;
- (void)setMaximumDelayTimer:(id)arg1;
- (void)startMaximumDelayTimerIfNecessary;
- (id)targetTable;
- (id)userInfo;

@end
