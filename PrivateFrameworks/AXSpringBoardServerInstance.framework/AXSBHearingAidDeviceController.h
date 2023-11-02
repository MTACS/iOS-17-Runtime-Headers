
@interface AXSBHearingAidDeviceController : NSObject <AXHAServerDelegate, AXUIClientDelegate> {
    bool  _hearingAidIsConnected;
    bool  _holdingMediaForConnection;
    bool  _holdingPhoneForConnection;
    NSObject<OS_dispatch_queue> * _mediaUpdateQueue;
    NSDictionary * _preferredRoute;
    NSTimer * _preferredRouteTimer;
    double  _routeChangedTime;
    bool  _shouldIgnoreRouteChanges;
    bool  isShowingHearingAidControl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hearingAidIsConnected;
@property (nonatomic) bool holdingMediaForConnection;
@property (nonatomic) bool holdingPhoneForConnection;
@property (nonatomic) bool isShowingHearingAidControl;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *mediaUpdateQueue;
@property (nonatomic, retain) NSDictionary *preferredRoute;
@property (nonatomic, retain) NSTimer *preferredRouteTimer;
@property (nonatomic) bool shouldIgnoreRouteChanges;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_lockStateChanged;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)dealloc;
- (bool)hearingAidIsConnected;
- (void)hearingServerDidDie:(id)arg1;
- (id)hearingUIClient;
- (bool)holdingMediaForConnection;
- (bool)holdingPhoneForConnection;
- (id)init;
- (bool)isScreenLocked;
- (bool)isShowingHearingAidControl;
- (void)liveListenStatusBarActivated:(id)arg1;
- (id)mediaUpdateQueue;
- (id)preferredRoute;
- (id)preferredRouteTimer;
- (void)setHearingAidIsConnected:(bool)arg1;
- (void)setHoldingMediaForConnection:(bool)arg1;
- (void)setHoldingPhoneForConnection:(bool)arg1;
- (void)setIsShowingHearingAidControl:(bool)arg1;
- (void)setMediaUpdateQueue:(id)arg1;
- (void)setPreferredRoute:(id)arg1;
- (void)setPreferredRouteTimer:(id)arg1;
- (void)setShouldIgnoreRouteChanges:(bool)arg1;
- (bool)shouldIgnoreRouteChanges;
- (void)showHearingAidControl:(bool)arg1;
- (void)startServer;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4;

@end
