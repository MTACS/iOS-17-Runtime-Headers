
@interface NFAccessoryReaderSession : NFAccessorySession <NFReaderSessionAccessoryCallbacks> {
    <NFAccessoryReaderSessionDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <NFAccessoryReaderSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkNdefSupport:(bool*)arg1 andWrite:(bool*)arg2 error:(id*)arg3;
- (bool)checkPresence:(id*)arg1;
- (bool)connectTag:(id)arg1 error:(id*)arg2;
- (id)delegate;
- (void)didDetectTags:(id)arg1;
- (void)didEndUnexpectedly;
- (void)didTerminate:(id)arg1;
- (bool)disconnectTag:(id*)arg1;
- (id)enableContinuousWave:(bool)arg1 withFrequencySweep:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (id)readNDEF:(id*)arg1;
- (id)readTypeIdentifier:(id*)arg1;
- (id)sendAccessoryProtocolCommand:(id)arg1 outError:(id*)arg2;
- (id)sendAuthProtocolCommand:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (id)setTagDataRate:(int)arg1;
- (bool)startPolling:(id*)arg1;
- (bool)startPollingForTechnology:(unsigned int)arg1 error:(id*)arg2;
- (bool)stopPolling:(id*)arg1;
- (id)transceive:(id)arg1 error:(id*)arg2;

@end
