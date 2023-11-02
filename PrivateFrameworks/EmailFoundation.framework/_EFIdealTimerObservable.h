
@interface _EFIdealTimerObservable : EFObservable {
    <EFObservable> * _input;
    double  _interval;
    <EFScheduler> * _scheduler;
}

- (void).cxx_destruct;
- (id)initWithObservable:(id)arg1 timeInterval:(double)arg2 scheduler:(id)arg3;
- (id)subscribe:(id)arg1;

@end
