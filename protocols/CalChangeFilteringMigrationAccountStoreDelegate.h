
@protocol CalChangeFilteringMigrationAccountStoreDelegate

@required

- (bool)allowChangesToExistingTopLevelAccount:(id <CalMigrationAccount>)arg1;
- (bool)allowCreationOfTopLevelAccountWithTypeIdentifier:(NSString *)arg1;

@end
