
@protocol CSAppearanceProviding <NSObject>

@required

- (NSString *)appearanceIdentifier;
- (NSSet *)components;
- (void)conformsToCSAppearanceProviding;
- (_UILegibilitySettings *)legibilitySettings;

@end
