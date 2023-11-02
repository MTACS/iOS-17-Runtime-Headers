
@interface SATelephonyManager : NSObject {
    TUCall * _call;
    bool  _callFailed;
    bool  _callInProgress;
    NSObject<OS_dispatch_queue> * _callQueue;
    <SATelephonyDelegateProtocol> * _delegate;
}

@property (nonatomic, retain) TUCall *call;
@property (nonatomic) bool callFailed;
@property (nonatomic) bool callInProgress;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callQueue;
@property (nonatomic) <SATelephonyDelegateProtocol> *delegate;

- (void).cxx_destruct;
- (void)_callStatusChanged:(id)arg1;
- (void)_canPlaceNewCall:(id /* block */)arg1;
- (void)_currentCallEnded;
- (void)_currentCallEndedWithUpdatedFailureStatus:(bool)arg1;
- (id)call;
- (bool)callFailed;
- (bool)callInProgress;
- (id)callQueue;
- (id)delegate;
- (void)handleCallChanged:(id)arg1 force:(bool)arg2;
- (id)initWithQueue:(id)arg1;
- (void)placeVoiceCall:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCall:(id)arg1;
- (void)setCallFailed:(bool)arg1;
- (void)setCallInProgress:(bool)arg1;
- (void)setCallQueue:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
