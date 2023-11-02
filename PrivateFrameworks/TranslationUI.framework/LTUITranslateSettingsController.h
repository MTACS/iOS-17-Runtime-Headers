
@interface LTUITranslateSettingsController : PSListController {
    PSSpecifier * onDeviceOnlyGroup;
}

- (void).cxx_destruct;
- (id)appGroupUserDefaultForSpecifier:(id)arg1;
- (bool)isOnDeviceOnlyTranslationForced;
- (id)onDeviceOnlyFooterString;
- (void)openAppToLanguages:(id)arg1;
- (void)setAppGroupUserDefaultsEnabled:(id)arg1 specifier:(id)arg2;
- (void)showTranslatePrivacy;
- (id)specifiers;

@end
