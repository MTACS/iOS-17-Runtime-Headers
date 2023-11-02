
@interface TRITreatmentBaseTask : TRIExperimentBaseTask {
    <TRITaskAttributing> * _taskAttributing;
    NSString * _treatmentId;
}

@property (nonatomic, readonly) <TRITaskAttributing> *taskAttributing;
@property (nonatomic, readonly) NSString *treatmentId;

- (void).cxx_destruct;
- (id)description;
- (id)dimensions;
- (unsigned long long)hash;
- (id)initWithExperiment:(id)arg1 treatmentId:(id)arg2 taskAttributing:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)metrics;
- (id)taskAttributing;
- (id)treatmentId;
- (id)trialSystemTelemetry;

@end
