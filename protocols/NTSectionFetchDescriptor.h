
@protocol NTSectionFetchDescriptor <NSObject, NSObject, NSCopying>

@required

- (NTCatchUpOperationResults *)assembleResultsWithCatchUpOperation:(NTCatchUpOperation *)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(NTCatchUpOperation *)arg1;
- (<NTFeedTransforming> *)incrementalLimitTransformationWithFeedPersonalizer:(id <FCFeedPersonalizing><FCPersonalizationFunctionProviding>)arg1 limit:(unsigned long long)arg2 priorFeedItems:(NSArray *)arg3;
- (<NTFeedTransforming> *)incrementalSortTransformationWithFeedPersonalizer:(id <FCFeedPersonalizing>)arg1;

@end
