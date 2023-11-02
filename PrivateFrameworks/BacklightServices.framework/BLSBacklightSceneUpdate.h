
@interface BLSBacklightSceneUpdate : NSObject {
    BLSBacklightSceneUpdateContext * _context;
    <BLSBacklightSceneEnvironment_Private> * _environment;
    bool  _isUpdateToDateSpecifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_animationComplete;
    bool  _lock_didStartBacklightRamp;
    bool  _lock_sceneContentsUpdated;
    id /* block */  _performBacklightRampBlock;
    id /* block */  _sceneContentsAnimationCompleteBlock;
    id /* block */  _sceneContentsUpdatedBlock;
}

@property (getter=isAnimationComplete, nonatomic, readonly) bool animationComplete;
@property (nonatomic, readonly) BLSBacklightSceneUpdateContext *context;
@property (nonatomic, readonly) bool didStartBacklightRamp;
@property (nonatomic, readonly) <BLSBacklightSceneEnvironment_Private> *environment;
@property (nonatomic, readonly) bool isUpdateToDateSpecifier;
@property (getter=areSceneContentsUpdated, nonatomic, readonly) bool sceneContentsUpdated;

- (void).cxx_destruct;
- (bool)areSceneContentsUpdated;
- (id)context;
- (id)debugDescription;
- (id)description;
- (bool)didStartBacklightRamp;
- (id)environment;
- (unsigned long long)hash;
- (id)initForEnvironment:(id)arg1 visualState:(id)arg2 previousVisualState:(id)arg3 frameSpecifier:(id)arg4 animated:(bool)arg5 triggerEvent:(id)arg6 touchTargetable:(bool)arg7 isUpdateToDateSpecifier:(bool)arg8 sceneContentsUpdated:(id /* block */)arg9 performBacklightRamp:(id /* block */)arg10 sceneContentsAnimationComplete:(id /* block */)arg11;
- (bool)isAnimationComplete;
- (bool)isEqual:(id)arg1;
- (bool)isUpdateToDateSpecifier;
- (void)performBacklightRampWithDuration:(double)arg1;
- (void)sceneContentsAnimationDidComplete;
- (void)sceneContentsDidUpdate;
- (void)setReplacedSceneUpdate:(id)arg1;

@end
