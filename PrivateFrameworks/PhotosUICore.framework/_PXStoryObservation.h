
@interface _PXStoryObservation : NSObject <PXChangeObserver, PXStoryStateWatchingRequest> {
    id /* block */  _changeHandler;
    PXObservable * _observable;
}

@property (nonatomic, copy) id /* block */ changeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXObservable *observable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)changeHandler;
- (id)initWithObservable:(id)arg1 changeHandler:(id /* block */)arg2;
- (id)observable;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setChangeHandler:(id /* block */)arg1;

@end
