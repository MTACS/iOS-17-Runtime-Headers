
@interface SGTrialClientWrapper : NSObject {
    int  _deploymentId;
    NSString * _experimentId;
    NSString * _namespaceName;
    TRIRolloutIdentifiers * _rolloutIdentifiers;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSString * _treatmentId;
    TRIClient * _triClient;
}

- (void).cxx_destruct;
- (id)_modelDirectoryPathCreateIfNeeded:(bool)arg1;
- (id)_modelNameForCurrentEnrollment;
- (id)_modelNameForExperimentId:(id)arg1 treatmentId:(id)arg2 deploymentId:(id)arg3;
- (id)_modelPathForExperimentId:(id)arg1 treatmentId:(id)arg2 deploymentId:(id)arg3 createIfNeeded:(bool)arg4;
- (bool)_unarchiveFrom:(id)arg1 to:(id)arg2;
- (bool)_uncompressModelAtPath:(id)arg1 toPath:(id)arg2;
- (id)baseModelName;
- (void)cleanExperimentModelsFromTrialModelsFolder;
- (id)deploymentId;
- (id)experimentId;
- (id)initWithClientIdentifier:(int)arg1;
- (id)modelPath;
- (id)modelPathForCurrentEnrollment;
- (id)modelPathForExperimentId:(id)arg1 treatmentId:(id)arg2 deploymentId:(id)arg3;
- (id)modelPathForTriClient:(id)arg1 andNamespace:(id)arg2;
- (bool)refreshEnrollmentInformationForNamespace:(id)arg1;
- (bool)refreshRolloutIdentifiersForNamespace:(id)arg1;
- (id)rolloutIdentifiers;
- (id)treatmentId;
- (void)uncompressModelAndUpdateFactors:(id)arg1 destinationPath:(id)arg2;
- (void)updateFactors;

@end
