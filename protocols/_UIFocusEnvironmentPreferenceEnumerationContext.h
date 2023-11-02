
@protocol _UIFocusEnvironmentPreferenceEnumerationContext <NSObject>

@required

- (_UIDebugLogStack *)debugStack;
- (<UIFocusEnvironment> *)environment;
- (bool)isLeafPreference;
- (bool)isPreferredByItself;
- (bool)isPrimaryPreference;
- (NSArray *)preferredEnvironments;
- (<UIFocusEnvironment> *)preferringEnvironment;
- (bool)prefersNothingFocused;

@end
