
@interface STYScenarioReport : NSObject {
    SignpostInterval * _interval;
    NSString * _issueCategory;
    NSString * _metadata;
    float  _observedFps;
    float  _observedLatencyInMs;
    STYUserScenario * _scenario;
    unsigned long long  _scenarioEndTime;
    unsigned long long  _scenarioStartTime;
    NSMutableDictionary * _symptomsSignature;
    float  _targetFps;
    float  _targetLatencyInMs;
}

@property (retain) SignpostInterval *interval;
@property (readonly) NSString *issueCategory;
@property (retain) NSString *metadata;
@property (readonly) float observedFps;
@property (readonly) float observedLatencyInMs;
@property (readonly) STYUserScenario *scenario;
@property (readonly) unsigned long long scenarioEndTime;
@property (readonly) unsigned long long scenarioStartTime;
@property (retain) NSMutableDictionary *symptomsSignature;
@property (readonly) float targetFps;
@property float targetLatencyInMs;

+ (id)reportFromSignpostEvent:(id)arg1 error:(id*)arg2;
+ (id)reportFromSignpostInterval:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)convertDictionaryToString:(id)arg1;
- (id)initWithScenario:(id)arg1;
- (id)initWithSignpostEvent:(id)arg1 scenario:(id)arg2 error:(id*)arg3;
- (id)initWithSignpostInterval:(id)arg1 scenario:(id)arg2 error:(id*)arg3;
- (id)interval;
- (id)issueCategory;
- (id)metadata;
- (float)observedFps;
- (float)observedLatencyInMs;
- (id)scenario;
- (unsigned long long)scenarioEndTime;
- (unsigned long long)scenarioStartTime;
- (void)setInterval:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSymptomsSignature:(id)arg1;
- (void)setTargetLatencyInMs:(float)arg1;
- (id)symptomsSignature;
- (id)symptomsSignatureForReport;
- (float)targetFps;
- (float)targetLatencyInMs;

@end
