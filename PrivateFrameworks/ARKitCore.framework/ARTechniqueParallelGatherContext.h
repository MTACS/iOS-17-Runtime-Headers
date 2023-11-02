
@interface ARTechniqueParallelGatherContext : ARTechniqueGatherContext {
    NSIndexSet * _deterministicTechniqueIndices;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _gatherLock;
    NSMutableDictionary * _gatheredDataByTechniqueIndex;
    NSMutableIndexSet * _lateResultTechniqueIndices;
    ARTechniqueParallelGatherContext * _previousContext;
    NSIndexSet * _requiredTechniqueIndices;
    bool  _requiredTimeIntervalComplete;
    bool  _resultsCaptured;
    unsigned long long  _techniqueCount;
    NSMapTable * _techniquesByIndex;
}

@property bool requiredTimeIntervalComplete;
@property (nonatomic, readonly) unsigned long long techniqueCount;

- (void).cxx_destruct;
- (id)_allGatheredDataByTechniqueIndex;
- (id)addResultData:(id)arg1 forTechniqueAtIndex:(unsigned long long)arg2;
- (id)captureGatheredData;
- (id)description;
- (bool)deterministicResultsCaptured;
- (id)gatheredData;
- (unsigned long long)indexForTechnique:(id)arg1;
- (id)initWithParentContext:(id)arg1 previousContext:(id)arg2 requiredTechniqueIndices:(id)arg3 deterministicTechniqueIndices:(id)arg4 techniques:(id)arg5;
- (id)lateResultDataForTechniqueAtIndex:(unsigned long long)arg1;
- (bool)requiredTimeIntervalComplete;
- (void)setRequiredTimeIntervalComplete:(bool)arg1;
- (unsigned long long)techniqueCount;

@end
