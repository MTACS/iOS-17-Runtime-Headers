
@interface ECIMAPFlagChangeUndownloadedActionReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer> {
    <ECIMAPLocalActionReplayerDelegate> * delegate;
    <ECIMAPServerInterface> * serverInterface;
}

@property (nonatomic) <ECIMAPLocalActionReplayerDelegate> *delegate;
@property (nonatomic, retain) <ECIMAPServerInterface> *serverInterface;

- (void).cxx_destruct;
- (id)delegate;
- (id)replayAction;
- (id)serverInterface;
- (void)setDelegate:(id)arg1;
- (void)setServerInterface:(id)arg1;

@end
