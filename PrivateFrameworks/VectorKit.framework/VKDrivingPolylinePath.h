
@interface VKDrivingPolylinePath : VKPolylinePath {
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _distances;
    struct vector<md::GradientTraffic, std::allocator<md::GradientTraffic>> { 
        struct GradientTraffic {} *__begin_; 
        struct GradientTraffic {} *__end_; 
        struct __compressed_pair<md::GradientTraffic *, std::allocator<md::GradientTraffic>> { 
            struct GradientTraffic {} *__value_; 
        } __end_cap_; 
    }  _gradientTraffics;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _laneHalfWidths;
    struct GradientTraffic { 
        float blend; 
        unsigned char start; 
        unsigned char end; 
    }  _standardModeTraffic;
}

+ (void)updateDistances:(void*)arg1 forPath:(id)arg2 snap:(bool)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)assignPoints:(void*)arg1 count:(unsigned long long)arg2;
- (void)assignPoints:(void*)arg1 laneHalfWidths:(float*)arg2 gradientTraffics:(struct GradientTraffic { float x1; unsigned char x2; unsigned char x3; }*)arg3 polylineCoordinates:(struct PolylineCoordinate { unsigned int x1; float x2; }*)arg4 count:(unsigned long long)arg5;
- (void)assignTo:(id)arg1 withSegment:(const struct TrafficSegment { unsigned int x1; unsigned char x2; }*)arg2;
- (const struct GradientTraffic { float x1; unsigned char x2; unsigned char x3; }*)gradientTrafficAtIndex:(unsigned int)arg1;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4 matchedPathSegments:(id)arg5;
- (float)laneHalfWidthAtIndex:(unsigned int)arg1;
- (void)setTrafficSpeed:(unsigned char)arg1;
- (void)splitGradientTrafficSegmentationAndAddTo:(id)arg1 with:(void*)arg2 shouldSnap:(bool)arg3;
- (void)splitTrafficSegmentationAndAddTo:(id)arg1 with:(void*)arg2 shouldSnap:(bool)arg3 isGradientTraffic:(bool)arg4;

@end
