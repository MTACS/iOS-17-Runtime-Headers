
@interface CAMFullscreenViewfinderLayout : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __safeAreaInsets;
    double  _frontCameraInset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceBounds;
    double  _screenScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _shutterIntrinsicSize;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _safeAreaInsets;
@property (nonatomic) double frontCameraInset;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceBounds;
@property (nonatomic) double screenScale;
@property (nonatomic) struct CGSize { double x1; double x2; } shutterIntrinsicSize;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsets;
- (void)_updateSafeAreaInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRectForShutterControl;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForBottomControl:(id)arg1 betweenShutterAndLeftControl:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForBottomControl:(id)arg1 betweenShutterAndRightControl:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForBottomLeftControl:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForBottomRightControl:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForControlStatusBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForShutterControl:(id)arg1;
- (double)frontCameraInset;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGAffineTransform { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; double x_3_1_5; double x_3_1_6; } x3; })geometryForElapsedTimeView:(id)arg1 viewportFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 orientation:(long long)arg3;
- (id)initWithReferenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 shutterIntrinsicSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceBounds;
- (double)screenScale;
- (void)setFrontCameraInset:(double)arg1;
- (void)setReferenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScreenScale:(double)arg1;
- (void)setShutterIntrinsicSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })shutterIntrinsicSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewportFrameForAspectRatio:(long long)arg1 accessoryAreaExpanded:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewportFrameForAspectRatio:(long long)arg1 usingAppDrawer:(bool)arg2 accessoryAreaExpanded:(bool)arg3;
- (struct CGSize { double x1; double x2; })viewportSizeForAspectRatio:(long long)arg1;

@end
