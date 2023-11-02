
@interface PBFApplicationStateNode : NSObject <BSCancellable, PBFStateComponentDelegate> {
    NSSet * _components;
    BSAtomicFlag * _observerNotificationScheduled;
    NSHashTable * _observers;
    NSString * _stateDescription;
    NSUUID * _uniqueIdentifier;
}

@property (copy) NSSet *components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *stateDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

- (void).cxx_destruct;
- (void)_componentsDidUpdate;
- (void)addStateObserver:(id)arg1;
- (void)cancel;
- (void)componentWasUpdated:(id)arg1;
- (id)components;
- (void)dealloc;
- (id)description;
- (id)initWithDescription:(id)arg1;
- (void)removeStateObserver:(id)arg1;
- (void)setComponents:(id)arg1;
- (id)stateDescription;
- (id)uniqueIdentifier;
- (void)updateByAddingComponent:(id)arg1;
- (void)updateByRemovingComponent:(id)arg1;

@end
