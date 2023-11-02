
@interface SAAppsQuitApp : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, copy) NSString *sceneId;

+ (id)quitApp;
+ (id)quitAppWithDictionary:(id)arg1 context:(id)arg2;

- (id)appBundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)sceneId;
- (void)setAppBundleId:(id)arg1;
- (void)setSceneId:(id)arg1;

@end
