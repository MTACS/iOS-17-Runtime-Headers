
@interface HDOntologyDiagnosticOperation : HDDiagnosticOperation

+ (void)_appendEntry:(id)arg1 tableFormatter:(id)arg2;

- (void)_appendDateStringForDefaultKey:(id)arg1 tableFormatter:(id)arg2 healthStore:(id)arg3;
- (id)_countOfElementsPerSlotInDatabase:(id)arg1;
- (id)_entriesForSlots:(id)arg1 database:(id)arg2;
- (id)_expandResultsToIndividualSlots:(id)arg1;
- (void)_logAndAndAppendFormat:(id)arg1;
- (void)_reportBasicChecksForDatabase:(id)arg1;
- (void)_reportDomain:(id)arg1 keyValues:(id)arg2;
- (void)_reportElementCountsBySlot:(id)arg1 entriesBySlot:(id)arg2;
- (void)_reportElementCountsBySlotForDatabase:(id)arg1;
- (void)_reportForOntologyDatabase;
- (void)_reportForOntologyDatabase:(id)arg1;
- (void)_reportForOntologyFeaturesWithOntologyStore:(id)arg1;
- (void)_reportForOntologyKeyValueDomains;
- (void)_reportForOntologyKeyValueDomainsWithDatabase:(id)arg1;
- (void)_reportForOntologyUserDefaultsWithHealthStore:(id)arg1;
- (void)_reportForShardRequirementStatuses:(id)arg1;
- (void)_reportLocaleAndRegion;
- (void)_reportNetworkReachabilityForEnvironment:(id)arg1;
- (void)_reportOntologyHostURLWithOntologyStore:(id)arg1;
- (void)_reportOntologyMetadataForDatabase:(id)arg1;
- (void)_reportReachabilityFlags:(unsigned int)arg1;
- (void)_reportShardRegistryForDatabase:(id)arg1;
- (id)_valueForDaemonDefaultKey:(id)arg1 healthStore:(id)arg2;
- (id)reportFilename;
- (void)run;

@end
