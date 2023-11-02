
@protocol PXPlacesMapUpdatePlan <PXPlacesMapPipelineComponent>

@required

- (<MKAnnotation> *)annotationForLayoutItem:(id <PXPlacesMapLayoutItem>)arg1;
- (<PXPlacesMapUpdatePlanResult> *)removalPlanResult;
- (void)reset;
- (<PXPlacesMapUpdatePlanResult> *)resultForNewLayoutResult:(id <PXPlacesMapLayoutResult>)arg1;

@end
