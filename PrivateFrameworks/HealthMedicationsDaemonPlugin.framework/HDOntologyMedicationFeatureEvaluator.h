
@interface HDOntologyMedicationFeatureEvaluator : NSObject {
    HDDaemon * _daemon;
}

@property (nonatomic, readonly) HDDaemon *daemon;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;

- (void).cxx_destruct;
- (bool)canRequireShardWithError:(id*)arg1;
- (id)daemon;
- (id)featureIdentifier;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (void)triggerShardEvaluatorWithReason:(id)arg1;

@end
