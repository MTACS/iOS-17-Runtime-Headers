
@interface _BSDefaultObserver : NSObject <BSDefaultObserver> {
    _Atomic unsigned int  _debounceCounter;
    BSAbstractDefaultDomain * _defaults;
    NSArray * _defaultsToObserve;
    id /* block */  _fireBlock;
    bool  _invalidated;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
