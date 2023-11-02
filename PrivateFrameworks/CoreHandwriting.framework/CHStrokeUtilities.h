
@interface CHStrokeUtilities : NSObject

+ (double)arcLengthForStroke:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxOfPoints:(const void*)arg1 rotatedAroundPoint:(struct CGPoint { double x1; double x2; })arg2 byAngle:(double)arg3;
+ (double)circumferenceRatioOfCircleFittedToPoints:(const void*)arg1 circleCenter:(struct CGPoint { double x1; double x2; }*)arg2 circleRadius:(double*)arg3;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; } x3; })convexHullForPoints:(void*)arg1;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; } x3; })convexHullForStroke:(id)arg1;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; } x3; })convexHullForStrokes:(id)arg1 inDrawing:(id)arg2;
+ (id)createDrawingForStrokes:(id)arg1 cancellationBlock:(id /* block */)arg2;
+ (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 toRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 toSegmentFromPoint:(struct CGPoint { double x1; double x2; })arg2 toPoint:(struct CGPoint { double x1; double x2; })arg3;
+ (double)durationOfStrokesInStrokeGroup:(id)arg1 strokeProvider:(id)arg2;
+ (id)encodedStrokeIdentifiers:(id)arg1 withStrokeProvider:(id)arg2;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; } x3; })enlargedConvexHull:(const void*)arg1 withMargin:(double)arg2;
+ (void)enumeratePointsForStroke:(id)arg1 interpolationType:(long long)arg2 resolution:(long long)arg3 usingBlock:(id /* block */)arg4;
+ (void)getAddedStrokes:(id*)arg1 removedStrokeIdentifiers:(id*)arg2 inStrokeProvider:(id)arg3 lastGroupingResult:(id)arg4 shouldCancel:(id /* block */)arg5;
+ (double)horizonatalOverlapOfIndividualStrokeBounds:(const void*)arg1 otherStrokeBounds:(const void*)arg2;
+ (struct vector<CGRect, std::allocator<CGRect>> { struct CGRect {} *x1; struct CGRect {} *x2; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect {} *x_3_1_1; } x3; })horizontallyOverlappedChunks:(const void*)arg1;
+ (bool)isPointEnumerationSupportedForStroke:(id)arg1;
+ (bool)isStrokeClassificationText:(long long)arg1;
+ (double)lineOrientationForStrokePoints:(const void*)arg1 error:(double*)arg2;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; } x3; })regularizedPathFromPoints:(const void*)arg1 delta:(double)arg2 gamma:(double)arg3 outError:(double*)arg4;
+ (double)speedForFinalTimeRange:(double)arg1 stroke:(id)arg2;
+ (id)strokeForIdentifier:(id)arg1 inStrokeProvider:(id)arg2;
+ (id)strokeIdentifiersForData:(id)arg1 withStrokeProvider:(id)arg2;
+ (double)threePointsOrientationWithOrigin:(struct CGPoint { double x1; double x2; })arg1 pointA:(struct CGPoint { double x1; double x2; })arg2 pointB:(struct CGPoint { double x1; double x2; })arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unionStrokeBounds:(const void*)arg1 aroundXPosition:(double)arg2 usingOneSideStrokeCountLimit:(long long)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unionStrokeBounds:(const void*)arg1 usingStrokeCountLimit:(long long)arg2 reverseOrder:(bool)arg3;
+ (double)vectorMeanWithoutOutliers:(void*)arg1;

@end
