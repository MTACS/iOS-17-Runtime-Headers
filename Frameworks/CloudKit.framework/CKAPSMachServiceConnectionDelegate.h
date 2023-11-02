
@interface CKAPSMachServiceConnectionDelegate : NSObject <APSConnectionDelegate> {
    APSConnection * _connection;
    CKAPSMachServiceConnectionKey * _key;
}

@property (nonatomic) APSConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CKAPSMachServiceConnectionKey *key;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connection;
- (void)connection:(id)arg1 didChangeConnectedStatus:(bool)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connectionDidReconnect:(id)arg1;
- (id)initWithConnection:(id)arg1 key:(id)arg2;
- (id)key;
- (void)setConnection:(id)arg1;
- (void)setKey:(id)arg1;

@end
