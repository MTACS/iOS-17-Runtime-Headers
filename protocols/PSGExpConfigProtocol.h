
@protocol PSGExpConfigProtocol <NSObject>

@required

- (TRIExperimentIdentifiers *)experimentIdentifiers;
- (TRIRolloutIdentifiers *)rolloutIdentifiers;
- (NSString *)treatmentName;

@end
