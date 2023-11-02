
@interface CUProxCardController : NSObject <CUActivatable, CUUIEnvironmentable> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    CUUIEnvironment * _environment;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    CUNavigationController * _navigationController;
    NSObject<OS_dispatch_queue> * _uiQueue;
    UIWindow * _window;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) CUUIEnvironment *environment;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) CUNavigationController *navigationController;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)dispatchQueue;
- (id)environment;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)navigationController;
- (void)setDispatchQueue:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)window;

@end
