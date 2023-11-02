
@interface AMDUseCaseWorkflow : NSObject {
    NSString * _coldstartModelId;
    NSNumber * _endTimestamp;
    AMDInputBuilder * _inputBuilder;
    NSNumber * _maxItemsToDisplay;
    NSString * _modelFormat;
    NSString * _modelId;
    NSString * _modelName;
    AMDOutputBuilder * _outputBuilder;
    NSDictionary * _ruleParams;
    NSString * _secondaryModelId;
    AMDInputBuilder * _secondaryModelInputBuilder;
    AMDOutputBuilder * _secondaryModelOutputBuilder;
    NSNumber * _startTimestamp;
    NSString * _treatmentId;
    NSString * _useCaseId;
}

@property (nonatomic, retain) NSString *coldstartModelId;
@property (nonatomic, retain) NSNumber *endTimestamp;
@property (nonatomic, retain) AMDInputBuilder *inputBuilder;
@property (nonatomic, retain) NSNumber *maxItemsToDisplay;
@property (nonatomic, retain) NSString *modelFormat;
@property (nonatomic, retain) NSString *modelId;
@property (nonatomic, retain) NSString *modelName;
@property (nonatomic, retain) AMDOutputBuilder *outputBuilder;
@property (nonatomic, retain) NSDictionary *ruleParams;
@property (nonatomic, retain) NSString *secondaryModelId;
@property (nonatomic, retain) AMDInputBuilder *secondaryModelInputBuilder;
@property (nonatomic, retain) AMDOutputBuilder *secondaryModelOutputBuilder;
@property (nonatomic, retain) NSNumber *startTimestamp;
@property (nonatomic, retain) NSString *treatmentId;
@property (nonatomic, retain) NSString *useCaseId;

- (void).cxx_destruct;
- (id)coldstartModelId;
- (id)endTimestamp;
- (id)getColdstartModelId;
- (id)getMaxItemsToDisplay;
- (id)getModelFormat;
- (id)getModelId;
- (id)getOutputFeatureIds;
- (id)getPredictions:(unsigned long long)arg1 forDomain:(id)arg2 error:(id*)arg3;
- (id)getTreatmentId;
- (id)getUseCaseId;
- (id)initWithDictionary:(id)arg1;
- (id)inputBuilder;
- (bool)isValid;
- (id)maxItemsToDisplay;
- (id)modelFormat;
- (id)modelId;
- (id)modelName;
- (id)outputBuilder;
- (id)ruleParams;
- (id)secondaryModelId;
- (id)secondaryModelInputBuilder;
- (id)secondaryModelOutputBuilder;
- (void)setColdstartModelId:(id)arg1;
- (void)setEndTimestamp:(id)arg1;
- (void)setInputBuilder:(id)arg1;
- (void)setMaxItemsToDisplay:(id)arg1;
- (void)setModelFormat:(id)arg1;
- (void)setModelId:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setOutputBuilder:(id)arg1;
- (void)setRuleParams:(id)arg1;
- (void)setSecondaryModelId:(id)arg1;
- (void)setSecondaryModelInputBuilder:(id)arg1;
- (void)setSecondaryModelOutputBuilder:(id)arg1;
- (void)setStartTimestamp:(id)arg1;
- (void)setTreatmentId:(id)arg1;
- (void)setUseCaseId:(id)arg1;
- (id)startTimestamp;
- (id)treatmentId;
- (id)useCaseId;

@end
