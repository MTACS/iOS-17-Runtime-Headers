
@protocol PBUILegibilitySettingsProvider <NSObject>

@required

- (<PBUILegibilitySettingsProviderDelegate> *)delegate;
- (_UILegibilitySettings *)legibilitySettings;
- (void)setDelegate:(id <PBUILegibilitySettingsProviderDelegate>)arg1;

@end
