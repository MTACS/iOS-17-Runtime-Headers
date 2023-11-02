
@protocol CIDVUIProofingFlowManagerDelegate

@required

- (void)proofingFlowManager:(CIDVUIProofingFlowManager *)arg1 completedProofingWithError:(NSError *)arg2;

@optional

- (void)proofingFlowManager:(CIDVUIProofingFlowManager *)arg1 didChangeActiveConfigurations:(NSArray *)arg2;

@end
