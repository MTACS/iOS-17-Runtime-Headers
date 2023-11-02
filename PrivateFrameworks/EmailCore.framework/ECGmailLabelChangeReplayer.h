
@interface ECGmailLabelChangeReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer> {
    <ECIMAPServerInterface> * serverInterface;
}

@property (nonatomic) <ECIMAPLocalActionReplayerDelegate> *delegate;
@property (nonatomic, retain) <ECIMAPServerInterface> *serverInterface;

- (void).cxx_destruct;
- (id)replayAction;
- (id)serverInterface;
- (void)setServerInterface:(id)arg1;

@end
