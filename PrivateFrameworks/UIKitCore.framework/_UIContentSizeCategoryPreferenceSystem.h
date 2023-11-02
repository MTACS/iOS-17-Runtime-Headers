
@interface _UIContentSizeCategoryPreferenceSystem : UIContentSizeCategoryPreference {
    bool  _applicationOverridesPreferredContentSizeCategory;
    bool  _didCheckForPreferredContentSizeCategoryOverride;
    bool  _observingNotification;
    UIContentSizeCategoryPreference * _overridePreferences;
}

@property (nonatomic, retain) UIContentSizeCategoryPreference *overridePreferences;

- (void).cxx_destruct;
- (void)_beginObservingPreferredContentSizeChangedNotification;
- (void)_endObservingPreferredContentSizeChangedNotification;
- (void)_postContentSizeCategoryDidChangeNotification;
- (void)_readAndObservePreferences;
- (void)_updateContentSizeCategoriesFromUserDefaultsPostingNotification:(bool)arg1;
- (void)_updateContentSizeCategory:(id)arg1 carPlay:(id)arg2 postingNotification:(bool)arg3;
- (void)checkForChanges;
- (void)dealloc;
- (id)description;
- (id)initAsSystem;
- (id)overridePreferences;
- (void)setOverridePreferences:(id)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;

@end
