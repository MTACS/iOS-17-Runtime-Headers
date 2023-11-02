
@protocol SBFLegibilitySettingsProvider <NSObject>

@required

- (<SBFLegibilitySettingsProviderDelegate> *)delegate;
- (_UILegibilitySettings *)legibilitySettings;
- (void)setDelegate:(id <SBFLegibilitySettingsProviderDelegate>)arg1;

@end
