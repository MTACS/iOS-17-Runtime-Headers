
@protocol EDDatabaseChangeHookResponder <NSObject>

@optional

- (void)persistenceDidInitializeConversationSubscriptionProvider;
- (void)persistenceDidInvalidate;
- (void)persistenceIsInitializingDatabaseWithConnection:(EDPersistenceDatabaseConnection *)arg1;

@end
