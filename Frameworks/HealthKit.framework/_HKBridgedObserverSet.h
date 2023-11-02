
@interface _HKBridgedObserverSet : NSObject {
    id  _bridgedObserver;
    HKObserverSet * _observers;
}

@property (nonatomic, retain) id bridgedObserver;
@property (nonatomic, retain) HKObserverSet *observers;

- (void).cxx_destruct;
- (id)bridgedObserver;
- (id)observers;
- (void)setBridgedObserver:(id)arg1;
- (void)setObservers:(id)arg1;

@end
