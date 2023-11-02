
@protocol CSLegibilityProviding <NSObject>

@required

- (_UILegibilitySettings *)currentLegibilitySettings;
- (<CSLegibilityProviderDelegate> *)legibilityProviderDelegate;
- (void)setLegibilityProviderDelegate:(id <CSLegibilityProviderDelegate>)arg1;

@end
