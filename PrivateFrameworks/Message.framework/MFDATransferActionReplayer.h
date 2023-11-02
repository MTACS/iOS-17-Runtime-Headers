
@interface MFDATransferActionReplayer : ECTransferActionReplayer <ECTransferActionReplayerSubclassMethods> {
    MFDAMessageStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MFDAMessageStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appendItem:(id)arg1 mailboxURL:(id)arg2;
- (id)copyItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (bool)deleteSourceMessagesFromTransferItems:(id)arg1;
- (bool)downloadFailed;
- (id)fetchBodyDataForRemoteID:(id)arg1 mailboxURL:(id)arg2;
- (bool)isRecoverableError:(id)arg1;
- (id)moveItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (id)replayActionUsingStore:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
