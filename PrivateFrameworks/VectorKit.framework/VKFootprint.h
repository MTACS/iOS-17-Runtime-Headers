
@interface VKFootprint : NSObject {
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _boundingRect;
    double  _centerDepth;
    struct VKFootprintConvexHull_struct { 
        int edgeCount; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } edgeOrigin[6]; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } edgeNormal[6]; 
    }  _convexHull;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _cornerGroundPoints;
    int  _cornerGroundPointsCount;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _furthestGroundPoint;
    double  _maxDepth;
    double  _maxDistance;
    double  _minDepth;
    double  _minDistance;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _nearestGroundPoint;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Box<double' */ struct  boundingRect; /* unknown property attribute:  1>=[2d]}} */
@property (nonatomic, readonly) double centerDepth;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{VKFootprintConvexHull_struct=i[6{Matrix<double' */ struct  convexHull; /* unknown property attribute:  1>=[3d]}]} */
@property (nonatomic, readonly) void*cornerGroundPoints;
@property (nonatomic, readonly) int cornerGroundPointsCount;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  furthestGroundPoint; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic, readonly) double maxDepth;
@property (nonatomic, readonly) double minDepth;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  nearestGroundPoint; /* unknown property attribute:  1>=[3d]} */

- (id).cxx_construct;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })_expandedBoundingRect;
- (id /* block */)annotationCoordinateTest;
- (id /* block */)annotationRectTest;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })boundingRect;
- (double)centerDepth;
- (void)computeFromCamera:(id)arg1;
- (bool)containsGroundPoint:(const void*)arg1;
- (struct VKFootprintConvexHull_struct { int x1; struct Matrix<double, 3, 1> { double x_2_1_1[3]; } x2[6]; struct Matrix<double, 3, 1> { double x_3_1_1[3]; } x3[6]; })convexHull;
- (void*)cornerGroundPoints;
- (int)cornerGroundPointsCount;
- (struct Matrix<double, 3, 1> { double x1[3]; })furthestGroundPoint;
- (double)maxDepth;
- (double)minDepth;
- (struct Matrix<double, 3, 1> { double x1[3]; })nearestGroundPoint;
- (bool)rejectsRect:(const void*)arg1;

@end
