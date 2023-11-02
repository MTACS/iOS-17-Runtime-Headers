
@interface WBSTrialIdentifiers : NSObject {
    NSString * _experimentId;
    NSString * _namespaceName;
    NSString * _treatmentId;
}

@property (nonatomic, retain) NSString *experimentId;
@property (nonatomic, retain) NSString *namespaceName;
@property (nonatomic, retain) NSString *treatmentId;

- (void).cxx_destruct;
- (id)experimentId;
- (id)namespaceName;
- (void)setExperimentId:(id)arg1;
- (void)setNamespaceName:(id)arg1;
- (void)setTreatmentId:(id)arg1;
- (id)treatmentId;

@end
