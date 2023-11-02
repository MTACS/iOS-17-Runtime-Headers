
@interface SBExternalDisplayEducationSession : NSObject <NSXPCListenerDelegate, SBExternalDisplayEducationPillViewControllerDelegate, SBRemoteHandshakeProtocol> {
    SBSRemoteAlertHandle * _alertHandle;
    BSAbsoluteMachTimer * _bannerDismissTimer;
    <BNPosting> * _bannerPoster;
    BSAtomicSignal * _displayDisconnectSignal;
    FBSDisplayIdentity * _displayIdentity;
    SBExternalDisplayEducationPillViewController * _educationBannerViewController;
    bool  _isHardwareAvailable;
    bool  _isHardwareAvailableDuringDisplayConnectionWindow;
    bool  _isPresenting;
    NSXPCListener * _listener;
    unsigned long long  _previousPresentedReasons;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissBanner:(id)arg1;
- (void)_dismissEducationAlert:(id)arg1;
- (void)_presentBanner;
- (void)_presentEducationAlert:(id /* block */)arg1;
- (void)dealloc;
- (void)deviceConnectionWindowExpired;
- (void)displayConnected;
- (void)displayDisconnected;
- (id)displayIdentity;
- (id)initWithDisplayIdentity:(id)arg1 hardwareAvailability:(bool)arg2 bannerPoster:(id)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)pillViewControllerDidReceiveUserTap:(id)arg1;
- (void)updateHardwareAvailability:(bool)arg1 withinDisplayConnectionWindow:(bool)arg2;
- (void)wakeUpConnection;

@end
