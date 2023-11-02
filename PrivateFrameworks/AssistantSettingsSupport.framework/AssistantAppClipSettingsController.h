
@interface AssistantAppClipSettingsController : PSListController {
    NSMutableSet * _disabledSpotlightApps;
    NSMutableSet * _disabledSpotlightBundles;
}

+ (id)bundle;

- (void).cxx_destruct;
- (id)learnFromAppClipsEnabled:(id)arg1;
- (void)setLearnFromAppClipsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setShowInSearchEnabled:(id)arg1 specifier:(id)arg2;
- (void)setSuggestAppClipsEnabled:(id)arg1 specifier:(id)arg2;
- (id)showInSearchEnabled:(id)arg1;
- (id)specifiers;
- (id)suggestAppClipsEnabled:(id)arg1;
- (void)viewDidLoad;

@end
