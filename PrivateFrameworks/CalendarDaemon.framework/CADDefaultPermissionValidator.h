
@interface CADDefaultPermissionValidator : NSObject <CADPermissionValidator> {
    bool  _allowedEntityTypesValid;
    long long  _eventAuthorization;
    ClientIdentity * _identity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _remindersAuthorization;
    struct __SecTask { } * _task;
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
@property (nonatomic, readonly) ClientIdentity *identity;
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
- (void)_loadAccessPermissionsIfNeeded;
- (bool)_valueForBooleanEntitlement:(id)arg1 defaultValue:(bool)arg2;
- (id)_valueForEntitlement:(id)arg1 loadBlock:(id /* block */)arg2;
- (bool)_valueForStringEntitlement:(id)arg1 matchesString:(id)arg2;
- (bool)allowsCustomDatabasePath;
- (bool)canAccessDatabaseBookmarks;
- (bool)canMakeSpotlightChanges;
- (bool)canModifyBirthdayCalendar;
- (bool)canModifyCalendarDatabase;
- (bool)canModifySuggestedEventCalendar;
- (bool)canRequestDiagnostics;
- (void)dealloc;
- (int)eventAccessLevel;
- (long long)eventAuthorization;
- (bool)hasCalendarToolEntitlement;
- (bool)hasChangeIdTrackingOverrideEntitlement;
- (bool)hasManagedConfigurationBundleIDOverrideEntitlement;
- (bool)hasNotificationCountEntitlement;
- (bool)hasReminderAccess;
- (bool)hasSyncClientEntitlement;
- (id)identity;
- (id)initWithClientIdentity:(id)arg1;
- (bool)internalAccessLevelGranted;
- (bool)isCalendarDaemon;
- (bool)isFirstPartyCalendarApp;
- (bool)isRemoteUIExtension;
- (long long)remindersAuthorization;
- (bool)shouldTrustClientEnforcedManagedConfigurationAccess;
- (bool)storageManagementAccessGranted;
- (bool)testingAccessLevelGranted;

@end
