
@interface WFShazamMediaAction : WFAction <SHSessionDelegate> {
    SHManagedSession * _managedSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SHManagedSession *managedSession;
@property (readonly) Class superclass;

+ (id)userInterfaceProtocol;

- (void).cxx_destruct;
- (id)disabledOnPlatforms;
- (void)finishRunningWithError:(id)arg1;
- (void)finishRunningWithMatch:(id)arg1 error:(id)arg2;
- (id)managedSession;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)session:(id)arg1 didFindMatch:(id)arg2;
- (void)session:(id)arg1 didNotFindMatchForSignature:(id)arg2 error:(id)arg3;
- (void)setManagedSession:(id)arg1;
- (void)startShazam;

@end
