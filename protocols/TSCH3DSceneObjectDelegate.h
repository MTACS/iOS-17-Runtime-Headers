
@protocol TSCH3DSceneObjectDelegate

@required

- (void)didGenerateShaderEffects:(TSCH3DShaderEffects *)arg1 sceneObject:(TSCH3DSceneObject *)arg2 pipeline:(TSCH3DSceneRenderPipeline *)arg3;
- (void)didSubmitSceneObject:(TSCH3DSceneObject *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;
- (bool)willSubmitSceneObject:(TSCH3DSceneObject *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;

@end
