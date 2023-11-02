
@interface PKTableHeaderView : UIView {
    bool  _accessoryViewsDisabled;
    UIButton * _actionButton;
    UIActivityIndicatorView * _activityIndicator;
    double  _bottomPadding;
    LAUICheckmarkLayer * _checkmarkLayer;
    UIImageView * _imageView;
    bool  _isTemplateLayout;
    double  _maximumHeight;
    double  _minimumHeight;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalImageViewSize;
    bool  _shouldReserveSubtitleHeight;
    unsigned long long  _style;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    double  _topPadding;
}

@property (nonatomic) bool accessoryViewsDisabled;
@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) double bottomPadding;
@property (nonatomic, readonly) LAUICheckmarkLayer *checkmarkLayer;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) double maximumHeight;
@property (nonatomic) double minimumHeight;
@property (nonatomic) bool shouldReserveSubtitleHeight;
@property (nonatomic) unsigned long long style;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) double topPadding;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (bool)_hasAccessibilityLargeText;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageHeightAdjustment:(double)arg2;
- (id)_subtitleFont;
- (id)_titleFont;
- (void)_updateAccessoryViews;
- (void)_updateCheckmarkColor;
- (void)_updateFonts;
- (void)_updateImageView;
- (bool)accessoryViewsDisabled;
- (id)actionButton;
- (id)activityIndicator;
- (double)bottomPadding;
- (id)checkmarkLayer;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maximumHeight;
- (double)minimumHeight;
- (void)setAccessoryViewsDisabled:(bool)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setBottomPadding:(double)arg1;
- (void)setImageView:(id)arg1;
- (void)setImageViewImage:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 animated:(bool)arg3;
- (void)setMaximumHeight:(double)arg1;
- (void)setMinimumHeight:(double)arg1;
- (void)setPassSnapshot:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 animated:(bool)arg3 needsCorners:(bool)arg4;
- (void)setPassSnapshotUsingDefaultSize:(id)arg1 animated:(bool)arg2 needsCorners:(bool)arg3;
- (void)setShouldReserveSubtitleHeight:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTopPadding:(double)arg1;
- (bool)shouldReserveSubtitleHeight;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (id)subtitleLabel;
- (void)tintColorDidChange;
- (id)titleLabel;
- (double)topPadding;
- (void)traitCollectionDidChange:(id)arg1;

@end
