
@interface VisionCoreSparseOpticalFlowResultPoint : NSObject {
    bool  _isInlier;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
    float  _reprojError;
}

@property (nonatomic, readonly) bool isInlier;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } point;
@property (nonatomic, readonly) float reprojError;

- (id)initWithX:(double)arg1 Y:(double)arg2 inlier:(bool)arg3 reprojError:(float)arg4;
- (bool)isInlier;
- (struct CGPoint { double x1; double x2; })point;
- (float)reprojError;

@end
