
@interface LBFEventManager : NSObject {
    LBFBiomeManager * _biomeManagerDprivacyd;
    LBFBiomeManager * _biomeManagerLighthouse;
    LBFBiomeManager * _biomeManagerMLRuntimed;
    LBFBiomeManager * _biomeManagerTrial;
}

@property (nonatomic, retain) LBFBiomeManager *biomeManagerDprivacyd;
@property (nonatomic, retain) LBFBiomeManager *biomeManagerLighthouse;
@property (nonatomic, retain) LBFBiomeManager *biomeManagerMLRuntimed;
@property (nonatomic, retain) LBFBiomeManager *biomeManagerTrial;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)addDprivacydEvent:(id)arg1 identifiers:(id)arg2 error:(id*)arg3;
- (bool)addLighthousePluginEvent:(id)arg1;
- (bool)addLighthousePluginEvent:(id)arg1 identifiers:(id)arg2 error:(id*)arg3;
- (bool)addMLRuntimedEvent:(id)arg1 identifiers:(id)arg2 error:(id*)arg3;
- (bool)addTrialdEvent:(id)arg1 identifiers:(id)arg2 error:(id*)arg3;
- (id)biomeManagerDprivacyd;
- (id)biomeManagerLighthouse;
- (id)biomeManagerMLRuntimed;
- (id)biomeManagerTrial;
- (id)convertToLBFTrialIdentifiers:(id)arg1;
- (id)ensureBiomeManagerDprivacyd;
- (id)ensureBiomeManagerLighthouse;
- (id)ensureBiomeManagerMLRuntimed;
- (id)ensureBiomeManagerTrial;
- (void)enumerateLastDprivacyEvents:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 shouldContinue:(id /* block */)arg4;
- (void)enumerateLastLighthousePluginEvents:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 shouldContinue:(id /* block */)arg4;
- (void)enumerateLastMLRuntimeEvents:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 shouldContinue:(id /* block */)arg4;
- (void)enumerateLastTrialEvents:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 shouldContinue:(id /* block */)arg4;
- (id)getLastDprivacyEvent:(id)arg1;
- (id)getLastLighthousePluginEvent:(id)arg1;
- (id)getLastMLRuntimeEvent:(id)arg1;
- (id)getLastTrialEvent:(id)arg1;
- (id)init;
- (bool)isEqualIdentifiers:(id)arg1 identifiers:(id)arg2;
- (void)setBiomeManagerDprivacyd:(id)arg1;
- (void)setBiomeManagerLighthouse:(id)arg1;
- (void)setBiomeManagerMLRuntimed:(id)arg1;
- (void)setBiomeManagerTrial:(id)arg1;

@end
