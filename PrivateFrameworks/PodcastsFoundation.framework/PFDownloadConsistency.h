
@interface PFDownloadConsistency : NSObject {
    void effectApplicator;
    void environment;
    void identifier;
    void listener;
    void resolutionStrategy;
}

- (void).cxx_destruct;
- (void)beginEnforcementWithCompletionHandler:(id /* block */)arg1;
- (void)endEnforcement;
- (id)init;

@end
