
@interface CRKDynamicDataObserverClassKitFacade : CRKClassKitFacadeDecoratorBase {
    CRKClassKitCurrentUserProvider * _currentUserProvider;
    NSMutableArray * _dataObservers;
    bool  _dataObserversAreRegistered;
    long long  _expectedUserRole;
}

@property (nonatomic, readonly) CRKClassKitCurrentUserProvider *currentUserProvider;
@property (nonatomic, readonly) NSMutableArray *dataObservers;
@property (nonatomic) bool dataObserversAreRegistered;
@property (nonatomic, readonly) long long expectedUserRole;

+ (id)dynamicDataObserverFacadeWithClassKitFacade:(id)arg1 expectedUserRole:(long long)arg2;

- (void).cxx_destruct;
- (void)addDataObserver:(id)arg1;
- (id)currentUserProvider;
- (id)dataObservers;
- (bool)dataObserversAreRegistered;
- (void)dealloc;
- (void)deregisterDataObserver:(id)arg1;
- (void)deregisterDataObservers;
- (long long)expectedUserRole;
- (id)initWithClassKitFacade:(id)arg1 expectedUserRole:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)registerDataObserver:(id)arg1;
- (void)registerDataObservers;
- (void)removeDataObserver:(id)arg1;
- (void)setDataObserversAreRegistered:(bool)arg1;
- (void)startObservingCurrentUser;
- (void)stopObservingCurrentUser;
- (void)updateCurrentUserState;

@end
