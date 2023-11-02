
@interface PKClusteringUtility : NSObject

+ (id)_clusteredStrokesWithInitialStrokes:(id)arg1 selectionType:(long long)arg2 visibleStrokes:(id)arg3 approximateLineHeight:(double)arg4 approximateLineCenter:(double)arg5;
+ (void)_fetchIntersectedStrokesForGeometricBasedStrokeClusteringBetweenPoint:(struct CGPoint { double x1; double x2; })arg1 otherPoint:(struct CGPoint { double x1; double x2; })arg2 visibleStrokes:(id)arg3 completion:(id /* block */)arg4;
+ (id)_geometricBasedStrokeClusteringFromPoint:(struct CGPoint { double x1; double x2; })arg1 visibleStrokes:(id)arg2 selectionType:(long long)arg3 inputType:(long long)arg4;
+ (double)arrayAverage:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })constrainRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (double)estimatedWordDistanceForStrokes:(id)arg1 lineHeight:(double)arg2;
+ (id)horizontalDistanceBetweenStrokes:(id)arg1 lineHeight:(double)arg2;
+ (id)kMeansCluster:(int)arg1 values:(id)arg2 clusterError:(double)arg3 maxIterations:(int)arg4;

@end
