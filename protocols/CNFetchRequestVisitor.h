
@protocol CNFetchRequestVisitor <NSObject>

@required

- (void)visitChangeHistoryFetchRequest:(CNChangeHistoryFetchRequest *)arg1;
- (void)visitContactFetchRequest:(CNContactFetchRequest *)arg1;

@end
