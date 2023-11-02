
@interface NFSecureTransactionServicesHandoverSession : NFSession <NFSecureTransactionServicesHandoverSessionCallbacksInterface> {
    <NFSecureTransactionServicesHandoverSessionDelegate> * _delegate;
    NSObject<NFTNEPTagDeviceDelegate> * _tagDeviceDelegate;
    NSObject<NFTNEPReaderDelegate> * _tagReaderDelegate;
}

@property <NFSecureTransactionServicesHandoverSessionDelegate> *delegate;
@property (nonatomic, retain) NSObject<NFTNEPTagDeviceDelegate> *tagDeviceDelegate;
@property (nonatomic, retain) NSObject<NFTNEPReaderDelegate> *tagReaderDelegate;

- (void).cxx_destruct;
- (void)connectionHandoverProcessCompleted;
- (void)connectionHandoverProcessFailure:(id)arg1;
- (void)connectionHandoverTNEPServiceSelected:(id)arg1;
- (id)delegate;
- (id)deselectService;
- (void)fieldChange:(bool)arg1;
- (void)fieldNotification:(id)arg1;
- (void)handleSessionResumed;
- (void)handleSessionSuspended:(id)arg1;
- (id)restartPolling;
- (id)selectService:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTagDeviceDelegate:(id)arg1;
- (void)setTagReaderDelegate:(id)arg1;
- (void)singleResponseCommunicationReaderSend:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)singleResponseCommunicationTagSend:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startSTSNotificationListenerWithEndpoint:(id)arg1;
- (id)startTNEPReaderWithDelegate:(id)arg1;
- (id)startTNEPTagDeviceWithService:(id)arg1 optionalRecords:(id)arg2 delegate:(id)arg3;
- (void)staticReaderEngagementDiscovered:(id)arg1;
- (void)stopTNEPOperation;
- (id)tagDeviceDelegate;
- (id)tagReaderDelegate;
- (void)tnepReaderServicesAborted:(id)arg1;
- (void)tnepReaderServicesDiscovered:(id)arg1;
- (void)tnepTagDeviceDeselected:(id)arg1;
- (void)tnepTagDeviceNDEFMessageReceived:(id)arg1;
- (void)tnepTagDeviceReaderDetected;
- (void)tnepTagDeviceSelected:(id)arg1 respondHandler:(id /* block */)arg2;

@end
