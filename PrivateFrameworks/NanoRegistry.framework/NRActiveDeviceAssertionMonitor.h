
@interface NRActiveDeviceAssertionMonitor : NSObject {
    int  _assertionToken;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) bool hasActiveAssertion;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (bool)hasActiveAssertion;
- (void)removeObserver:(id)arg1;

@end
