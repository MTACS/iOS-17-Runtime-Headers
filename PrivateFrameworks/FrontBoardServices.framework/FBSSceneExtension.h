
@interface FBSSceneExtension : NSObject

+ (id)alloc;
+ (id)clientComponents;
+ (id)clientSettingsExtensions;
+ (id)hostComponents;
+ (void)initialize;
+ (id)settingsExtensions;
+ (bool)softLinkExtensionFrameworkInClient;
+ (id)transitionContextExtensions;

@end
