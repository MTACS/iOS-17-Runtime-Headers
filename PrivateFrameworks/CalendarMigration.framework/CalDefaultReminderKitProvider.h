
@interface CalDefaultReminderKitProvider : NSObject <CalReminderKitProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)newDatabaseMigrationContext;
- (id)newSaveRequestWithStore:(id)arg1;
- (void)setDefaultReminderListIdentifier:(id)arg1;

@end
