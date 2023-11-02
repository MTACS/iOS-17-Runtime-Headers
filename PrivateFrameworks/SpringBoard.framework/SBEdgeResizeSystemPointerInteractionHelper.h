
@interface SBEdgeResizeSystemPointerInteractionHelper : NSObject

+ (id)fancyResizePointerShapeHoveringOverEdge:(unsigned long long)arg1 innerLengthOfInteractionRegion:(double)arg2 outerLengthOfInteractionRegion:(double)arg3 cornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg4;
+ (unsigned long long)latchingAxesForHoveredEdge:(unsigned long long)arg1;
+ (bool)shouldBeginPointerInteractionAtLocation:(struct CGPoint { double x1; double x2; })arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 innerLengthOfInteractionRegion:(double)arg3 outerLengthOfInteractionRegion:(double)arg4 cornerLengthOfInteractionRegion:(double)arg5 occupiedCorners:(unsigned long long)arg6 hoveringOverEdge:(out unsigned long long*)arg7 pointerRegion:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg8;

@end
