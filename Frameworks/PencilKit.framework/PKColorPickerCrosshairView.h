
@interface PKColorPickerCrosshairView : UIView {
    _PKColorPickerCrosshairCornerMaskView * _baseMaskView;
    _PKColorPickerSimpleCrosshairView * _baseView;
    _PKColorPickerCrosshairCornerMaskView * _cornerEdgeMaskView;
    _PKColorPickerSimpleCrosshairView * _cornerEdgeView;
    unsigned long long  _cornerPosition;
    <PKColorPickerCrosshairViewDelegate> * _delegate;
}

@property (nonatomic, retain) _PKColorPickerCrosshairCornerMaskView *baseMaskView;
@property (nonatomic, retain) _PKColorPickerSimpleCrosshairView *baseView;
@property (nonatomic, retain) _PKColorPickerCrosshairCornerMaskView *cornerEdgeMaskView;
@property (nonatomic, retain) _PKColorPickerSimpleCrosshairView *cornerEdgeView;
@property (nonatomic) unsigned long long cornerPosition;
@property (nonatomic) <PKColorPickerCrosshairViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)baseMaskView;
- (id)baseView;
- (id)cornerEdgeMaskView;
- (id)cornerEdgeView;
- (unsigned long long)cornerPosition;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBaseMaskView:(id)arg1;
- (void)setBaseView:(id)arg1;
- (void)setCornerEdgeMaskView:(id)arg1;
- (void)setCornerEdgeView:(id)arg1;
- (void)setCornerPosition:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)update;

@end
