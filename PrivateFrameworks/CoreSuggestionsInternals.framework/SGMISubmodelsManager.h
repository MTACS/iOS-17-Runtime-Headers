
@interface SGMISubmodelsManager : NSObject

+ (void)addSubmodelStatsToLog:(id)arg1;
+ (void)checkForAndProcessVersionChange;
+ (void)incrementalSubmodelUpdateWithSaliencyModelConfig:(id)arg1 store:(id)arg2 shouldContinue:(id /* block */)arg3 finalGroundTruthDate:(id)arg4 withSimulatedCSSearchableItemForTesting:(id)arg5 limit:(unsigned long long)arg6;
+ (void)incrementalSubmodelUpdateWithSaliencyModelConfig:(id)arg1 store:(id)arg2 shouldContinue:(id /* block */)arg3 finalGroundTruthDate:(id)arg4 withSimulatedCSSearchableItemForTesting:(id)arg5 limit:(unsigned long long)arg6 log:(id)arg7;
+ (void)incrementalSubmodelUpdateWithStore:(id)arg1 limit:(unsigned long long)arg2 log:(id)arg3;
+ (void)incrementalSubmodelUpdateWithStore:(id)arg1 shouldContinue:(id /* block */)arg2 limit:(unsigned long long)arg3 log:(id)arg4;
+ (void)pruneDB;
+ (void)purgeDeletedEmailsReferencesFromStore:(id)arg1;
+ (void)purgeOldTokensFromStore:(id)arg1;
+ (void)purgeTokensToMatchCappingPolicyFromStore:(id)arg1;

@end
