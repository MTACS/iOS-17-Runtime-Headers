
@interface PXTrimScrubberLayoutHelper : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _filmstripFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _filmstripFrameInScrubberSpace;
    double  _filmstripScale;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _horizontalTimelineInset;
    bool  _needsUpdate;
    double  _pivotAnchor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewportFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleFrameInFilmstripSpace;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } durationInsetFilmstripFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } filmstripFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } filmstripFrameInScrubberSpace;
@property (nonatomic) double filmstripScale;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } horizontalTimelineInset;
@property (nonatomic) bool needsUpdate;
@property (nonatomic) double pivotAnchor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewportFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleFrameInFilmstripSpace;

- (void)_updateIfNeeded;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })durationInsetFilmstripFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })filmstripFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })filmstripFrameInScrubberSpace;
- (double)filmstripScale;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })horizontalTimelineInset;
- (id)init;
- (bool)needsUpdate;
- (double)offsetInScrubberSpaceForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (double)offsetInScrubberSpaceForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 fallbackAnchor:(double)arg2;
- (double)offsetInViewportSpaceForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (double)offsetInViewportSpaceForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 fallbackAnchor:(double)arg2;
- (double)pivotAnchor;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setFilmstripFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFilmstripFrameInScrubberSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFilmstripScale:(double)arg1;
- (void)setHorizontalTimelineInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setPivotAnchor:(double)arg1;
- (void)setViewportFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisibleFrameInFilmstripSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeForOffsetInScrubberSpace:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewportFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrameInFilmstripSpace;

@end
