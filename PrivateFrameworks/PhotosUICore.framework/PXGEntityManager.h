
@interface PXGEntityManager : NSObject <PXGComponentObserver> {
    long long  _capacity;
    NSMapTable * _componentByClass;
    NSMapTable * _componentByDataStore;
    NSMutableArray * _components;
    long long  _componentsPerformingChangesCount;
    NSMapTable * _observersByComponent;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableIndexSet * _reusableEntityIDs;
}

@property (nonatomic) long long capacity;
@property (nonatomic, readonly) PXGEffectComponent *effectComponent;
@property (nonatomic, readonly) PXGLoadingStatusComponent *loadingStatus;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_configureComponent:(id)arg1;
- (bool)_hasObserversForComponent:(id)arg1;
- (void)_notifyChangesForComponent:(id)arg1;
- (long long)capacity;
- (void)cleanupUnusedObjects;
- (void)componentDidPerformChanges:(id)arg1;
- (id)componentForClass:(Class)arg1;
- (void)componentWillPerformChanges:(id)arg1;
- (id)componentsForComponentClasses:(id)arg1;
- (void)createEntitiesWithCount:(long long)arg1 addingToArray:(struct { unsigned int x1; }*)arg2;
- (struct { unsigned int x1; })createEntity;
- (id)description;
- (void)destroyEntities:(const struct { unsigned int x1; }*)arg1 count:(long long)arg2;
- (void)destroyEntity:(struct { unsigned int x1; })arg1;
- (id)effectComponent;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)loadingStatus;
- (id)queue;
- (void)registerObserver:(id)arg1 forComponents:(id)arg2;
- (void)setCapacity:(long long)arg1;

@end
