
@interface PKAccessoryView : UIView <PKPaletteEdgeLocating, PKPaletteViewSizeScaling> {
    PKDragIndicatorView * _dragIndicatorView;
    unsigned long long  _edgeLocation;
    double  _scalingFactor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKDragIndicatorView *dragIndicatorView;
@property (nonatomic) unsigned long long edgeLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic) double scalingFactor;
@property (nonatomic) bool showsDragIndicator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dragIndicatorView;
- (unsigned long long)edgeLocation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)scalingFactor;
- (void)setDragIndicatorView:(id)arg1;
- (void)setEdgeLocation:(unsigned long long)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)setShowsDragIndicator:(bool)arg1;
- (bool)showsDragIndicator;

@end
