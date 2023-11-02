
@protocol HMMutableApplicationData <HMApplicationData>

@required

- (HMApplicationData *)applicationData;
- (NSUUID *)applicationDataIdentifier;
- (void)setApplicationData:(HMApplicationData *)arg1;

@end
