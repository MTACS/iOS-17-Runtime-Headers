
@interface MCUIBlockedAppViewController : PSListController {
    bool  _reenabled;
}

@property bool reenabled;

- (void)_askForReenableConfirmation;
- (void)_blockedAppsUpdated;
- (id)_reenableButtonSpecifier;
- (void)dealloc;
- (id)init;
- (bool)overridden;
- (bool)reenabled;
- (void)setOverride:(id)arg1;
- (void)setReenabled:(bool)arg1;
- (id)specifiers;

@end
