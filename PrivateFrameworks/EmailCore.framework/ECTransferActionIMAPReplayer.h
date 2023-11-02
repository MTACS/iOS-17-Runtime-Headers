
@interface ECTransferActionIMAPReplayer : ECTransferActionReplayer <ECIMAPLocalActionReplayer, ECTransferActionReplayerSubclassMethods> {
    <ECIMAPLocalActionReplayerDelegate> * delegate;
    <ECIMAPServerInterface> * serverInterface;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ECIMAPLocalActionReplayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <ECIMAPServerInterface> *serverInterface;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_transferItems:(id)arg1 destinationMailboxURL:(id)arg2 isMove:(bool)arg3;
- (id)appendItem:(id)arg1 mailboxURL:(id)arg2;
- (id)copyItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (id)delegate;
- (bool)deleteSourceMessagesFromTransferItems:(id)arg1;
- (bool)downloadFailed;
- (id)fetchBodyDataForRemoteID:(id)arg1 mailboxURL:(id)arg2;
- (bool)isRecoverableError:(id)arg1;
- (id)moveItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (id)serverInterface;
- (void)setDelegate:(id)arg1;
- (void)setServerInterface:(id)arg1;

@end
