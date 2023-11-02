
@interface SwiftUI.ClarityUIApplicationSceneSpecification : UIApplicationSceneSpecification

@property (nonatomic, readonly) Class clientSettingsClass;
@property (nonatomic, readonly) NSArray *initialActionHandlers;
@property (nonatomic, readonly) NSArray *initialSettingsDiffActions;
@property (nonatomic, readonly) Class settingsClass;
@property (nonatomic, readonly) Class uiSceneMinimumClass;
@property (nonatomic, readonly) NSString *uiSceneSessionRole;

- (Class)clientSettingsClass;
- (id)init;
- (id)initialActionHandlers;
- (id)initialSettingsDiffActions;
- (Class)settingsClass;
- (Class)uiSceneMinimumClass;
- (id)uiSceneSessionRole;

@end
