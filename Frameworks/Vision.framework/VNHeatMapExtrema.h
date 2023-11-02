
@interface VNHeatMapExtrema : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _extrema;
    float  _extremeValues;
}

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeRectFromExtremaUsingThreshold:(float)arg1 vImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2;
- (id)init;
- (void)updateExtrema:(float)arg1 x:(int)arg2 y:(int)arg3;

@end
