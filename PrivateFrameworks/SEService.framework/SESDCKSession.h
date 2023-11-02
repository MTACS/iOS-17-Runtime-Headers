
@interface SESDCKSession : SESSession <SESDCKSessionCallbackInterface> {
    NSString * _activeKeyIdentifier;
    NSString * _aid;
    <SESDCKSessionDelegate> * _delegate;
    <SESDCKSessionPassthroughDelegate> * _passthroughDelegate;
    bool  _supportsSecureRanging;
}

@property (nonatomic, readonly) NSString *activeKeyIdentifier;
@property (nonatomic, readonly) NSString *aid;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SESDCKSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SESDCKSessionPassthroughDelegate> *passthroughDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsSecureRanging;

+ (id)getVehicleReports:(id*)arg1;
+ (id)newInstance;
+ (id)pauseRangingForReaderIdentifier:(id)arg1 durationInSec:(id)arg2;
+ (id)requestAssertionForKeyID:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
+ (id)resumeRangingForReaderIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)activeKeyIdentifier;
- (id)aid;
- (id)cancelRKEAction:(unsigned long long)arg1;
- (id)cancelRKEFunction:(id)arg1;
- (id)delegate;
- (void)didEndUnexpectedly:(id)arg1;
- (void)didReceivePassthroughMessage:(id)arg1;
- (void)didStartSession:(id)arg1;
- (id)disableBluetooth:(bool)arg1;
- (void)endSession;
- (id)getRKEActionsInProgress;
- (bool)getSignedMessage:(id)arg1 authorization:(id)arg2 reply:(id /* block */)arg3;
- (id)passthroughDelegate;
- (void)sendEvent:(id)arg1;
- (bool)sendPassthroughMessage:(id)arg1 error:(id*)arg2;
- (bool)sendPassthroughMessage:(id)arg1 reply:(id /* block */)arg2;
- (id)sendRKEAction:(unsigned long long)arg1 authorization:(id)arg2;
- (id)sendRKEFunction:(id)arg1 action:(id)arg2 authorization:(id)arg3;
- (void)sendRKEFunction:(id)arg1 action:(id)arg2 authorization:(id)arg3 completion:(id /* block */)arg4;
- (bool)sendSignedPassthroughMessage:(id)arg1 authorization:(id)arg2 reply:(id /* block */)arg3;
- (id)setActiveKey:(id)arg1;
- (id)setAuthorization:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPassthroughDelegate:(id)arg1;
- (id)setSecureElementToken:(id)arg1;
- (bool)supportsSecureRanging;
- (id)vehicleState;

@end
