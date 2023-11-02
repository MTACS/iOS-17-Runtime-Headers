
@interface GEOComposedRouteSection : NSObject {
    struct { 
        struct { 
            double x; 
            double y; 
            double z; 
        } origin; 
        struct { 
            double width; 
            double height; 
            double depth; 
        } size; 
    }  _bounds;
    GEOComposedRouteSegment * _composedRouteSegment;
    unsigned long long  _composedRouteSegmentIndex;
    GEOComposedRouteStep * _composedRouteStep;
    unsigned long long  _finalStepIndex;
    double  _lengthScaleFactor;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _overlayBounds;
    unsigned int  _pointCount;
    struct GeoCodecsVectorTilePoint3D { float x1; float x2; float x3; } * _points;
    double  _startDistance;
    unsigned int  _startPointIndex;
    int  _transportType;
}

@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } bounds;
@property (nonatomic, readonly) GEOComposedRouteSegment *composedRouteSegment;
@property (nonatomic, readonly) unsigned long long composedRouteSegmentIndex;
@property (nonatomic, readonly) GEOComposedRouteStep *composedRouteStep;
@property (nonatomic, readonly) unsigned int endPointIndex;
@property (nonatomic, readonly) unsigned long long finalStepIndex;
@property (nonatomic) double lengthScaleFactor;
@property (nonatomic, readonly) unsigned int pointCount;
@property (nonatomic, readonly) struct GeoCodecsVectorTilePoint3D { float x1; float x2; float x3; }*points;
@property (nonatomic, readonly) double startDistance;
@property (nonatomic, readonly) unsigned int startPointIndex;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Box<double' */ struct  vkBounds; /* unknown property attribute:  1>=[2d]}} */

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void).cxx_destruct;
- (bool)_MapsCarPlay_isEqual:(id)arg1;
- (void)_initialStepInSteps:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })bounds;
- (id)composedRouteSegment;
- (unsigned long long)composedRouteSegmentIndex;
- (id)composedRouteStep;
- (void)dealloc;
- (id)description;
- (unsigned int)endPointIndex;
- (unsigned long long)finalStepIndex;
- (id)initWithCoordinates:(id)arg1 segment:(id)arg2 segmentIndex:(unsigned long long)arg3 steps:(id)arg4 startCoordinateIndex:(unsigned int)arg5 coordinateCount:(unsigned int)arg6 bounds:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })arg7 transportType:(int)arg8 finalStepIndex:(unsigned long long)arg9 startDistance:(double)arg10 lengthScaleFactor:(double)arg11;
- (id)initWithCoordinates:(id)arg1 segment:(id)arg2 segmentIndex:(unsigned long long)arg3 steps:(id)arg4 startCoordinateIndex:(unsigned int)arg5 coordinateCount:(unsigned int)arg6 transportType:(int)arg7 finalStepIndex:(unsigned long long)arg8 fallbackStartCoordinate:(struct { double x1; double x2; })arg9 fallbackEndCoordinate:(struct { double x1; double x2; })arg10 startDistance:(double)arg11 lengthScaleFactor:(double)arg12;
- (bool)isTransfer;
- (double)lengthScaleFactor;
- (unsigned int)pointCount;
- (struct GeoCodecsVectorTilePoint3D { float x1; float x2; float x3; }*)points;
- (void)setLengthScaleFactor:(double)arg1;
- (double)startDistance;
- (unsigned int)startPointIndex;
- (id)stringForCoordinates;
- (id)stringForPoints;
- (int)transportType;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2;
- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 excludedSegments:(const void*)arg3;
- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 shouldSnapToTransit:(bool)arg3 verifySnapping:(bool)arg4;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })vkBounds;

@end
