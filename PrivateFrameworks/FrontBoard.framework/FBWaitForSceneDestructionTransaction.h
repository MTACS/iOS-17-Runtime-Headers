
@interface FBWaitForSceneDestructionTransaction : FBTransaction <FBSceneObserver> {
    FBScene * _sceneToWaitForDeath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_begin;
- (bool)_canBeInterrupted;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)dealloc;
- (id)initWithScene:(id)arg1;
- (id)scene;
- (void)sceneDidInvalidate:(id)arg1;

@end
