
@interface PGLocationFeatureSummarySource : NSObject <PGFeatureSummarySourceProtocol> {
    PGGraph * _graph;
    NSObject<OS_os_log> * _loggingConnection;
    PGGraphLocationCityNodeCollection * _supersetCityNodes;
    PGTitleGenerationContext * _titleGenerationContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)arg1 titleGenerationContext:(id)arg2 graph:(id)arg3;
- (id)summarizedAreaNodesForMomentNode:(id)arg1 momentAddressNodesAsSet:(id)arg2;
- (id)summarizedCityOrCountyNodesForMomentNode:(id)arg1 momentAddressNodesAsSet:(id)arg2;
- (id)summarizedDistrictNodesForMomentNode:(id)arg1 momentAddressNodes:(id)arg2 momentCityNodes:(id)arg3;
- (id)summarizedFeaturesForMomentNodes:(id)arg1;
- (id)summarizedHomeWorkNodesForMomentNode:(id)arg1 momentAddressNodes:(id)arg2;

@end
