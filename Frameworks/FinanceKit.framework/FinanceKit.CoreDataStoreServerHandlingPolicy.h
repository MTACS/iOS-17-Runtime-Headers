
@interface FinanceKit.CoreDataStoreServerHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy

- (id)allowableClassesForClientWithContext:(id)arg1;
- (id)init;
- (bool)shouldAcceptConnectionsFromClientWithContext:(id)arg1;

@end
