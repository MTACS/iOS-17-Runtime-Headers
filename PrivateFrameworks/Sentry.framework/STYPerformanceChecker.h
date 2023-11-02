
@interface STYPerformanceChecker : NSObject {
    NSDictionary * _perfCheckerErrors;
    NSObject<OS_dispatch_queue> * _serialUtilityQueue;
    bool  _underMemoryPressure;
    bool  _underThermalPressure;
}

@property (retain) NSDictionary *perfCheckerErrors;
@property (retain) NSObject<OS_dispatch_queue> *serialUtilityQueue;
@property bool underMemoryPressure;
@property bool underThermalPressure;

+ (id)sharedPerfChecker;

- (void).cxx_destruct;
- (void)checkFramerateOfAnimationScenario:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)checkLatencyOfResponsivenessScenario:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)checkPerformanceOfScenarioReport:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)perfCheckerErrors;
- (void)reportError:(long long)arg1 report:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)serialUtilityQueue;
- (void)setPerfCheckerErrors:(id)arg1;
- (void)setSerialUtilityQueue:(id)arg1;
- (void)setUnderMemoryPressure:(bool)arg1;
- (void)setUnderThermalPressure:(bool)arg1;
- (long long)triage:(id)arg1;
- (bool)underMemoryPressure;
- (bool)underThermalPressure;

@end
