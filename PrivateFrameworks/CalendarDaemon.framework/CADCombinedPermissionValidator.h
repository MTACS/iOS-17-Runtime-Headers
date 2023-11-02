
@interface CADCombinedPermissionValidator : NSObject <CADPermissionValidator> {
    <CADPermissionValidator> * _validator1;
    <CADPermissionValidator> * _validator2;
}

@property (readonly) bool allowsCustomDatabasePath;
@property (readonly) bool canAccessDatabaseBookmarks;
@property (readonly) bool canMakeSpotlightChanges;
@property (readonly) bool canModifyBirthdayCalendar;
@property (readonly) bool canModifyCalendarDatabase;
@property (readonly) bool canModifySuggestedEventCalendar;
@property (readonly) bool canRequestDiagnostics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) int eventAccessLevel;
@property (readonly) long long eventAuthorization;
@property (readonly) bool hasCalendarToolEntitlement;
@property (readonly) bool hasChangeIdTrackingOverrideEntitlement;
@property (readonly) bool hasManagedConfigurationBundleIDOverrideEntitlement;
@property (readonly) bool hasNotificationCountEntitlement;
@property (readonly) bool hasReminderAccess;
@property (readonly) bool hasSyncClientEntitlement;
@property (readonly) unsigned long long hash;
@property (readonly) bool internalAccessLevelGranted;
@property (readonly) bool isCalendarDaemon;
@property (readonly) bool isFirstPartyCalendarApp;
@property (readonly) bool isRemoteUIExtension;
@property (readonly) long long remindersAuthorization;
@property (readonly) bool shouldTrustClientEnforcedManagedConfigurationAccess;
@property (readonly) bool storageManagementAccessGranted;
@property (readonly) Class superclass;
@property (readonly) bool testingAccessLevelGranted;

- (void).cxx_destruct;
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
- (id)initWithPermissionValidator:(id)arg1 andValidator:(id)arg2;
- (bool)internalAccessLevelGranted;
- (bool)isCalendarDaemon;
- (bool)isFirstPartyCalendarApp;
- (bool)isRemoteUIExtension;
- (long long)remindersAuthorization;
- (bool)shouldTrustClientEnforcedManagedConfigurationAccess;
- (bool)storageManagementAccessGranted;
- (bool)testingAccessLevelGranted;

@end
