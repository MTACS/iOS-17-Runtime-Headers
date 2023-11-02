
@protocol DMCProfileUIDataProvider

@required

- (NSString *)installedMDMProfileIdentifier;
- (MCProfile *)installedProfileWithIdentifier:(NSString *)arg1;
- (bool)isPasscodeSet;
- (bool)isProvisionallyEnrolled;
- (NSDictionary *)managedAppsUninstalledOnMDMRemoval;
- (DMCProfilePayloadsSummary *)payloadsSummaryForProfile:(MCProfile *)arg1 showManagedPayloads:(bool)arg2;
- (ACAccount *)rmAccount;
- (RMConfigurationsSpecifierProvider *)rmSpecifierProviderForProfileIdentifier:(NSString *)arg1;
- (void)unenrollWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateProfileWithIdentifier:(NSString *)arg1 interactionDelegate:(id <MCInteractionDelegate>)arg2;

@end
