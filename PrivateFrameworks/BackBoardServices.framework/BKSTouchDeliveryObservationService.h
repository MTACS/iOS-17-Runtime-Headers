
@interface BKSTouchDeliveryObservationService : NSObject <BKSTouchDeliveryObserving_IPC> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    BSServiceConnection * _connection;
    NSHashTable * _generalObservers;
    NSMapTable * _observersToTouchIdentifiers;
    NSObject<OS_dispatch_queue> * _touchClientQueue;
    BSMutableIntegerMap * _touchIdentifierToObserverLists;
}

@property (nonatomic, retain) BSServiceConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSHashTable *generalObservers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *observersToTouchIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, retain) BSMutableIntegerMap *touchIdentifierToObserverLists;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_connectToTouchDeliveryService;
- (bool)_queue_addObserver:(id)arg1 forTouchIdentifier:(unsigned int)arg2;
- (id)_queue_observersForTouchIdentifier:(unsigned int)arg1;
- (bool)_queue_removeObserver:(id)arg1 forTouchIdentifier:(unsigned int)arg2;
- (void)_queue_removeObserversForTouchIdentifier:(unsigned int)arg1;
- (oneway void)addObserver:(id)arg1;
- (oneway void)addObserver:(id)arg1 forTouchIdentifier:(unsigned int)arg2;
- (id)connection;
- (void)dealloc;
- (id)generalObservers;
- (id)init;
- (void)observeTouchEventDeliveryDidOccur:(id)arg1;
- (id)observersToTouchIdentifiers;
- (oneway void)removeObserver:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setGeneralObservers:(id)arg1;
- (void)setObserversToTouchIdentifiers:(id)arg1;
- (void)setTouchIdentifierToObserverLists:(id)arg1;
- (id)touchIdentifierToObserverLists;

@end
