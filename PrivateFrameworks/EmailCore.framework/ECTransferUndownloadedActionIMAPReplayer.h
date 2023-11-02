
@interface ECTransferUndownloadedActionIMAPReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer> {
    <ECIMAPLocalActionReplayerDelegate> * delegate;
    <ECIMAPServerInterface> * serverInterface;
}

@property (nonatomic) <ECIMAPLocalActionReplayerDelegate> *delegate;
@property (nonatomic, retain) <ECIMAPServerInterface> *serverInterface;

- (void).cxx_destruct;
- (id)_copyAllMessages:(bool)arg1;
- (bool)_deleteUIDs:(id)arg1;
- (bool)_moveAllMessages;
- (id)_uidIndexSet;
- (id)delegate;
- (id)replayAction;
- (id)serverInterface;
- (void)setDelegate:(id)arg1;
- (void)setServerInterface:(id)arg1;

@end
