
@interface SBApplicationSceneHandleRequest : NSObject {
    SBApplication * _application;
    FBSDisplayIdentity * _displayIdentity;
    FBScene * _existingScene;
    FBSSceneDefinition * _sceneDefinition;
}

@property (nonatomic, retain) SBApplication *application;
@property (nonatomic, retain) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, retain) FBScene *existingScene;
@property (nonatomic, copy) FBSSceneDefinition *sceneDefinition;

+ (id)defaultRequestForApplication:(id)arg1 sceneIdentity:(id)arg2 displayIdentity:(id)arg3;
+ (id)defaultSceneSpecificationForDisplayIdentity:(id)arg1;

- (void).cxx_destruct;
- (id)application;
- (id)displayIdentity;
- (id)existingScene;
- (id)initWithApplication:(id)arg1 sceneDefinition:(id)arg2 displayIdentity:(id)arg3;
- (id)sceneDefinition;
- (void)setApplication:(id)arg1;
- (void)setDisplayIdentity:(id)arg1;
- (void)setExistingScene:(id)arg1;
- (void)setSceneDefinition:(id)arg1;

@end
