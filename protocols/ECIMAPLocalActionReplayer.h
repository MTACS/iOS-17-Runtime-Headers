
@protocol ECIMAPLocalActionReplayer

@required

- (<ECIMAPLocalActionReplayerDelegate> *)delegate;
- (<ECIMAPServerInterface> *)serverInterface;
- (void)setDelegate:(id <ECIMAPLocalActionReplayerDelegate>)arg1;
- (void)setServerInterface:(id <ECIMAPServerInterface>)arg1;

@end
