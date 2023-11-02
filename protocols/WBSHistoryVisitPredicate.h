
@protocol WBSHistoryVisitPredicate <WBSHistoryPredicate>

@required

- (bool)evaluateServiceVisit:(WBSHistoryServiceVisit *)arg1;
- (bool)evaluateVisit:(WBSHistoryVisit *)arg1;

@end
