
@protocol PXSearchResultsValueDelegate <NSObject>

@required

- (PLSearchIndexDateFormatter *)dateFormatter;
- (bool)searchIsFinished:(PXSearchResultsValue *)arg1;
- (NSString *)stringWithStartDate:(PSIDate *)arg1 endDate:(PSIDate *)arg2;

@end
