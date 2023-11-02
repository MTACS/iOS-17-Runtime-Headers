
@interface CIDVUIProofingFlowManager : NSObject {
    _TtC9CoreIDVUI33CIDVUIInternalProofingFlowManager * _proofingFlowManager;
}

@property (nonatomic, retain) _TtC9CoreIDVUI33CIDVUIInternalProofingFlowManager *proofingFlowManager;

- (void).cxx_destruct;
- (unsigned long long)currentProofingEligibilityStatus;
- (id)initWithDelegate:(id)arg1;
- (void)proofingFlowAvailability:(id /* block */)arg1;
- (id)proofingFlowManager;
- (id)proofingFlowViewController;
- (void)setProofingFlowManager:(id)arg1;
- (void)startProofing:(id)arg1 completion:(id /* block */)arg2;

@end
