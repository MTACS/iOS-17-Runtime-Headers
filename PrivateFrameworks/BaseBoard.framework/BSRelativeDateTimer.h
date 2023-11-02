
@interface BSRelativeDateTimer : NSObject <BSPowerMonitorObserver> {
    unsigned long long  _currResolution;
    long long  _currValue;
    NSDate * _date;
    <BSRelativeDateTimerDelegate> * _delegate;
    NSCalendar * _gregorian;
    NSTimer * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BSRelativeDateTimerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_fireAndUpdateTimerIfNecessary;
- (void)_fireForLocaleEvent:(id)arg1;
- (id)date;
- (void)dealloc;
- (id)delegate;
- (void)fireAndSchedule;
- (id)init;
- (void)invalidate;
- (id)nextFireAfterDate:(id)arg1;
- (double)nextFireInterval;
- (void)powerMonitorSystemDidWakeFromSleep:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
