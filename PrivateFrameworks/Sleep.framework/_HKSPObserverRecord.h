
@interface _HKSPObserverRecord : NSObject {
    <NAScheduler> * _callbackScheduler;
    id  _observer;
}

@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) id observer;

- (void).cxx_destruct;
- (id)callbackScheduler;
- (id)initWithObserver:(id)arg1 callbackScheduler:(id)arg2;
- (id)observer;

@end
