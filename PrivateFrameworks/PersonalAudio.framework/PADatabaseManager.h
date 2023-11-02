
@interface PADatabaseManager : HCDatabaseManager

+ (id)sharedManager;

- (id)cloudKitContainer;
- (id)containerIdentifier;
- (void)contentDidUpdate:(id)arg1;
- (id)currentConfiguration;
- (void)logMessage:(id)arg1;
- (id)managedObjectModelName;
- (bool)saveConfiguration:(id)arg1;

@end
