
@interface AVObservationController : NSObject {
    NSMutableDictionary * _notificationCenters;
    NSMutableDictionary * _notificationObservers;
    id  _owner;
    NSMutableDictionary * _proxyObserversByTokens;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unfairLock;
}

- (void).cxx_destruct;
- (void)_stopAllObservation;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;
- (id)startObserving:(id)arg1 keyPath:(id)arg2 includeInitialValue:(bool)arg3 observationHandler:(id /* block */)arg4;
- (id)startObserving:(id)arg1 keyPath:(id)arg2 observationHandler:(id /* block */)arg3;
- (id)startObserving:(id)arg1 keyPaths:(id)arg2 includeInitialValue:(bool)arg3 includeChanges:(bool)arg4 observationHandler:(id /* block */)arg5;
- (id)startObserving:(id)arg1 keyPaths:(id)arg2 includeInitialValue:(bool)arg3 observationHandler:(id /* block */)arg4;
- (id)startObserving:(id)arg1 keyPaths:(id)arg2 observationHandler:(id /* block */)arg3;
- (void)startObservingNotificationForName:(id)arg1 object:(id)arg2 notificationCenter:(id)arg3 observationHandler:(id /* block */)arg4;
- (void)stopAllObservation;
- (void)stopObserving:(id)arg1;

@end
