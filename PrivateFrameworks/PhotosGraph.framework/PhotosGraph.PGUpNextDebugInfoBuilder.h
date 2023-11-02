
@interface PhotosGraph.PGUpNextDebugInfoBuilder : NSObject {
    void featureWeightVectors;
    void inputDebugInfo;
    void momentUUIDs;
    void rootMemoryIsAggregation;
    void rootMemoryNodeUniqueIdentifier;
    void suggestionFilteringLogs;
    void wantsVerboseDebugInfo;
}

@property (nonatomic, readonly) NSString *debugInfo;
@property (nonatomic, copy) NSArray *featureWeightVectors;
@property (nonatomic, copy) NSString *inputDebugInfo;
@property (nonatomic, copy) NSArray *momentUUIDs;
@property (nonatomic) bool rootMemoryIsAggregation;
@property (nonatomic, copy) NSString *rootMemoryNodeUniqueIdentifier;
@property (nonatomic) bool wantsVerboseDebugInfo;

- (void).cxx_destruct;
- (void)addSuggestionFilteringLog:(id)arg1;
- (id)debugInfo;
- (id)featureWeightVectors;
- (id)init;
- (id)inputDebugInfo;
- (id)momentUUIDs;
- (bool)rootMemoryIsAggregation;
- (id)rootMemoryNodeUniqueIdentifier;
- (void)setFeatureWeightVectors:(id)arg1;
- (void)setInputDebugInfo:(id)arg1;
- (void)setMomentUUIDs:(id)arg1;
- (void)setRootMemoryIsAggregation:(bool)arg1;
- (void)setRootMemoryNodeUniqueIdentifier:(id)arg1;
- (void)setWantsVerboseDebugInfo:(bool)arg1;
- (bool)wantsVerboseDebugInfo;

@end
