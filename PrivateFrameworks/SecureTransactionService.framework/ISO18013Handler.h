
@interface ISO18013Handler : STSTransactionHandler <NFSecureTransactionServicesHandoverSessionDelegate, STSXPCClientNotificationListenerDelegate> {
    NFSecureTransactionServicesHandoverSession * _handoverSession;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _handoverSessionMutex;
    <STSSessionNotificationTesterDelegate> * _notificationTesterDelegate;
    STSCredential * _releasedCredential;
    unsigned long long  _startTransactionOption;
    STSHelperLibrary * _stsHelper;
    STSXPCClientNotificationListener * _stsNotificationListener;
    unsigned long long  _transactionState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)activateChildSessionOnSetActiveCredential;
- (id)activateWithHandoffToken:(id)arg1;
- (void)alternativeCarrierConnectedWithStatus:(unsigned long long)arg1;
- (void)alternativeCarrierDisconnectedWithStatus:(unsigned long long)arg1;
- (void)alternativeCarrierReceived:(id)arg1 dataPending:(bool)arg2;
- (void)connectionHandoverCompleted:(id)arg1;
- (void)notificationClientConnected;
- (void)processISO18013CredentialProposals:(id)arg1 readerAuthInfo:(id)arg2;
- (void)session:(id)arg1 connectionHandoverProcessFailure:(id)arg2;
- (void)session:(id)arg1 fieldChange:(bool)arg2;
- (void)session:(id)arg1 fieldNotification:(id)arg2;
- (void)session:(id)arg1 tnepService:(id)arg2;
- (id)startTransactionWithAuthorization:(id)arg1 options:(unsigned long long)arg2;
- (id)stopTransaction;
- (unsigned char)supportedCredentialType;
- (void)tearDownWithCompletion:(id /* block */)arg1;
- (void)transactionEndedWithIdentifier:(id)arg1 error:(id)arg2;
- (void)transactionStarted:(unsigned long long)arg1;
- (void)xpcInterrupted;
- (void)xpcInvalidated;

@end
