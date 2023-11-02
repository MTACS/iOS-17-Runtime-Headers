
@interface MTBaseQueryObserver : NSObject <MTQueryObserver, NSFetchedResultsControllerDelegate> {
    NSFetchedResultsController * _frc;
    NSMutableDictionary * _handlers;
    NSString * _identifier;
    bool  _isObserving;
    bool  _stopCalled;
    NSDictionary * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *handlers;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isObserving;
@property (nonatomic) bool stopCalled;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (Class)fetchedResultsControllerClass;

- (void).cxx_destruct;
- (id)_frc;
- (id)addResultsChangedHandler:(id)arg1;
- (void)dealloc;
- (id)handlers;
- (id)identifier;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 background:(bool)arg3;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 managedObjectContext:(id)arg3;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(long long)arg4;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(long long)arg4 batchSize:(long long)arg5 propertiesToFetch:(id)arg6;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(long long)arg4 batchSize:(long long)arg5 propertiesToFetch:(id)arg6 managedObjectContext:(id)arg7;
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(long long)arg4 returnObjectsAsFaults:(bool)arg5;
- (id)initWithFetchRequest:(id)arg1;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2;
- (bool)isObserving;
- (id)managedObjectContext;
- (id)predicate;
- (void)refetch:(id /* block */)arg1;
- (void)removeAllResultsChangedHandlers;
- (void)removeResultsChangedHandler:(id)arg1;
- (void)results:(id /* block */)arg1;
- (void)setHandlers:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsObserving:(bool)arg1;
- (void)setPredicate:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setStopCalled:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (id)sortDescriptors;
- (void)startObserving;
- (void)stop;
- (bool)stopCalled;
- (id)userInfo;
- (id)uuids;

@end
