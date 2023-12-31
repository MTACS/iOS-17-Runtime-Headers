
@interface PKDashboardCollectionViewCell : UICollectionViewCell {
    bool  _bottomSeparatorVisible;
    bool  _customHorizontalInset;
    double  _horizontalInset;
    unsigned long long  _maskType;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousMaskBounds;
    unsigned long long  _previousMaskType;
    UIView * _separatorView;
    bool  _showsBottomSeparator;
    bool  _wantsCustomAppearance;
    bool  _wantsDefaultHighlightBehavior;
}

@property (nonatomic) double horizontalInset;
@property (nonatomic) unsigned long long maskType;
@property (nonatomic) bool showsBottomSeparator;
@property (nonatomic) bool wantsCustomAppearance;
@property (nonatomic) bool wantsDefaultHighlightBehavior;

+ (id)defaultBackgroundColor;
+ (double)defaultHorizontalInset;

- (void).cxx_destruct;
- (double)_bottomSeparatorAlpha;
- (double)horizontalInset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (unsigned long long)maskType;
- (void)prepareForReuse;
- (void)setBottomSeparatorVisible:(bool)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setHorizontalInset:(double)arg1;
- (void)setMaskType:(unsigned long long)arg1;
- (void)setShowsBottomSeparator:(bool)arg1;
- (void)setWantsCustomAppearance:(bool)arg1;
- (void)setWantsDefaultHighlightBehavior:(bool)arg1;
- (bool)showsBottomSeparator;
- (void)updateMask;
- (bool)wantsCustomAppearance;
- (bool)wantsDefaultHighlightBehavior;

@end
