
@interface DBInstrumentClusterWorkspaceOwner : NSObject <BSInvalidatable, DBEventHandling, DBWorkspaceOwner> {
    DBWorkspace * _workspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) DBWorkspace *workspace;

- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (void)invalidate;
- (void)session:(id)arg1 handleStateChangeRequest:(id)arg2;
- (unsigned long long)session:(id)arg1 policyForRequest:(id)arg2;
- (void)setWorkspace:(id)arg1;
- (id)workspace;
- (void)workspace:(id)arg1 didBeginStateChangeSession:(id)arg2;
- (void)workspace:(id)arg1 didEndStateChangeSession:(id)arg2;

@end
