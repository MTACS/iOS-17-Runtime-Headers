
@interface _EXFBSSceneSession : _EXSceneSession {
    FBSScene * _fbsScene;
}

@property (retain) FBSScene *fbsScene;

- (void).cxx_destruct;
- (void)connectWithFBSScene:(id)arg1;
- (id)fbsScene;
- (id)makeSceneWithError:(id*)arg1;
- (void)setFbsScene:(id)arg1;

@end
