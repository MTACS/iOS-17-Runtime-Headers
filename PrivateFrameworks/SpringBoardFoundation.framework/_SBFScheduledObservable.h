
@interface _SBFScheduledObservable : SBFObservable {
    <SBFObservable> * _observable;
    <SBFScheduler> * _scheduler;
}

- (void).cxx_destruct;
- (id)initWithObservable:(id)arg1 scheduler:(id)arg2;
- (id)subscribe:(id)arg1;

@end
