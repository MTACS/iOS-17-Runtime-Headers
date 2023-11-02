
@protocol EDReconciliationQueryProvider <NSObject>

@required

- (NSArray *)messageReconciliationQueries;
- (NSArray *)threadReconciliationQueries;

@end
