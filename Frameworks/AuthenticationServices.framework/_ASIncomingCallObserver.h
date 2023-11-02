
@interface _ASIncomingCallObserver : NSObject <CXCallObserverDelegate> {
    CXCallObserver * _callObserver;
    id /* block */  _incomingCallHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)callObserverWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_initWithBlock:(id /* block */)arg1;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;

@end
