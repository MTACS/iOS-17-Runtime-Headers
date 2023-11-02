
@interface IPGlobalInstallableStateSource : NSObject <IPGlobalInstallableStateSourceBehaviorUpdateObserver> {
    <IPGlobalInstallableStateSourceBehavior> * _behavior;
    bool  _isObservingBehavior;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _ivarLock;
    NSMutableSet * _knownIdentities;
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedAllAppStateSource;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)globalStateSourceBehavior:(id)arg1 stateSourceAvailableForIdentity:(id)arg2 withGenerator:(id /* block */)arg3;
- (id)initWithBehavior:(id)arg1;
- (void)makeAndEnumerateStateSourcesForExtantIdentities:(id /* block */)arg1;
- (void)makeAndEnumerateStateSourcesForInstallingIdentities:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)testingActionBarrier;

@end
