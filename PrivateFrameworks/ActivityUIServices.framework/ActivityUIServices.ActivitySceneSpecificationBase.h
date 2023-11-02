
@interface ActivityUIServices.ActivitySceneSpecificationBase : UIApplicationSceneSpecification

@property (nonatomic, readonly) Class clientSettingsClass;
@property (nonatomic, readonly) Class settingsClass;
@property (nonatomic, readonly) Class uiSceneMinimumClass;

- (Class)clientSettingsClass;
- (id)init;
- (Class)settingsClass;
- (Class)uiSceneMinimumClass;

@end
