
@interface AVTAvatarMemoryOptimizer : NSObject {
    bool  _hasCorrectiveInBetweens;
    bool  _hasCorrectives;
    bool  _hasInBetweens;
    NSMutableArray * _indicesOfCorrectivesToFlattenInBaseGeometry;
    NSMutableDictionary * _indicesOfCorrectivesToFlattenInMainTarget;
    NSMutableDictionary * _indicesOfCorrectivesToFlattenInOtherCorrective;
    NSMutableArray * _indicesOfTargetsToFlattenInBaseGeometry;
    NSMutableDictionary * _indicesOfTargetsToFlattenInOtherTarget;
    AVTMemoji * _memoji;
    NSMutableArray * _newCorrectiveDriverCounts;
    NSMutableArray * _newCorrectiveDriverIndices;
    NSMutableArray * _newCorrectiveInBetweenCounts;
    NSMutableArray * _newCorrectiveInBetweenWeights;
    NSMutableArray * _newCorrectivesAndInBetweens;
    NSMutableArray * _newInBetweenCounts;
    NSMutableArray * _newInBetweenWeights;
    NSMutableArray * _newTargetsAndInBetweens;
    NSMutableArray * _newWeights;
    NSMutableDictionary * _nonOneWeightsOfCorrectivesToFlatten;
    NSMutableDictionary * _nonOneWeightsOfTargetsToFlatten;
    NSArray * _oldCorrectiveDriverCounts;
    NSArray * _oldCorrectiveDriverIndices;
    NSArray * _oldCorrectives;
    NSArray * _oldMainTargets;
    NSArray * _oldWeights;
    NSMutableSet * _presetVariantPrefixes;
    NSMutableArray * _requiredMorphVariantComponents;
    NSMapTable * _requiredVariantsPerMorpher;
}

- (void).cxx_destruct;
- (void)applyMorphTarget:(id)arg1 weight:(float)arg2 toBaseGeometryBuffer:(void*)arg3 vertexCount:(unsigned long long)arg4;
- (void)applyMorphTarget:(id)arg1 weight:(float)arg2 toMorphTargetBuffer:(struct { float x1; float x2; float x3; }*)arg3 vertexCount:(unsigned long long)arg4;
- (void)classifyTargetsOfMorpher:(id)arg1 node:(id)arg2;
- (void)flattenCorrectiveAtIndex:(unsigned long long)arg1 inBaseGeometryUsingWeight:(float)arg2;
- (void)flattenCorrectiveAtIndex:(unsigned long long)arg1 inCorrectiveAtIndex:(unsigned long long)arg2 weight:(float)arg3;
- (void)flattenCorrectiveAtIndex:(unsigned long long)arg1 inTargetAtIndex:(unsigned long long)arg2 weight:(float)arg3;
- (void)flattenCorrectivesAtIndices:(id)arg1 inCorrective:(id)arg2 weight:(float)arg3 morpher:(id)arg4;
- (void)flattenCorrectivesAtIndices:(id)arg1 inCorrectiveAtIndex:(unsigned long long)arg2 morpher:(id)arg3;
- (void)flattenRelevantTargetsInOtherTargetsOfMorpher:(id)arg1;
- (void)flattenRelevantTargetsOfMorpher:(id)arg1 inBaseGeometryOfNode:(id)arg2;
- (id)flattenTarget0:(id)arg1 weight0:(float)arg2 target1:(id)arg3 weight1:(float)arg4 inMorphTarget:(id)arg5 originalMorphTarget:(id)arg6;
- (void)flattenTargetAtIndex:(unsigned long long)arg1 inBaseGeometryUsingWeight:(float)arg2;
- (void)flattenTargetAtIndex:(unsigned long long)arg1 inTargetAtIndex:(unsigned long long)arg2 weight:(float)arg3;
- (void)flattenTargetsAtIndices:(id)arg1 correctivesAtIndices:(id)arg2 inTarget:(id)arg3 weight:(float)arg4 morpher:(id)arg5;
- (void)flattenTargetsAtIndices:(id)arg1 correctivesAtIndices:(id)arg2 inTargetAtIndex:(unsigned long long)arg3 morpher:(id)arg4;
- (void)flattenTargetsOfMorpher:(id)arg1 node:(id)arg2;
- (id)initWithMemoji:(id)arg1;
- (void)keepCorrectiveAtIndex:(unsigned long long)arg1 morpher:(id)arg2;
- (void)keepCorrectiveAtIndex:(unsigned long long)arg1 withDriverIndices:(id)arg2 morpher:(id)arg3;
- (void)keepTargetAtIndex:(unsigned long long)arg1 morpher:(id)arg2;
- (void)optimizeMemoji;
- (void)optimizeNode:(id)arg1;
- (void)optimizeNodeHierarchy:(id)arg1;
- (void)preprocessMemoji;
- (void)registerRequiredVariant:(id)arg1 weight:(float)arg2 inHierarchy:(id)arg3;
- (void)resolveInBetweensForTarget:(id)arg1 weight:(float)arg2 inBetweenWeights:(id)arg3 inBetweenTargets:(id)arg4 block:(id /* block */)arg5;
- (bool)shouldClearCPUDataAfterUpload;
- (bool)shouldKeepCreasesAndCorners;

@end
