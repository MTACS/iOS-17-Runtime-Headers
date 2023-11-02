
@interface FACircleStateController : NSObject <FACirclePresenterDelegate, FARemoteViewControllerDelegate> {
    id /* block */  _circlePresenterFactory;
    RUIStyle * _customRUIStyle;
    long long  _modalPresentationStyle;
    id /* block */  _performOperationCompletion;
    id /* block */  _presentationHandler;
    unsigned long long  _presentationType;
    UIViewController * _presenter;
    FARequestConfigurator * _requestConfigurator;
}

@property (nonatomic, retain) RUIStyle *customRUIStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic, copy) id /* block */ presentationHandler;
@property (nonatomic) unsigned long long presentationType;
@property (nonatomic) UIViewController *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_contextRequiresRemoteService:(id)arg1;
- (void)_ensurePresenterWithCompletion:(id /* block */)arg1;
- (void)_performOperationWithContext:(id)arg1 viewController:(id)arg2 completion:(id /* block */)arg3;
- (void)_presentFlowUsingSpringBoardWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentPlatformUnsupportedAlertWithCompletion:(id /* block */)arg1;
- (void)_presentViewServiceWithContext:(id)arg1 viewController:(id)arg2 completion:(id /* block */)arg3;
- (bool)_processRequiresSpringBoardServices;
- (id)_whitelistedInProcessClients;
- (void)circlePresenterDidPresent:(id)arg1;
- (id)customRUIStyle;
- (void)dealloc;
- (id)init;
- (id)initWithPresenter:(id)arg1;
- (id)initWithRequestConfigurator:(id)arg1 presenter:(id)arg2 circlePresenterFactory:(id /* block */)arg3;
- (long long)modalPresentationStyle;
- (void)performOperationWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)performWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)presentationHandler;
- (unsigned long long)presentationType;
- (id)presenter;
- (void)remoteViewControllerDidStartFlow:(id)arg1;
- (void)setCustomRUIStyle:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setPresentationHandler:(id /* block */)arg1;
- (void)setPresentationType:(unsigned long long)arg1;
- (void)setPresenter:(id)arg1;

@end
