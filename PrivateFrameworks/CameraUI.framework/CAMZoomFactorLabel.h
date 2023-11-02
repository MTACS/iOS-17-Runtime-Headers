
@interface CAMZoomFactorLabel : UIView {
    UILabel * __label;
    UIImageView * __minimizedGlyph;
    bool  _minimized;
    bool  _preferDefaultSizing;
    bool  _showZoomFactorSymbol;
    bool  _useLeadingZero;
    double  _zoomFactor;
}

@property (nonatomic, readonly) UILabel *_label;
@property (nonatomic, retain) UIImageView *_minimizedGlyph;
@property (nonatomic) bool minimized;
@property (nonatomic) bool preferDefaultSizing;
@property (nonatomic) bool showZoomFactorSymbol;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) bool useLeadingZero;
@property (nonatomic) double zoomFactor;

+ (id)_minimizedImageWithScale:(double)arg1;

- (void).cxx_destruct;
- (id)_label;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_labelInsets;
- (id)_minimizedGlyph;
- (void)_updateFont;
- (void)_updateLabelText;
- (void)_updateMinimizedGlyph;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)minimized;
- (bool)preferDefaultSizing;
- (void)setMinimized:(bool)arg1;
- (void)setPreferDefaultSizing:(bool)arg1;
- (void)setShowZoomFactorSymbol:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUseLeadingZero:(bool)arg1;
- (void)setZoomFactor:(double)arg1;
- (void)set_minimizedGlyph:(id)arg1;
- (bool)showZoomFactorSymbol;
- (id)textColor;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useLeadingZero;
- (double)zoomFactor;

@end
