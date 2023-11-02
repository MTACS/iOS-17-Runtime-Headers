
@interface _CNScheduledObservable : CNObservable {
    <CNObservable> * _observable;
    <CNScheduler> * _scheduler;
}

@property (nonatomic, retain) <CNObservable> *observable;
@property (nonatomic, retain) <CNScheduler> *scheduler;

- (void).cxx_destruct;
- (id)initWithObservable:(id)arg1 scheduler:(id)arg2;
- (id)observable;
- (id)scheduler;
- (void)setObservable:(id)arg1;
- (void)setScheduler:(id)arg1;
- (id)subscribe:(id)arg1;

@end
