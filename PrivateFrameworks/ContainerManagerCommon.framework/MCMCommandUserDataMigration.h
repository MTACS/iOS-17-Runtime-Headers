
@interface MCMCommandUserDataMigration : MCMCommand

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (bool)_bundleContainerExistsForDataContainer:(id)arg1 error:(id*)arg2;
- (int)_intendedDataProtectionClassBasedOnEntitlementsForIdentifier:(id)arg1;
- (void)_setDataProtectionIfNecessaryOnContainer:(id)arg1;
- (void)execute;
- (bool)preflightClientAllowed;

@end
