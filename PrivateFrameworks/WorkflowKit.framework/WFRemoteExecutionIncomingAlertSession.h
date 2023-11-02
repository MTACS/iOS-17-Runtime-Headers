
@interface WFRemoteExecutionIncomingAlertSession : WFRemoteExecutionSession {
    NSSet * _lastKnownDestinations;
    NSDictionary * _lastKnownOptions;
}

@property (nonatomic, retain) NSSet *lastKnownDestinations;
@property (nonatomic, retain) NSDictionary *lastKnownOptions;

- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)handleIncomingProtobuf:(id)arg1 currentlyActiveSessions:(id)arg2 responseDestinations:(id)arg3 options:(id)arg4;
- (void)handleTimeout;
- (id)lastKnownDestinations;
- (id)lastKnownOptions;
- (void)sendSelectedButton:(id)arg1 forAlertWithIdentifier:(id)arg2 error:(id)arg3 destinations:(id)arg4 options:(id)arg5;
- (void)setLastKnownDestinations:(id)arg1;
- (void)setLastKnownOptions:(id)arg1;
- (double)timeoutLimitInSeconds;

@end
