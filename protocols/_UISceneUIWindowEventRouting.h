
@protocol _UISceneUIWindowEventRouting <_UISceneUIWindowHosting>

@required

+ (bool)_supportsEventUIWindowRouting;

- (bool)_allowsEventUIWindowRouting;
- (UIScene<_UISceneUIWindowEventRouting> *)_sceneForKeyboardDisplay;

@end
