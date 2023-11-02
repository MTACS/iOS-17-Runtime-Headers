
@interface FACirclePresenter : NSObject <FACirclePresenterProtocol, FACircleRemoteUIDelegateDelegate> {
    id /* block */  _completion;
    RUIStyle * _customRUIStyle;
    <FACirclePresenterDelegate> * _delegate;
    FAProfilePictureStore * _familyPictureStore;
    UIViewController * _presenter;
    RemoteUIController * _remoteUIController;
    FACircleRemoteUIDelegate * _remoteUIDelegate;
}

@property (nonatomic, retain) RUIStyle *customRUIStyle;
@property (readonly, copy) NSString *debugDescription;
@property <FACirclePresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_serverHookHandlerWithRemoteUIController:(id)arg1;
- (void)circleRemoteUIDelegate:(id)arg1 completedWithResponse:(id)arg2;
- (void)circleRemoteUIDelegateDidPresent:(id)arg1;
- (id)customRUIStyle;
- (id)delegate;
- (id)init;
- (id)initWithPresenter:(id)arg1 context:(id)arg2;
- (void)loadRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)presenter;
- (void)setCustomRUIStyle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresenter:(id)arg1;

@end
