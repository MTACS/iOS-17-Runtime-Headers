
@protocol HMDPrimaryResidentDiscoveryOperation <NSObject>

@required

- (void)cancel;
- (HMFFuture *)completionFuture;
- (HMDResidentDevice *)currentPrimaryResident;
- (NSUUID *)currentPrimaryResidentGenerationID;
- (NSError *)error;
- (bool)isCancelled;
- (void)run;

@end
