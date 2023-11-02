
@interface NFHCESession : NFSession <NFHostEmulationSessionCallbacks> {
    <NFHCESessionDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <NFHCESessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)didConnectToReader;
- (void)didDisconnectFromReader;
- (void)didEndUnexpectedly;
- (void)didReceiveAPDU:(id)arg1;
- (void)didReceiveField:(id)arg1;
- (void)endSession;
- (id)readAPDU:(id*)arg1;
- (void)readAPDUWithCompletion:(id /* block */)arg1;
- (id)requestEmulationAssertion:(double)arg1;
- (id)sendAPDU:(id)arg1;
- (id)sendAPDU:(id)arg1 startReadOnCompletion:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (id)startEmulation;
- (id)stopEmulation;

@end
