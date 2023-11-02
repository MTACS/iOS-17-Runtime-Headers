
@interface ATXSigtermListener : NSObject {
    NSHashTable * _observers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_notifyObserversOfSigterm;
- (id)init;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
