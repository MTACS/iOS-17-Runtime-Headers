
@protocol NTTodayResultsAggregator <NSObject>

@required

- (NTItemAggregationResult *)aggregateSections:(NSArray *)arg1 itemsBySectionDescriptor:(NSDictionary *)arg2 budgetInfo:(NTAggregationBudgetInfo *)arg3;

@end
