
@interface MLPredictionEvent : NSObject {
    NSString * _bundleIdentifier;
    unsigned long long  _epochIndex;
    long long  _featuresPredictionCountSoFar;
    NSNumber * _firstPartyExecutable;
    MLPredictionEventMetric * _lastReportedMetric;
    NSString * _modelName;
    NSNumber * _modelType;
    NSObject<OS_dispatch_queue> * _predictionEventQueue;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _timebaseInfo;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSNumber *firstPartyExecutable;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic, copy) NSNumber *modelType;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)firstPartyExecutable;
- (id)init;
- (id)lastReportedMetric;
- (void)maybeLogPredictionEvent:(unsigned long long)arg1;
- (id)modelName;
- (id)modelType;
- (void)setBundleIdentifier:(id)arg1;
- (void)setFirstPartyExecutable:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setModelType:(id)arg1;

@end
