
@interface DropInCore.IDSManager : NSObject <IDSServiceDelegatePrivate> {
    void delegate;
    void listenerID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void pendingMessageResponseHandlers;
    void serialQueue;
    void service;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;

@end
