
@interface CopresenceCore.ActivitySessionClientConnection : _TtGC14CopresenceCore9XPCClientOS_24ActivitySessionInterface_ <CPActivitySessionXPCClient> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  id;
    void receivedResourceCallback;
    void serverDisconnectedCallback;
    void setActivityPublisher;
    void setDataCryptorCallback;
    void setStateCallback;
}

- (void).cxx_destruct;
- (id)init;
- (void)receivedResourceAtURL:(id)arg1 withMetadata:(id)arg2 fromParticipantWithIdentifier:(unsigned long long)arg3;
- (void)setActivityWithActivity:(id)arg1;
- (void)setDataCryptor:(id)arg1;
- (void)setStateWithState:(long long)arg1 error:(id)arg2;

@end
