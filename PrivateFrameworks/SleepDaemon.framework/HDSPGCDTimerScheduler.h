
@interface HDSPGCDTimerScheduler : NSObject <HDSPEventScheduler> {
    id /* block */  _currentDateProvider;
    <HDSPEventScheduleDelegate> * delegate;
}

@property (nonatomic, readonly, copy) id /* block */ currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDSPEventScheduleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)currentDateProvider;
- (id)delegate;
- (id)initWithCurrentDateProvider:(id /* block */)arg1;
- (void)scheduleEventForDate:(id)arg1 options:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)unschedule;

@end
