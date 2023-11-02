
@interface SCNOffscreenRenderer : SCNRenderer {
    <_SCNSceneRendererDelegate><_SCNSceneRendererDelegateSPI> * _sceneRendererDelegate;
    struct { 
        unsigned int supportsUpdate : 1; 
        unsigned int supportsDidApplyAnimations : 1; 
        unsigned int supportsDidSimulatePhysics : 1; 
        unsigned int supportsDidApplyConstraints : 1; 
        unsigned int supportsWillRender : 1; 
        unsigned int supportsDidRender : 1; 
        unsigned int supportsInputTime : 1; 
        unsigned int supportsReadSubdivCache : 1; 
        unsigned int supportsWriteSubdivCache : 1; 
    }  _sceneRendererDelegateDelegationConformance;
}

@property (nonatomic) unsigned long long antialiasingMode;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) unsigned int textureID;

+ (id)offscreenRendererWithContext:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)offscreenRendererWithDevice:(id)arg1 sceneRendererDelegate:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
+ (id)offscreenRendererWithDevice:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (void)_renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)_renderer:(id)arg1 didApplyConstraintsAtTime:(double)arg2;
- (void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(id /* block */)arg3;
- (void)_renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)_renderer:(id)arg1 didSimulatePhysicsAtTime:(double)arg2;
- (id)_renderer:(id)arg1 subdivDataForHash:(id)arg2;
- (void)_renderer:(id)arg1 updateAtTime:(double)arg2;
- (void)_renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3;
- (unsigned long long)antialiasingMode;
- (void)setAntialiasingMode:(unsigned long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)snapshot;
- (unsigned int)textureID;

@end
