
@protocol REMChangeTrackingProvider

@required

- (REMChangeTracking *)provideChangeTrackingForAccountID:(REMObjectID *)arg1 clientName:(NSString *)arg2;
- (REMChangeTracking *)provideChangeTrackingForAccountID:(REMObjectID *)arg1 clientName:(NSString *)arg2 transactionAuthorKeysToExclude:(NSSet *)arg3;

@end
