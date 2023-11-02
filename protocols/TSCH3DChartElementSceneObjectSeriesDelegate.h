
@protocol TSCH3DChartElementSceneObjectSeriesDelegate

@required

- (void)didGenerateShaderEffectsForSeriesAtIndex:(void*)arg1 effects:(TSCH3DShaderEffects *)arg2 sceneObject:(TSCH3DChartElementSceneObject *)arg3 pipeline:(TSCH3DSceneRenderPipeline *)arg4;
- (bool)willProcessSeries:(TSCH3DChartModelEnumerator *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2 pipeline:(TSCH3DSceneRenderPipeline *)arg3;

@end
