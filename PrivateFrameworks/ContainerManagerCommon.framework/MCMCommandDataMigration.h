
@interface MCMCommandDataMigration : MCMCommand

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (bool)_performBundleContainerOwnershipMigrationWithError:(id*)arg1;
- (bool)_performInternalACLMigrationWithError:(id*)arg1;
- (void)execute;
- (bool)preflightClientAllowed;

@end
