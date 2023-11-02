
@interface _SBKeyboardServiceSceneResolver : NSObject <_SBSceneResolving> {
    SBSystemUIScenesCoordinator * _systemUIScenesCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBSystemUIScenesCoordinator *systemUIScenesCoordinator;

- (void).cxx_destruct;
- (id)sceneForSceneIdentityToken:(id)arg1 inProcess:(int)arg2;
- (void)setSystemUIScenesCoordinator:(id)arg1;
- (id)systemUIScenesCoordinator;

@end
