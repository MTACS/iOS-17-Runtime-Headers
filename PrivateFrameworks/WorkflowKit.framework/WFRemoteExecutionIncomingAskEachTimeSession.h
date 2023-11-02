
@interface WFRemoteExecutionIncomingAskEachTimeSession : WFRemoteExecutionSession {
    NSSet * _lastKnownDestinations;
    NSDictionary * _lastKnownOptions;
}

@property (nonatomic, retain) NSSet *lastKnownDestinations;
@property (nonatomic, retain) NSDictionary *lastKnownOptions;

- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)handleIncomingProtobuf:(id)arg1 currentlyActiveSessions:(id)arg2 responseDestinations:(id)arg3 responseOptions:(id)arg4;
- (void)handleTimeout;
- (id)lastKnownDestinations;
- (id)lastKnownOptions;
- (id)missingParameterError;
- (void)sendResponse:(id)arg1 destinations:(id)arg2 options:(id)arg3;
- (void)setLastKnownDestinations:(id)arg1;
- (void)setLastKnownOptions:(id)arg1;

@end
