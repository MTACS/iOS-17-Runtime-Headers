
@interface AXUIDaemonApplication : UIApplication

+ (bool)_isSystemUIService;
+ (bool)_isUIKitSystemProcess;
+ (bool)_suppressesTextEffectsWindow;
+ (id)_systemUIServiceClientSettings;
+ (id)_systemUIServiceIdentifier;
+ (bool)isChamoisSupportEnabled;
+ (double)preferredWindowLevel;
+ (bool)usesScenes;

- (long long)_frontMostAppOrientation;
- (bool)_shouldAllowKeyboardArbiter;

@end
