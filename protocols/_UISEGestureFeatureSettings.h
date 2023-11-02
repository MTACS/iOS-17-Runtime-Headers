
@protocol _UISEGestureFeatureSettings

@required

- (double)backProjectTime;
- (double)bottomEdgeAngleWindow;
- (double)bottomEdgeRegionSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)cornerAngleWindow;
- (double)edgeAngleWindow;
- (double)edgeAngleWindowDecayTime;
- (double)edgeRegionSize;
- (double)hysteresis;
- (unsigned long long)interfaceBottomEdge;
- (double)maximumBackProjectTimeFactor;
- (double)maximumSwipeDuration;
- (unsigned long long)minimumNumberOfSubfeatures;
- (unsigned long long)targetEdges;

@end
