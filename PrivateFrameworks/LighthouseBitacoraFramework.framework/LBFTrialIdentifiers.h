
@interface LBFTrialIdentifiers : NSObject {
    NSString * _deploymentID;
    NSString * _experimentID;
    long long  _identifierType;
    NSString * _treatmentID;
    NSString * _trialTaskID;
}

@property (nonatomic, readonly) NSString *deploymentID;
@property (nonatomic, readonly) NSString *experimentID;
@property (nonatomic, readonly) long long identifierType;
@property (nonatomic, readonly) NSString *treatmentID;
@property (nonatomic, readonly) NSString *trialTaskID;

- (void).cxx_destruct;
- (id)deploymentID;
- (id)experimentID;
- (long long)identifierType;
- (id)initWithBMLTTaskID:(id)arg1 deploymentID:(int)arg2;
- (id)initWithExperimentID:(id)arg1 deploymentID:(int)arg2 treatmentID:(id)arg3;
- (id)treatmentID;
- (id)trialTaskID;

@end
