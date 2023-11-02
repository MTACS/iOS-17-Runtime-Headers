
@interface HUQuickControlStepperSegmentView : UIView {
    unsigned long long  _controlSize;
    double  _cornerRadius;
    UIView * _highlightedOverlayView;
    bool  _isSegmentViewHighlighted;
    unsigned long long  _orientation;
    unsigned long long  _reachabilityState;
    unsigned long long  _segmentLocation;
    unsigned long long  _style;
    NSString * _title;
    UILabel * _titleLabel;
    UIVisualEffectView * _titleLabelEffectView;
}

@property (nonatomic) unsigned long long controlSize;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIView *highlightedOverlayView;
@property (nonatomic) bool isSegmentViewHighlighted;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic) unsigned long long reachabilityState;
@property (nonatomic) unsigned long long segmentLocation;
@property (nonatomic) unsigned long long style;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIVisualEffectView *titleLabelEffectView;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_createTitleLabelIfNecessary;
- (void)_updateTitleLabel;
- (void)_updateUIHighlightedOverlayView;
- (unsigned long long)controlSize;
- (double)cornerRadius;
- (void)dealloc;
- (id)highlightedOverlayView;
- (id)initWithStyle:(unsigned long long)arg1 orientation:(unsigned long long)arg2 controlSize:(unsigned long long)arg3;
- (bool)isSegmentViewHighlighted;
- (void)layoutSubviews;
- (unsigned long long)orientation;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (unsigned long long)reachabilityState;
- (unsigned long long)segmentLocation;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlightedOverlayView:(id)arg1;
- (void)setIsSegmentViewHighlighted:(bool)arg1;
- (void)setOrientation:(unsigned long long)arg1;
- (void)setReachabilityState:(unsigned long long)arg1;
- (void)setSegmentLocation:(unsigned long long)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleLabelEffectView:(id)arg1;
- (unsigned long long)style;
- (id)title;
- (id)titleLabel;
- (id)titleLabelEffectView;
- (void)traitCollectionDidChange:(id)arg1;

@end
