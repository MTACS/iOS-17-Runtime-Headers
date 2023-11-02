
@interface CHDView3D : NSObject {
    bool  mAutoscale;
    bool  mCluster;
    int  mDepthPercent;
    int  mGapDepthPercent;
    int  mHeightPercent;
    int  mPerspective;
    bool  mRightAngleAxes;
    int  mRotationX;
    int  mRotationY;
}

- (int)depthPercent;
- (id)description;
- (int)gapDepthPercent;
- (int)heightPercent;
- (id)init;
- (bool)isAutoscale;
- (bool)isCluster;
- (bool)isRightAngleAxes;
- (int)perspective;
- (int)rotationX;
- (int)rotationY;
- (void)setAutoscale:(bool)arg1;
- (void)setCluster:(bool)arg1;
- (void)setDepthPercent:(int)arg1;
- (void)setGapDepthPercent:(int)arg1;
- (void)setHeightPercent:(int)arg1;
- (void)setPerspective:(int)arg1;
- (void)setRightAngleAxes:(bool)arg1;
- (void)setRotationX:(int)arg1;
- (void)setRotationY:(int)arg1;

@end
