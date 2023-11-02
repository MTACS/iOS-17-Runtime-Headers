
@interface SBHLibraryPodCrossfadeView : UIView {
    UIView * _backgroundView;
    SBHLibraryCategoryStackView * _foregroundView;
    struct SBIconImageInfo { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double scale; 
        double continuousCornerRadius; 
    }  _iconImageInfo;
    SBIconView * _podIconView;
}

@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic, readonly) SBIconView *podIconView;

- (void).cxx_destruct;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (id)initWithBackgroundView:(id)arg1 podIconView:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithForegroundView:(id)arg1 podIconView:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)podIconView;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setPodIconViewCrossfadeFraction:(double)arg1;
- (void)setSourceViewCrossfadeFraction:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
