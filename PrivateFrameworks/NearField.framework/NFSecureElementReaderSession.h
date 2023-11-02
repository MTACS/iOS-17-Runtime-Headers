
@interface NFSecureElementReaderSession : NFSession {
    <NFSecureElementReaderSessionDelegate> * _delegate;
}

@property <NFSecureElementReaderSessionDelegate> *delegate;

- (void).cxx_destruct;
- (bool)connectTag:(id)arg1 error:(id*)arg2;
- (id)delegate;
- (void)didDetectTags:(id)arg1;
- (void)didEndSecureElementReader:(id)arg1;
- (void)didEndUnexpectedly;
- (void)didReceiveThermalIndication:(bool)arg1;
- (void)didStartSecureElementReader:(id)arg1;
- (bool)disconnectTag:(id*)arg1;
- (bool)performGetVASDataWithRequestList:(id)arg1 responseList:(id)arg2 error:(id*)arg3;
- (bool)performSelectVAS:(id)arg1 error:(id*)arg2;
- (id)performVAS:(id)arg1 error:(id*)arg2;
- (void)receivedSecureElementReaderData:(id)arg1 forApplet:(id)arg2;
- (id)selectApplets:(id)arg1;
- (bool)selectApplets:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (bool)start:(id*)arg1;
- (id)startSecureElementReader;
- (bool)startVASPolling:(id)arg1 error:(id*)arg2;
- (bool)stop:(id*)arg1;
- (id)stopSecureElementReader;
- (bool)stopVASPolling:(id*)arg1;
- (id)transceive:(id)arg1 error:(id*)arg2;

@end
