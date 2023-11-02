
@interface CoreIDVUI.CIDVUIInternalProofingFlowManager : NSObject {
    void configuration;
    void delegate;
    void eligibilityHelper;
    void externalProofingFlowManager;
    void proofingFlowManager;
}

@property (nonatomic, readonly) unsigned long long proofingEligibilityStatus;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDelegate:(id)arg1 externalProofingFlowManager:(id)arg2;
- (unsigned long long)proofingEligibilityStatus;
- (void)proofingFlowAvailabilityWithCompletion:(id /* block */)arg1;
- (id)proofingFlowViewController;
- (void)startProofingWithConfiguration:(id)arg1 completion:(id /* block */)arg2;

@end
