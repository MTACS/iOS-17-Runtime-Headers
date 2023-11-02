
@interface IQFMapsPersonalizationLookup : NSObject {
    GDEntityResolutionInProcessTextClient * _ecrClient;
    GDKnosisServer * _knosisServer;
}

+ (id)_aggregateLifeEvents:(id)arg1;
+ (void)_fetchResultsForEntityIds:(id)arg1 knosisServer:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)_muidForKnosisAnswer:(id)arg1 entityIDToMuid:(id)arg2;
+ (id)_parseECRRankedItem:(id)arg1 locationMUIDs:(id)arg2;
+ (id)_parseKnosisAnswer:(id)arg1 entityIDToMuid:(id)arg2;
+ (id)sharedMapsPersonalizationLookup;

- (void).cxx_destruct;
- (void)_fetchECRResultForLocationMUIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchResultsForEntityIds:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)eventsAtLocations:(id)arg1;
- (void)eventsAtLocations:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;

@end
