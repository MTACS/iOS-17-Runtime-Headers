
@interface BMMiningTaskConfig : NSObject {
    NSDictionary * _bmMiningTaskConfig;
    int  _deploymentID;
    NSString * _experimentID;
    bool  _interactionExtractedTopicFromAttachmentFactorInUse;
    NSString * _treatmentID;
    TRIClient * _trialClient;
    NSString * _trialID;
    TRITrackingId * _trialTrackingID;
}

@property (retain) NSDictionary *bmMiningTaskConfig;
@property (nonatomic) int deploymentID;
@property (nonatomic, retain) NSString *experimentID;
@property (nonatomic) bool interactionExtractedTopicFromAttachmentFactorInUse;
@property (nonatomic, retain) NSString *treatmentID;
@property (nonatomic, retain) TRIClient *trialClient;
@property (nonatomic, retain) NSString *trialID;
@property (nonatomic, retain) TRITrackingId *trialTrackingID;

- (void).cxx_destruct;
- (id)bmMiningTaskConfig;
- (int)deploymentID;
- (id)experimentID;
- (id)init;
- (bool)interactionExtractedTopicFromAttachmentFactorInUse;
- (bool)loadBMMiningTaskConfig:(id)arg1;
- (void)loadDefaultConfig;
- (void)registerWithTrial;
- (void)setBmMiningTaskConfig:(id)arg1;
- (void)setDeploymentID:(int)arg1;
- (void)setExperimentID:(id)arg1;
- (void)setInteractionExtractedTopicFromAttachmentFactorInUse:(bool)arg1;
- (void)setTreatmentID:(id)arg1;
- (void)setTrialClient:(id)arg1;
- (void)setTrialID:(id)arg1;
- (void)setTrialTrackingID:(id)arg1;
- (id)treatmentID;
- (id)trialClient;
- (id)trialID;
- (id)trialTrackingID;
- (void)updateFactorLevels;
- (void)updateFactorLevelsFromFilePath:(id)arg1;

@end
