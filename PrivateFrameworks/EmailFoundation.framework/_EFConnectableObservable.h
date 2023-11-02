
@interface _EFConnectableObservable : EFObservable <EFConnectableObservable> {
    EFCancelationToken * _cancelable;
    NSLock * _lock;
    <EFObservable> * _observable;
    <EFObservable><EFObserver> * _subject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_disconnect;
- (id)connect;
- (id)initWithObservable:(id)arg1 subject:(id)arg2;
- (id)subscribe:(id)arg1;

@end
