
@interface NFReaderSession : NFSession <NFReaderSessionCallbacks> {
    long long  _actionSheetUI;
    NFTag * _connectedTag;
    <NFReaderSessionDelegate> * _delegate;
}

@property (readonly) long long actionSheetUI;
@property (readonly, copy) NSString *debugDescription;
@property <NFReaderSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_disconnectTagWithCardRemoval:(bool)arg1 outError:(id*)arg2;
- (long long)actionSheetUI;
- (bool)checkNdefSupportsRead:(bool*)arg1 andWrite:(bool*)arg2;
- (bool)checkNdefSupportsRead:(bool*)arg1 andWrite:(bool*)arg2 error:(id*)arg3;
- (bool)checkPresence;
- (bool)checkPresenceWithError:(id*)arg1;
- (bool)connectTag:(id)arg1;
- (bool)connectTag:(id)arg1 error:(id*)arg2;
- (id)delegate;
- (void)didDetectExternalReaderWithNotification:(id)arg1;
- (void)didDetectNDEFMessages:(id)arg1 fromTags:(id)arg2 connectedTagIndex:(unsigned long long)arg3 updateUICallback:(id /* block */)arg4;
- (void)didDetectTags:(id)arg1 connectedTagIndex:(unsigned long long)arg2;
- (void)didEndUnexpectedly;
- (void)didTerminate:(id)arg1;
- (void)didUIControllerInvalidate:(id)arg1;
- (bool)disconnectTag;
- (bool)disconnectTagWithCardRemoval:(id*)arg1;
- (bool)disconnectTagWithError:(id*)arg1;
- (id)enableContinuousWave:(bool)arg1 withFrequencySweep:(bool)arg2;
- (void)endSession;
- (id)felicaRequestService:(id)arg1 error:(id*)arg2;
- (id)felicaRequestService:(id)arg1 forSystemCode:(id)arg2 error:(id*)arg3;
- (id)felicaState;
- (id)felicaStateForSystemCode:(id)arg1 withRequestService:(id)arg2 withBlockReadList:(id)arg3 performSearchServiceCode:(bool)arg4;
- (id)felicaStateForSystemCode:(id)arg1 withRequestService:(id)arg2 withBlockReadList:(id)arg3 performSearchServiceCode:(bool)arg4 error:(id*)arg5;
- (id)felicaStateWithError:(id*)arg1;
- (bool)formatNdefWithKey:(id)arg1;
- (bool)formatNdefWithKey:(id)arg1 error:(id*)arg2;
- (id)initWithUIType:(long long)arg1;
- (id)ndefRead;
- (id)ndefReadWithError:(id*)arg1;
- (bool)ndefWrite:(id)arg1;
- (bool)ndefWrite:(id)arg1 error:(id*)arg2;
- (id)performVAS:(id)arg1 error:(id*)arg2;
- (bool)restartPollingWithError:(id*)arg1;
- (unsigned int)runScript:(id)arg1 parameters:(id)arg2 results:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (bool)setECPPayload:(id)arg1 error:(id*)arg2;
- (bool)setPollingProfile:(long long)arg1 error:(id*)arg2;
- (id)skipMifareClassification;
- (bool)startLPCDPollingWithError:(id*)arg1;
- (bool)startPolling;
- (bool)startPollingForTechnology:(unsigned int)arg1;
- (bool)startPollingForTechnology:(unsigned int)arg1 error:(id*)arg2;
- (bool)startPollingWithError:(id*)arg1;
- (bool)stopPolling;
- (bool)stopPollingWithError:(id*)arg1;
- (id)transceive:(id)arg1;
- (id)transceive:(id)arg1 error:(id*)arg2;
- (id)updateUIAlertMessage:(id)arg1;

@end
