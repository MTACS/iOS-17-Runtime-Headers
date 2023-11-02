
@interface PSScene : NSObject {
    FBScene * _scene;
}

@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly) NSString *sceneIdentifier;
@property (nonatomic, readonly) PSSceneSettings *sceneSettings;

- (void).cxx_destruct;
- (id)initWithScene:(id)arg1;
- (id)scene;
- (id)sceneIdentifier;
- (id)sceneSettings;
- (void)updateSceneSettings:(id)arg1 with:(id)arg2;

@end
