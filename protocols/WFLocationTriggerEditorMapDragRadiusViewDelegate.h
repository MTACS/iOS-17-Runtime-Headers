
@protocol WFLocationTriggerEditorMapDragRadiusViewDelegate

@required

- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRadiusView:(WFLocationTriggerEditorMapDragRadiusView *)arg1 boundingMapRectForOverlay:(id <MKOverlay>)arg2;
- (<MKOverlay> *)mapRadiusView:(WFLocationTriggerEditorMapDragRadiusView *)arg1 overlayForRadius:(double)arg2;
- (void)mapRadiusView:(WFLocationTriggerEditorMapDragRadiusView *)arg1 radiusDidChange:(double)arg2;

@end
