
@protocol PREResponsesTrialProtocol <NSObject>

@required

- (NSString *)espressoBinFilePath;
- (TRIExperimentIdentifiers *)experimentIdentifiers;
- (NSString *)inferenceModelConfigPath;
- (NSString *)inferenceModelDescription;
- (NSString *)inferenceModelFilePath;
- (bool)isMLModelEnabled;
- (TRIRolloutIdentifiers *)rolloutIdentifiers;
- (NSString *)treatmentName;
- (NSString *)vocabFilePath;

@end
