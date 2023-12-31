
@protocol SXComponentController <SXAXAssistiveTechStatusChangeListener, SXLayoutIntegrator>

@required

- (void)addObserver:(id <SXComponentControllerObserver>)arg1;
- (SXComponentView *)componentViewForIdentifier:(NSString *)arg1;
- (SXComponentView *)componentViewForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (NSArray *)componentViewsForRole:(int)arg1;
- (NSSet *)componentsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (NSArray *)flattenedComponentViews;
- (bool)isPresented;
- (SXLayoutBlueprint *)presentedBlueprint;
- (void)removeObserver:(id <SXComponentControllerObserver>)arg1;

@end
