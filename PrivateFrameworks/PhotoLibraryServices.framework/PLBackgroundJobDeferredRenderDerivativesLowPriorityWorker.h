
@interface PLBackgroundJobDeferredRenderDerivativesLowPriorityWorker : PLBackgroundJobDeferredRenderDerivativesBaseWorker

+ (id)_criteriaToUse;

- (id)_predicateToFetchDeferredAssets;
- (id)deferredProcessingStatesHandled;
- (id)taskIdentifier;

@end
