
@protocol CADPermissionValidator <NSObject>

@required

- (bool)allowsCustomDatabasePath;
- (bool)canAccessDatabaseBookmarks;
- (bool)canMakeSpotlightChanges;
- (bool)canModifyBirthdayCalendar;
- (bool)canModifyCalendarDatabase;
- (bool)canModifySuggestedEventCalendar;
- (bool)canRequestDiagnostics;
- (int)eventAccessLevel;
- (long long)eventAuthorization;
- (bool)hasCalendarToolEntitlement;
- (bool)hasChangeIdTrackingOverrideEntitlement;
- (bool)hasManagedConfigurationBundleIDOverrideEntitlement;
- (bool)hasNotificationCountEntitlement;
- (bool)hasReminderAccess;
- (bool)hasSyncClientEntitlement;
- (bool)internalAccessLevelGranted;
- (bool)isCalendarDaemon;
- (bool)isFirstPartyCalendarApp;
- (bool)isRemoteUIExtension;
- (long long)remindersAuthorization;
- (bool)shouldTrustClientEnforcedManagedConfigurationAccess;
- (bool)storageManagementAccessGranted;
- (bool)testingAccessLevelGranted;

@end
