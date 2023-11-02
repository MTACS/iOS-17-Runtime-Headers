
@interface PXLivePhotoTrimScrubberSpec : NSObject {
    UIColor * _disabledOverlayColor;
    bool  _fallbackToKeyTimeTracking;
    bool  _fallbackToPlayheadTracking;
    UIColor * _filmstripBorderColor;
    double  _filmstripCornerRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _filmstripViewInsets;
    double  _handleAnchorX;
    double  _handleHeight;
    double  _handleTouchDistance;
    double  _handleWidth;
    double  _loupeInnerCornerRadius;
    double  _loupeOuterCornerRadius;
    double  _loupeVerticalInset;
    double  _playheadWidth;
    double  _scrubberHeight;
    bool  _useMiniScrubberHeight;
}

@property (nonatomic, retain) UIColor *disabledOverlayColor;
@property (nonatomic) bool fallbackToKeyTimeTracking;
@property (nonatomic) bool fallbackToPlayheadTracking;
@property (nonatomic, retain) UIColor *filmstripBorderColor;
@property (nonatomic) double filmstripCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } filmstripViewInsets;
@property (nonatomic) double handleAnchorX;
@property (nonatomic) double handleHeight;
@property (nonatomic) double handleTouchDistance;
@property (nonatomic) double handleWidth;
@property (nonatomic) double loupeInnerCornerRadius;
@property (nonatomic) double loupeOuterCornerRadius;
@property (nonatomic) double loupeVerticalInset;
@property (nonatomic) double playheadWidth;
@property (nonatomic) double scrubberHeight;
@property (nonatomic) bool useMiniScrubberHeight;

- (void).cxx_destruct;
- (void)_updateScrubberHeight;
- (id)disabledOverlayColor;
- (bool)fallbackToKeyTimeTracking;
- (bool)fallbackToPlayheadTracking;
- (id)filmstripBorderColor;
- (double)filmstripCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })filmstripViewInsets;
- (double)handleAnchorX;
- (double)handleHeight;
- (double)handleTouchDistance;
- (double)handleWidth;
- (id)init;
- (double)loupeInnerCornerRadius;
- (double)loupeOuterCornerRadius;
- (double)loupeVerticalInset;
- (double)playheadWidth;
- (double)scrubberHeight;
- (void)setDisabledOverlayColor:(id)arg1;
- (void)setFallbackToKeyTimeTracking:(bool)arg1;
- (void)setFallbackToPlayheadTracking:(bool)arg1;
- (void)setFilmstripBorderColor:(id)arg1;
- (void)setFilmstripCornerRadius:(double)arg1;
- (void)setFilmstripViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHandleAnchorX:(double)arg1;
- (void)setHandleHeight:(double)arg1;
- (void)setHandleTouchDistance:(double)arg1;
- (void)setHandleWidth:(double)arg1;
- (void)setLoupeInnerCornerRadius:(double)arg1;
- (void)setLoupeOuterCornerRadius:(double)arg1;
- (void)setLoupeVerticalInset:(double)arg1;
- (void)setPlayheadWidth:(double)arg1;
- (void)setScrubberHeight:(double)arg1;
- (void)setUseMiniScrubberHeight:(bool)arg1;
- (bool)useMiniScrubberHeight;

@end
