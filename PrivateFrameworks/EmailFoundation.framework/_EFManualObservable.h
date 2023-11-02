
@interface _EFManualObservable : EFObservable <EFObserver> {
    bool  _didCompleteOrFail;
    NSError * _failureError;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_addObserver:(id)arg1 failureError:(id*)arg2;
- (void)_removeObserver:(id)arg1;
- (id)init;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (id)subscribe:(id)arg1;

@end
