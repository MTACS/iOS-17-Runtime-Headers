
@interface WFRemoteExecutionIncomingRunRequestSession : WFRemoteExecutionSession <WFOutOfProcessWorkflowControllerDelegate> {
    WFOutOfProcessWorkflowController * _controller;
    NSSet * _lastKnownDestinations;
    NSDictionary * _lastKnownOptions;
}

@property (nonatomic, retain) WFOutOfProcessWorkflowController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *lastKnownDestinations;
@property (nonatomic, retain) NSDictionary *lastKnownOptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)controller;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (void)handleIncomingFileForRemoteExecutionWithURL:(id)arg1 withIdentifier:(id)arg2 metadata:(id)arg3 destinations:(id)arg4 options:(id)arg5;
- (void)handleIncomingProtobuf:(id)arg1 destinations:(id)arg2 options:(id)arg3;
- (void)handleTimeout;
- (void)handleUnsupportedVersionForRequestData:(id)arg1 error:(id)arg2 destinations:(id)arg3 options:(id)arg4;
- (id)lastKnownDestinations;
- (id)lastKnownOptions;
- (void)outOfProcessWorkflowController:(id)arg1 didFinishWithResult:(id)arg2 dialogAttribution:(id)arg3;
- (void)sendResponse:(id)arg1 toDestinations:(id)arg2 options:(id)arg3;
- (void)setController:(id)arg1;
- (void)setLastKnownDestinations:(id)arg1;
- (void)setLastKnownOptions:(id)arg1;
- (double)timeoutLimitInSeconds;

@end
