
@interface CRGreedyTrackingAssociator : CRTrackingAssociator

+ (id)performAssociationOnCandidates:(id)arg1 useRegionsAtOCRDispatchTime:(bool)arg2 existingRegions:(id)arg3 fineGrainedResults:(id)arg4 newRegionHandler:(id /* block */)arg5 matchedRegionHandler:(id /* block */)arg6;

@end
