
@interface SUCoreDDMActivityScheduler : NSObject {
    <SUCoreDDMActivitySchedulerDelegate> * _delegate;
    NSDate * _fireDate;
    bool  _isArmed;
    NSDictionary * _options;
    NSTimer * _timer;
}

@property (nonatomic, retain) <SUCoreDDMActivitySchedulerDelegate> *delegate;
@property (nonatomic, retain) NSDate *fireDate;
@property (nonatomic) bool isArmed;
@property (nonatomic, retain) NSDictionary *options;
@property (retain) NSTimer *timer;

- (void).cxx_destruct;
- (void)_handleTimerFired:(id)arg1;
- (bool)armActivitySchedulerWithDate:(id)arg1;
- (bool)armActivitySchedulerWithDate:(id)arg1 options:(id)arg2;
- (id)delegate;
- (void)disarmActivityScheduler;
- (id)fireDate;
- (id)initWithDelegate:(id)arg1 options:(id)arg2;
- (bool)isArmed;
- (id)options;
- (void)setDelegate:(id)arg1;
- (void)setFireDate:(id)arg1;
- (void)setIsArmed:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
