
@interface AKDoodleAnnotationRenderer : AKAnnotationRenderer

+ (struct CGSize { double x1; double x2; })_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_concreteDrawingBoundsOfAnnotation:(id)arg1;
+ (bool)_concretePointIsOnBorder:(struct CGPoint { double x1; double x2; })arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (bool)_concretePointIsOnInside:(struct CGPoint { double x1; double x2; })arg1 ofAnnotation:(id)arg2;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext { }*)arg2 forDisplay:(bool)arg3 pageControllerOrNil:(id)arg4;

@end