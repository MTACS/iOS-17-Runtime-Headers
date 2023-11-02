
@interface _EXActiveQuery : NSObject {
    NSSet * _currentUUIDs;
    _EXDiscoveryController * _discoveryController;
    NSMutableSet * _internalNewObservers;
    NSMutableSet * _internalObservers;
    _EXQuery * _query;
}

@property (retain) NSSet *currentUUIDs;
@property (readonly) _EXDiscoveryController *discoveryController;
@property (readonly) NSMutableSet *internalNewObservers;
@property (readonly) NSMutableSet *internalObservers;
@property (readonly) NSSet *observers;
@property (readonly) _EXQuery *query;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)currentUUIDs;
- (id)description;
- (id)discoveryController;
- (unsigned long long)hash;
- (id)initWithQuery:(id)arg1 discoveryController:(id)arg2;
- (id)internalNewObservers;
- (id)internalObservers;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActiveQuery:(id)arg1;
- (id)observers;
- (id)query;
- (void)removeObserver:(id)arg1;
- (void)setCurrentUUIDs:(id)arg1;
- (void)update;

@end
