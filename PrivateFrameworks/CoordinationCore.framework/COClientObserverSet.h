
@interface COClientObserverSet : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _observers;
    NSDictionary * _registrations;
}

@property (nonatomic, copy) NSMapTable *observers;
@property (nonatomic, copy) NSDictionary *registrations;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (void)addClientObserver:(id)arg1 forNotificationName:(id)arg2;
- (id)clientObservers;
- (id)clientObserversForNotificationName:(id)arg1;
- (id)clientObserversForXPCConnection:(id)arg1;
- (id)init;
- (id)observers;
- (id)registrations;
- (void)removeClientObserver:(id)arg1 forNotificationName:(id)arg2;
- (void)setObservers:(id)arg1;
- (void)setRegistrations:(id)arg1;

@end
