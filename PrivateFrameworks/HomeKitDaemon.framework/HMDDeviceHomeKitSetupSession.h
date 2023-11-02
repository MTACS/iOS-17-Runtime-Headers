
@interface HMDDeviceHomeKitSetupSession : HMFObject {
    HMDXPCClientConnection * _clientConnection;
    bool  _firstResidentForHome;
    bool  _hasFailedRelayAttempt;
}

@property (readonly) HMDXPCClientConnection *clientConnection;
@property (getter=isFirstResidentForHome) bool firstResidentForHome;
@property bool hasFailedRelayAttempt;
@property (readonly) bool shouldRelayRequest;

- (void).cxx_destruct;
- (id)clientConnection;
- (bool)hasFailedRelayAttempt;
- (id)initWithFirstResidentForHome:(bool)arg1 clientConnection:(id)arg2;
- (bool)isFirstResidentForHome;
- (void)markHasFailedRelayAttempt;
- (void)setFirstResidentForHome:(bool)arg1;
- (void)setHasFailedRelayAttempt:(bool)arg1;
- (bool)shouldRelayRequest;

@end
