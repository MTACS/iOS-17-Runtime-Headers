
@interface EDActivityRegistry : NSObject <EDActivityHookResponder, EFLoggable, EMActivityRegistryInterface> {
    EDActivityPersistence * _activityPersistence;
    EDPersistenceHookRegistry * _hookRegistry;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _observers;
}

@property (nonatomic, readonly) EDActivityPersistence *activityPersistence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)activityPersistence;
- (void)activityWithID:(id)arg1 finishedWithError:(id)arg2;
- (void)activityWithID:(id)arg1 setCompletedCount:(long long)arg2 totalCount:(long long)arg3;
- (void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3;
- (id)hookRegistry;
- (id)initWithHookRegistry:(id)arg1 activityPersistence:(id)arg2;
- (void)registerActivityObserver:(id)arg1 completion:(id /* block */)arg2;
- (void)removedActivityWithID:(id)arg1;
- (void)startedActivity:(id)arg1;

@end
