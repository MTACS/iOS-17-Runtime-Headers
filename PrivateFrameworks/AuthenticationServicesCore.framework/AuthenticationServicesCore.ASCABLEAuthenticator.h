
@interface AuthenticationServicesCore.ASCABLEAuthenticator : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  advertisement;
    void apsConnection;
    void apsWrapper;
    void bluetoothAdvertiser;
    void completionHandler;
    void cryptographyManager;
    void currentCTAPCommand;
    void currentState;
    void networkPathMonitor;
    void powerLogger;
    void usedMagicCredentialID;
    void webSocket;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)finishTransactionWithCredential:(id)arg1 error:(id)arg2;
- (id)init;
- (id)initWithCaBLEURL:(id)arg1 error:(id*)arg2;
- (void)sendExcludedCredentialMatchError;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
