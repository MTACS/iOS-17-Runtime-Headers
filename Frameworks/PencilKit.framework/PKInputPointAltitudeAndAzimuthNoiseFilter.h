
@interface PKInputPointAltitudeAndAzimuthNoiseFilter : PKInputPointBaseFilter {
    double  _altitudeJitterNoise;
    double  _altitudeOffsetNoise;
    double  _azimuthJitterNoise;
    double  _azimuthOffsetNoise;
    bool  _noiseIsHeightBased;
    double  currentAltitudeOffsetValue;
    double  currentAzimuthOffsetValue;
    struct linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> { 
        unsigned int __x_; 
    }  generator;
}

- (id).cxx_construct;
- (void)_recalculateOffsets;
- (void)addInputPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1;
- (void)resetFilter;

@end
