
@interface ATXGuardedActionBlacklist : NSObject {
    NSSet * _blacklistedAction;
    NSSet * _blacklistedActionForPrimaryShortcuts;
    NSSet * _blacklistedActionForShortcuts;
    NSSet * _blacklistedApp;
    NSSet * _blacklistedAppAction;
    NSSet * _blacklistedAppActionForPrimaryShortcuts;
    NSSet * _blacklistedAppActionForShortcuts;
    NSSet * _blacklistedAppForPrimaryShortcuts;
    NSSet * _blacklistedAppForShortcuts;
    NSSet * _prefsBlacklistedApp;
}

- (void).cxx_destruct;

@end
