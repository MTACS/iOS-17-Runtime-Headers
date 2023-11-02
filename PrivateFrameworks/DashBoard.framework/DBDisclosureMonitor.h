
@interface DBDisclosureMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _markedSafe;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) bool active;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) bool markedSafe;
@property (nonatomic, retain) NSHashTable *observers;

- (void).cxx_destruct;
- (void)_observersDisclosureMonitorDidChange;
- (bool)active;
- (void)addObserver:(id)arg1;
- (id)callbackQueue;
- (id)init;
- (void)markSafe;
- (bool)markedSafe;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setMarkedSafe:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)turnFeaturesOff;

@end
