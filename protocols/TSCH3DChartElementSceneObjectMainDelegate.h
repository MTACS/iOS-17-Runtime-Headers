
@protocol TSCH3DChartElementSceneObjectMainDelegate

@required

- (void)didEndProcessingSceneObject:(TSCH3DChartElementSceneObject *)arg1;
- (bool)renderPassDelayDisallowedForSceneObject:(TSCH3DChartElementSceneObject *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;
- (struct ElementRenderPass { int x1; })renderPassForSceneObject:(TSCH3DChartElementSceneObject *)arg1;
- (bool)willBeginProcessingSceneObject:(TSCH3DChartElementSceneObject *)arg1;

@end
