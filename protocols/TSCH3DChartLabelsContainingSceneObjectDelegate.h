
@protocol TSCH3DChartLabelsContainingSceneObjectDelegate <TSCH3DSceneObjectDelegate>

@required

- (void)labelsResourcesSessionWillBeginForSceneObject:(TSCH3DChartLabelsContainingSceneObject *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;
- (void)labelsResourcesSessionWillEndForSceneObject:(TSCH3DChartLabelsContainingSceneObject *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;
- (void)setOffset:(void*)arg1 labelType:(int)arg2 boundsIndex:(long long)arg3 forSceneObject:(TSCH3DChartLabelsContainingSceneObject *)arg4;
- (void)updateExternalLabelAttribute:(TSCH3DExternalLabelAttribute *)arg1 sceneObject:(TSCH3DChartLabelsContainingSceneObject *)arg2 labelRenderInfo:(TSCH3DChartLabelsContainingLabelRenderInfo *)arg3;
- (bool)willSubmitLabelForSceneObject:(TSCH3DChartLabelsContainingSceneObject *)arg1 labelRenderInfo:(TSCH3DChartLabelsContainingLabelRenderInfo *)arg2;
- (bool)willSubmitLabelType:(int)arg1 boundsIndex:(long long)arg2 alignment:(unsigned long long)arg3 elementIndex:(unsigned long long)arg4 forSceneObject:(TSCH3DChartLabelsContainingSceneObject *)arg5;

@end
