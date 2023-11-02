
@interface PGPublicEventDisambiguator : NSObject {
    NSDictionary * _publicEventCriteriaByCategory;
    CLSSceneTaxonomyHierarchy * _sceneTaxonomy;
}

- (void).cxx_destruct;
- (id)_frequentLocationNodesForMomentNode:(id)arg1 largeFrequentLocationNodes:(id)arg2;
- (void)collectConsolidatedAddressesForMomentNodes:(id)arg1 largeFrequentLocationNodes:(id)arg2 consolidatedAddresses:(id*)arg3 consolidatedAddressesByMomentIdentifier:(id*)arg4 momentNodesForConsolidatedAddresses:(id*)arg5 progressBlock:(id /* block */)arg6;
- (id)disambiguateEvents:(id)arg1 forTimeLocationTuple:(id)arg2 momentNode:(id)arg3 graph:(id)arg4 meaningfulEventProcessorCache:(id)arg5;
- (id)initWithSceneTaxonomy:(id)arg1;
- (id)publicEventCriteriaByCategoryInGraph:(id)arg1;

@end
