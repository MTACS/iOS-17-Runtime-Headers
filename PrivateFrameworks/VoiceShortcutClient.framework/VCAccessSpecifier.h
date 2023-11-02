
@interface VCAccessSpecifier : NSObject <NSCopying> {
    NSString * _associatedAppBundleIdentifier;
    BSAuditToken * _auditToken;
    NSString * _bundleIdentifier;
    long long  _entitlements;
    long long  _sandboxCapabilities;
    struct __SecTask { } * _task;
}

@property (nonatomic, readonly, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, readonly) BSAuditToken *auditToken;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) long long entitlements;
@property (nonatomic, readonly) long long sandboxCapabilities;
@property (nonatomic, readonly) struct __SecTask { }*task;

+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)accessSpecifierForAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)accessSpecifierForCurrentConnection;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierForTask:(struct __SecTask { }*)arg1 auditToken:(id)arg2 sandboxCapabilities:(long long)arg3;
+ (id)accessSpecifierForXPCConnection:(id)arg1;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (bool)allowBackgroundShortcutRunning;
- (bool)allowBackgroundShortcutRunningWithAssociatedBundleIdentifier:(id)arg1;
- (bool)allowConnection;
- (bool)allowDropletCreation;
- (bool)allowHomeResidentShortcutRunning;
- (bool)allowIntentsExtensionDiscovery;
- (bool)allowReadAccessForContextualActions;
- (bool)allowReadAccessForDonations;
- (bool)allowReadAccessForSleepWorkflows;
- (bool)allowReadAccessForTriggers;
- (bool)allowReadAccessToPodcastsDatabase;
- (bool)allowReadAccessToShortcutsLibrary;
- (bool)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)arg1;
- (bool)allowReadAccessToSuggestionsWithBundleIdentifier:(id)arg1;
- (bool)allowReadingOnScreenContent;
- (bool)allowResettingAutomationConfirmationLevel;
- (bool)allowRootlessShortcutStorageAccess;
- (bool)allowRunningTestHarnessTests;
- (bool)allowShortcutImport;
- (bool)allowUnrestrictedAccess;
- (bool)allowWriteAccessForSleepWorkflows;
- (bool)allowWriteAccessForTriggers;
- (bool)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)arg1;
- (bool)allowWriteAccessToVoiceShortcuts;
- (id)associatedAppBundleIdentifier;
- (id)associatedAppBundleIdentifierFromBundleRecord;
- (id)auditToken;
- (id)bundleIdentifier;
- (id)bundleIdentifierFromTask;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (long long)entitlements;
- (bool)hasEntitlements:(long long)arg1;
- (bool)hasSandboxCapabilities:(long long)arg1;
- (id)init;
- (id)initWithSecTask:(struct __SecTask { }*)arg1 auditToken:(id)arg2 bundleIdentifier:(id)arg3 associatedAppBundleIdentifier:(id)arg4 entitlements:(long long)arg5 sandboxCapabilities:(long long)arg6;
- (bool)isBackgroundShortcutRunner;
- (bool)isRemovalService;
- (bool)isSettingsApp;
- (bool)isSpringBoard;
- (long long)sandboxCapabilities;
- (struct __SecTask { }*)task;

@end
