
@interface WBSSavedPasswordStore : WBSSavedAccountStore

@property (nonatomic, readonly) NSSet *highLevelDomainsOfAllSavedPasswordsExcludingNeverSaveMarkerPasswords;

- (id)highLevelDomainsOfAllSavedPasswordsExcludingNeverSaveMarkerPasswords;

@end
