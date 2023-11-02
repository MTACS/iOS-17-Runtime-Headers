
@interface RemotePairingDevice.RemotePairingDevicePairingServiceConnection : NSObject {
    void connection;
}

- (void).cxx_destruct;
- (void)allowPromptlessPairingForHostWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAllPairingRecordsWithInvokingCompletionHandlerOn:(id)arg1 completion:(id /* block */)arg2;
- (void)deletePairingRecordWithUuid:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (long long)getUSBConectedHostTrustStateWithError:(id*)arg1;
- (id)init;
- (void)initiateWirelessPairingSessionWithQueue:(id)arg1 completionHandler:(id /* block */)arg2 customPinHandler:(id /* block */)arg3;
- (id)trustedHostInfoAndReturnError:(id*)arg1;

@end
