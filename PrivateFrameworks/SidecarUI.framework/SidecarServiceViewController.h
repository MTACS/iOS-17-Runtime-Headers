
@interface SidecarServiceViewController : UIViewController <SidecarServiceProviderDelegate, SidecarServiceServiceInterface> {
    bool  _active;
    bool  _allowsDisplaySleep;
    long long  _backgroundStyle;
    bool  _backgrounded;
    bool  _calledServiceReady;
    SidecarRequest * _request;
    NSString * _sceneIdentifier;
    FBSSceneIdentityToken * _sceneIdentityToken;
    bool  _terminationRequested;
    bool  _waitForReconnect;
    bool  _wantsVolumeButtonEvents;
}

@property (nonatomic) bool active;
@property (nonatomic) bool allowsDisplaySleep;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) bool backgrounded;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <SidecarServiceHostInterface> *hostProxy;
@property (readonly) SidecarRequest *request;
@property (nonatomic, copy) NSString *sceneIdentifier;
@property (nonatomic, copy) FBSSceneIdentityToken *sceneIdentityToken;
@property (readonly) Class superclass;
@property (nonatomic) bool waitForReconnect;
@property (readonly) bool waitForServiceReady;
@property (nonatomic) bool wantsVolumeButtonEvents;

+ (id)_exportedInterface;
+ (bool)_isSecureForRemoteViewService;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_notifyServiceAndTerminate:(long long)arg1;
- (bool)active;
- (bool)allowsDisplaySleep;
- (long long)backgroundStyle;
- (bool)backgrounded;
- (void)completeRequest:(long long)arg1;
- (id)hostProxy;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)receivedItems:(id)arg1;
- (id)request;
- (long long)requestCompleted;
- (void)requestDidFinish:(id)arg1;
- (void)requestDidStart:(id)arg1;
- (id)sceneIdentifier;
- (id)sceneIdentityToken;
- (void)serviceReady;
- (void)setActive:(bool)arg1;
- (void)setAllowsDisplaySleep:(bool)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setBackgrounded:(bool)arg1;
- (void)setRequest:(id)arg1;
- (void)setSceneIdentifier:(id)arg1;
- (void)setSceneIdentityToken:(id)arg1;
- (void)setWaitForReconnect:(bool)arg1;
- (void)setWantsVolumeButtonEvents:(bool)arg1;
- (void)sidecarRequest:(id)arg1 receivedItems:(id)arg2;
- (void)sidecarServiceActive;
- (void)sidecarServiceCancel;
- (void)sidecarServiceProviderHandleRequest:(id)arg1;
- (void)sidecarServiceProviderTerminate;
- (void)sidecarServiceSetActive:(bool)arg1;
- (void)sidecarServiceSetBackgrounded:(bool)arg1;
- (void)sidecarServiceSetSceneIdentifier:(id)arg1;
- (void)sidecarServiceSetSceneIdentityToken:(id)arg1;
- (void)sidecarServiceShouldPresentWithCompletion:(id /* block */)arg1;
- (void)sidecarServiceUpdateSupportedOrientations;
- (void)sidecarServiceVolumeDownButtonPressed:(bool)arg1;
- (void)sidecarServiceVolumeUpButtonPressed:(bool)arg1;
- (void)viewDidLoad;
- (bool)waitForReconnect;
- (bool)waitForServiceReady;
- (bool)wantsVolumeButtonEvents;

@end
