
@protocol STSSearchModelDelegate <NSObject>

@required

- (void)searchModel:(STSSearchModel *)arg1 insertedResultsAtIndexPaths:(NSArray *)arg2 removedResultsAtIndexPaths:(NSArray *)arg3;
- (void)searchModelUpdatedPredictedSuggestions:(STSSearchModel *)arg1;

@end
