
@protocol EDMessageRepositoryQueryHandler <EDReconciliationQueryProvider, EFCancelable>

@required

- (EMQuery *)query;
- (void)requestSummaryForMessageObjectID:(EMMessageObjectID *)arg1;
- (bool)start;
- (void)tearDown;
- (void)test_tearDown;

@end
