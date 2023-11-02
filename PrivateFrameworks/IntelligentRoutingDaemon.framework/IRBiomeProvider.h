
@interface IRBiomeProvider : NSObject {
    <IRBiomeProviderInterface> * _biomeInterface;
    NSMapTable * _eventTypeToObservers;
    NSObject<OS_dispatch_queue> * _internalQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) <IRBiomeProviderInterface> *biomeInterface;
@property (nonatomic, readonly) NSMapTable *eventTypeToObservers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forEvent:(long long)arg2;
- (id)biomeInterface;
- (id)createStandardBiomeInterface;
- (id)eventTypeToObservers;
- (id)fetchLatestEventsOfEventType:(long long)arg1 numEvents:(unsigned long long)arg2;
- (id)init;
- (id)internalQueue;
- (void)notifyObserversOfEvent:(long long)arg1 withValue:(id)arg2;
- (void)removeObserver:(id)arg1 forEvent:(long long)arg2;
- (void)setBiomeInterface:(id)arg1;
- (void)subscribe:(long long)arg1;
- (void)unsubscribe:(long long)arg1;

@end
