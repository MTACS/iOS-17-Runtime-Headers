
@interface NFDigitalCarKeySession : NFSession <NFContactlessPaymentSessionCallbacks, NFSessionDelegate, SESDCKSessionDelegate, SESDCKSessionPassthroughDelegate> {
    NFApplet * _activeApplet;
    NSString * _activeKey;
    NSDictionary * _appletsById;
    bool  _cardEmulationStarted;
    NFApplet * _defaultApplet;
    <NFDigitalCarKeySessionDelegate> * _delegate;
    bool  _fieldNotificationSent;
    <NFDigitalCarKeySessionPassthroughDelegate> * _passthroughDelegate;
    SESDCKSession * _sesdSession;
}

@property (readonly) NFApplet *activeApplet;
@property (readonly) NSString *activeKey;
@property (nonatomic, retain) NSDictionary *appletsById;
@property bool cardEmulationStarted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NFApplet *defaultApplet;
@property <NFDigitalCarKeySessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fieldNotificationSent;
@property (readonly) unsigned long long hash;
@property <NFDigitalCarKeySessionPassthroughDelegate> *passthroughDelegate;
@property (nonatomic, retain) SESDCKSession *sesdSession;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsSecureRanging;

+ (id)getVehicleReports:(id*)arg1;
+ (id)pauseRangingForReaderIdentifier:(id)arg1 durationInSec:(id)arg2;
+ (id)requestAssertionForKeyID:(id)arg1 options:(id)arg2 outError:(id*)arg3;
+ (id)resumeRangingForReaderIdentifier:(id)arg1;
+ (id)vehicleReports:(id*)arg1;

- (void).cxx_destruct;
- (id)_getAppletsFromNFCD;
- (id)activateWithToken:(id)arg1;
- (id)activeApplet;
- (id)activeKey;
- (id)allApplets;
- (id)appletWithIdentifier:(id)arg1;
- (id)appletsById;
- (id)cancelRKEFunction:(id)arg1;
- (bool)cardEmulationStarted;
- (id)createSessionHandoffToken:(id*)arg1;
- (id)defaultApplet;
- (id)delegate;
- (void)didDetectField:(bool)arg1;
- (void)didDetectFieldNotification:(id)arg1;
- (void)didEndTransaction:(id)arg1;
- (void)didEndUnexpectedly;
- (void)didExpireTransactionForApplet:(id)arg1;
- (void)didExpressModeStateChange:(unsigned int)arg1 withObject:(id)arg2;
- (void)didFailDeferredAuthorization;
- (void)didFelicaStateChange:(id)arg1;
- (void)didReceiveActivityTimeout:(id)arg1;
- (void)didReceivePendingServerRequest;
- (void)didSelectApplet:(id)arg1;
- (void)didStartSession:(id)arg1;
- (void)didStartTransaction:(id)arg1;
- (void)endSession;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (bool)fieldNotificationSent;
- (void)handleSessionResumed;
- (void)handleSessionSuspended:(id)arg1;
- (id)init;
- (id)passthroughDelegate;
- (void)releaseSesdSession;
- (bool)sendPassthroughMessage:(id)arg1 error:(id*)arg2;
- (void)sendRKEFunction:(id)arg1 action:(id)arg2 authorization:(id)arg3 completion:(id /* block */)arg4;
- (id)sendRKEFunction:(id)arg1 rkeAction:(id)arg2 authorization:(id)arg3;
- (void)sesSession:(id)arg1 didReceivePassthroughMessage:(id)arg2;
- (void)sesSession:(id)arg1 event:(id)arg2;
- (id)sesdSession;
- (bool)setActiveApplet:(id)arg1 key:(id)arg2 outError:(id*)arg3;
- (void)setAppletsById:(id)arg1;
- (id)setAuthorization:(id)arg1;
- (void)setCardEmulationStarted:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFieldNotificationSent:(bool)arg1;
- (void)setPassthroughDelegate:(id)arg1;
- (void)setSesdSession:(id)arg1;
- (bool)startCardEmulationAuthorization:(id)arg1 deferred:(bool)arg2 error:(id*)arg3;
- (bool)stopCardEmulation:(id*)arg1;
- (bool)supportsSecureRanging;

@end
