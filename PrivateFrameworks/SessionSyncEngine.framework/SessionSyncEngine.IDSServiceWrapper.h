
@interface SessionSyncEngine.IDSServiceWrapper : NSObject <IDSServiceDelegate> {
    void delegate;
    void idsService;
    void queue;
}

- (void).cxx_destruct;
- (id)init;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;

@end
