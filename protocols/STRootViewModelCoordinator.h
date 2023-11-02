
@protocol STRootViewModelCoordinator <NSObject>

@required

- (void)applyIntroductionViewModel:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: STIntroductionViewModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSObject<STCommunicationSafetyViewModelCoordinator> *)communicationSafetyCoordinator;
- (NSObject<STContentPrivacyViewModelCoordinator> *)contentPrivacyCoordinator;
- (id)coordinatorForChild:(STUIUser *)arg1 deviceIdentifier:(NSString *)arg2 usageReportType:(NSNumber *)arg3;
- (void)enableManagementWithPIN:(void *)arg1 recoveryAltDSID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSObject<STEyeReliefViewModelCoordinator> *)eyeReliefCoordinator;
- (bool)hasAlreadyEnteredPINForSession;
- (bool)hasShownMiniBuddy;
- (bool)isPasscodeEnabled;
- (void)setHasAlreadyEnteredPINForSession:(bool)arg1;
- (void)setHasShownMiniBuddy:(bool)arg1;
- (void)setManagementEnabled:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setPIN:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setPIN:(void *)arg1 recoveryAltDSID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setScreenTimeEnabled:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setScreenTimeSyncingEnabled:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setShareWebUsageEnabled:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSObject<STTimeAllowancesViewModelCoordinator> *)timeAllowancesCoordinator;
- (NSObject<STUsageDetailsViewModelCoordinator> *)usageDetailsCoordinator;
- (bool)validatePIN:(NSString *)arg1;
- (STRootViewModel *)viewModel;

@end
