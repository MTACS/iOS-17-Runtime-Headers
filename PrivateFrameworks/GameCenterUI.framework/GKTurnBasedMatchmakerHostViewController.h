
@interface GKTurnBasedMatchmakerHostViewController : GKExtensionRemoteViewController <GKTurnBasedMatchmakerHostProtocol, GKTurnBasedMatchmakerServiceProtocol> {
    GKTurnBasedMatchmakerViewController * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GKTurnBasedMatchmakerViewController *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)dismissAutomaticallyAfterExtensionCompletion;
+ (id)turnBasedMatchmakerExtension;

- (void).cxx_destruct;
- (id)delegate;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;
- (void)messageFromExtension:(id)arg1;
- (void)refreshMatches;
- (void)setDelegate:(id)arg1;
- (void)setMatchRequestInternal:(id)arg1;
- (void)setShowExistingMatches:(bool)arg1;
- (void)setShowPlay:(bool)arg1;
- (void)setShowQuit:(bool)arg1;

@end
