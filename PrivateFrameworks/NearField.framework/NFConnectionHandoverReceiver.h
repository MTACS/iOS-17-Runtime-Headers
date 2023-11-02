
@interface NFConnectionHandoverReceiver : NFConnectionHandoverController <NFFieldDetectSessionDelegate, NFHCESessionDelegate> {
    id /* block */  _delaySendSelectCompletion;
    NSObject<NFConnectionHandoverReceiverDelegate> * _delegate;
    bool  _didConnect;
    NFTimer * _emuAssertTimer;
    bool  _hceAppSelected;
    NFHCESession * _hceSession;
    NFConnectionHandoverSelect * _pendingCHSelect;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ delaySendSelectCompletion;
@property (nonatomic) NSObject<NFConnectionHandoverReceiverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didConnect;
@property (nonatomic, retain) NFTimer *emuAssertTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hceAppSelected;
@property (nonatomic, retain) NFHCESession *hceSession;
@property (nonatomic, retain) NFConnectionHandoverSelect *pendingCHSelect;
@property (readonly) Class superclass;

+ (id)receiverWithDelegate:(id)arg1;
+ (id)receiverWithDelegate:(id)arg1 callbackQueue:(id)arg2;

- (void).cxx_destruct;
- (void)_emuAssertTimerExpired;
- (void)_processConnect;
- (void)_processDisconnect;
- (void)_processRetryRequest:(id)arg1;
- (bool)_processSelectCommand:(id)arg1 response:(id)arg2;
- (void)_sendFailureAPDU;
- (void)_start;
- (void)_stopWithError:(id)arg1;
- (id /* block */)delaySendSelectCompletion;
- (id)delegate;
- (bool)didConnect;
- (id)emuAssertTimer;
- (bool)hceAppSelected;
- (id)hceSession;
- (void)hceSession:(id)arg1 didReceiveAPDU:(id)arg2;
- (void)hceSession:(id)arg1 didReceiveField:(id)arg2;
- (void)hceSessionDidConnect:(id)arg1;
- (void)hceSessionDidDisconnect:(id)arg1;
- (void)hceSessionDidEndUnexpectedly:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 callbackQueue:(id)arg2;
- (id)pendingCHSelect;
- (void)sendHandoverSelect:(id)arg1 delay:(double)arg2 completionHandler:(id /* block */)arg3;
- (bool)sendHandoverSelect:(id)arg1 error:(id*)arg2;
- (void)setDelaySendSelectCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidConnect:(bool)arg1;
- (void)setEmuAssertTimer:(id)arg1;
- (void)setHceAppSelected:(bool)arg1;
- (void)setHceSession:(id)arg1;
- (void)setPendingCHSelect:(id)arg1;
- (void)start;
- (void)stop;

@end
