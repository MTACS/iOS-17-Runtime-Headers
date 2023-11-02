
@interface _EFReplayObservable : EFObservable <EFObserver> {
    NSError * _error;
    bool  _isStopped;
    NSLock * _lock;
    NSMutableArray * _observers;
    EFQueue * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_unsubscribe:(id)arg1;
- (id)initWithCount:(unsigned long long)arg1;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (id)subscribe:(id)arg1;

@end
