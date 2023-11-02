
@interface ATXTrialClientWrapper : NSObject {
    <TRINotificationToken> * _token;
    TRIClient * _trialClient;
    int  _trialDeploymentId;
    NSString * _trialExperimentId;
    NSString * _trialNamespaceName;
    TRIRolloutIdentifiers * _trialRolloutIdentifiers;
    NSString * _trialTreatmentId;
}

@property (nonatomic, readonly) TRIClient *trialClient;
@property (nonatomic, readonly) int trialDeploymentId;
@property (nonatomic, readonly) NSString *trialExperimentId;
@property (nonatomic, readonly) NSString *trialNamespaceName;
@property (nonatomic, readonly) TRIRolloutIdentifiers *trialRolloutIdentifiers;
@property (nonatomic, readonly) NSString *trialTreatmentId;

- (void).cxx_destruct;
- (id)boolForFactor:(id)arg1;
- (id)dictionaryForTrialResource:(id)arg1;
- (id)directoryPathForTrialResource:(id)arg1;
- (id)filePathForTrialResource:(id)arg1;
- (id)initWithClientIdentifier:(int)arg1 namespaceName:(id)arg2;
- (id)longForFactor:(id)arg1;
- (bool)refreshEnrollmentInformation;
- (bool)refreshRolloutIdentifiers;
- (id)stringForFactor:(id)arg1;
- (id)trialClient;
- (int)trialDeploymentId;
- (id)trialExperimentId;
- (id)trialNamespaceName;
- (id)trialRolloutIdentifiers;
- (id)trialTreatmentId;
- (void)updateFactors;

@end
