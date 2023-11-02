
@protocol HMDPrimaryResidentElectionAddOnDelegate <NSObject>

@required

- (void)primaryElectionAddOn:(id <HMDPrimaryResidentElectionAddOn>)arg1 didElectPrimaryResident:(HMDResidentDevice *)arg2 confirmed:(bool)arg3 electionLogEvent:(HMMLogEvent *)arg4;
- (void)primaryElectionAddOn:(id <HMDPrimaryResidentElectionAddOn>)arg1 didFailToElectWithError:(NSError *)arg2;
- (void)primaryElectionAddOn:(id <HMDPrimaryResidentElectionAddOn>)arg1 didUpdateActiveNodes:(NSSet *)arg2;
- (void)primaryElectionAddOn:(id <HMDPrimaryResidentElectionAddOn>)arg1 didUpdateResidentDevice:(HMDResidentDevice *)arg2;

@end
