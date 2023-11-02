
@interface _ATXAppLaunchLocation : NSObject {
    _ATXDuetHelper * _duetHelper;
    <ATXLocationManagerProtocol> * _locationManager;
    _PASLock * _lock;
}

+ (id)defaultPath;
+ (void)joinLaunchEvents:(id)arg1 withVisits:(id)arg2 block:(id /* block */)arg3;
+ (id)sortTimeIntervals:(id)arg1;
+ (id)visitsWithLOI:(id)arg1 startDate:(id)arg2;
+ (void)writeModel:(id)arg1;

- (void).cxx_destruct;
- (void)_trainModelWithLOI:(id)arg1 startDate:(id)arg2;
- (id)init;
- (id)initWithDuetHelper:(id)arg1 locationManager:(id)arg2;
- (int)launchCountAtLOI:(id)arg1 bundleId:(id)arg2;
- (double)launchProbabilityAtLOI:(id)arg1 appForAllIntentsBundleId:(id)arg2;
- (double)launchProbabilityAtLOI:(id)arg1 appIntent:(id)arg2;
- (double)launchProbabilityAtLOI:(id)arg1 bundleId:(id)arg2;
- (unsigned long long)loadModel;
- (unsigned long long)loadModelAtPath:(id)arg1;
- (id)locationManager;
- (void)resetAppIntentLocationData;
- (void)train;
- (void)trainWithCallback:(id /* block */)arg1;

@end
