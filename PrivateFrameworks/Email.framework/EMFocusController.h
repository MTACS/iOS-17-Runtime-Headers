
@interface EMFocusController : NSObject {
    EMFocus * _currentFocus;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <EFAssertableScheduler> * _observationScheduler;
    <EFCancelable> * _observationToken;
    NSHashTable * _observers;
}

+ (id)predicateForFocus:(id)arg1 usingAccountRepository:(id)arg2;
+ (id)updatedPredicateForFocus:(id)arg1 currentPredicate:(id)arg2 usingAccountRepository:(id)arg3;

- (void).cxx_destruct;
- (id)_currentFocusedAccountIdentifiers;
- (void)_focusModeChanged;
- (id)addObserver:(id)arg1 currentFocus:(id*)arg2;
- (void)getCurrentFocus:(id /* block */)arg1;
- (id)init;

@end
