
@interface PKPathUtility : NSObject

+ (double)averageDistanceForEdge:(struct Edge { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })arg1 withPoints:(const void*)arg2;
+ (id)bezierPathFromPoints:(const void*)arg1;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; } x3; })centripetalCatmullRomPointsFromConvexHull:(const void*)arg1 alpha:(double)arg2 granularity:(double)arg3;
+ (void)convexHull:(void*)arg1 forPoints:(const void*)arg2;
+ (bool)edge:(struct Edge { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })arg1 intersectsEdge:(struct Edge { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (bool)edgeSet:(const void*)arg1 containsEdge:(struct Edge { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct Edge { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })longestEdgeInHull:(const void*)arg1 atIndex:(int*)arg2 visitedEdges:(const void*)arg3;
+ (bool)newEdgeWithPoint:(struct CGPoint { double x1; double x2; })arg1 betweenEdge:(struct Edge { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })arg2 intersectsOtherEdgesInHull:(const void*)arg3;
+ (void)openConvexHullToConcave:(void*)arg1 points:(const void*)arg2 minAngleFactor:(double)arg3 maxLengthThreshold:(double)arg4 edgeRemovalConstant:(double)arg5;
+ (struct CGPoint { double x1; double x2; })pointWithMinAngleForEdge:(struct Edge { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromPoints:(const void*)arg2 minAngle:(double*)arg3;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; } x3; })smoothedHullForPoints:(const void*)arg1 alpha:(double)arg2 granularity:(double)arg3 minAngleFactor:(double)arg4 maxLengthThreshold:(double)arg5 edgeRemovalConstant:(double)arg6;
+ (void)smoothedHullForPoints:(const void*)arg1 completion:(id /* block */)arg2;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; } x3; })unorderedSimplifiedPointsFromPoints:(const void*)arg1 factor:(double)arg2;
+ (bool)vector:(const void*)arg1 containsPoint:(struct CGPoint { double x1; double x2; })arg2;

@end
