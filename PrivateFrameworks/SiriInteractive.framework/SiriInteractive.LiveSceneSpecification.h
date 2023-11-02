
@interface SiriInteractive.LiveSceneSpecification : UIApplicationSceneSpecification

@property (nonatomic, readonly) Class clientSettingsClass;
@property (nonatomic, readonly) Class settingsClass;
@property (nonatomic, readonly) Class uiSceneMinimumClass;
@property (nonatomic, readonly) NSString *uiSceneSessionRole;

- (Class)clientSettingsClass;
- (id)init;
- (Class)settingsClass;
- (Class)uiSceneMinimumClass;
- (id)uiSceneSessionRole;

@end
