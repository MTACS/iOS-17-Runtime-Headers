
@interface AKSpeechBubblePointOfInterestHelper : AKThoughtBubblePointOfInterestHelper

+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3;
+ (void)_concretePointsOfInterest:(id*)arg1 withVisualStyle:(id*)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;
+ (struct CGPoint { double x1; double x2; })_concreteValidatePoint:(struct CGPoint { double x1; double x2; })arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4;
+ (struct CGPoint { double x1; double x2; })_endPointOfBoundingLineSegmentFromPointyPointThroughtPoint:(struct CGPoint { double x1; double x2; })arg1 forAnnotation:(id)arg2;
+ (double)maxOutset;
+ (double)minOutset;

@end