
@interface CCUISensorAttributionCompactControl : UIControl {
    bool  _alwaysHidesSensorIcons;
    NSSet * _attributions;
    UIView * _cameraIndicatorView;
    UIImageView * _chevronImageView;
    UIView * _chevronWrapperView;
    <CCUISensorAttributionCompactControlDelegate> * _delegate;
    UILabel * _descriptionLabel;
    SBFView * _descriptionLabelWrapperView;
    NSString * _descriptionText;
    NSSet * _displayedAttributions;
    bool  _expanded;
    UIView * _locationIndicatorView;
    double  _maximumAllowableWidth;
    UIView * _micIndicatorView;
    bool  _showingCamera;
    bool  _showingLocation;
    bool  _showingMicrophone;
    struct CGSize { 
        double width; 
        double height; 
    }  _singleIndicatorSize;
    double  _touchDownDate;
    NSUUID * _touchUUID;
}

@property (nonatomic, readonly) int activeIndicatorsCount;
@property (nonatomic) bool alwaysHidesSensorIcons;
@property (nonatomic, readonly) UIView *cameraIndicatorView;
@property (nonatomic, retain) UIImageView *chevronImageView;
@property (nonatomic, retain) UIView *chevronWrapperView;
@property (nonatomic) <CCUISensorAttributionCompactControlDelegate> *delegate;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) SBFView *descriptionLabelWrapperView;
@property (nonatomic, copy) NSString *descriptionText;
@property (getter=isDisplayingSensorStatus, nonatomic, readonly) bool displayingSensorStatus;
@property (nonatomic) bool expanded;
@property (nonatomic, readonly) double fixedHeight;
@property (nonatomic, readonly) UIView *locationIndicatorView;
@property (nonatomic) double maximumAllowableWidth;
@property (nonatomic, readonly) UIView *micIndicatorView;
@property (nonatomic) bool showingCamera;
@property (nonatomic) bool showingLocation;
@property (nonatomic) bool showingMicrophone;

- (void).cxx_destruct;
- (void)_configureChevronViews;
- (void)_configureChevronWrapperAppearance;
- (id)_configureIndicatorViewForType:(unsigned long long)arg1;
- (void)_decideToExpandOrCompactAndForwardToDelegate:(id)arg1;
- (id)_fontForTitleLabel;
- (void)_layoutChevronViews;
- (void)_layoutDescriptionLabel;
- (void)_layoutIndicatorViews;
- (double)_layoutSingleIndicatorView:(id)arg1 trailingX:(double)arg2 visible:(bool)arg3;
- (id)_rightChevronImage;
- (void)_setBlurRadius:(double)arg1 ofView:(id)arg2;
- (void)_setChevronAlphaForExpanded:(bool)arg1 animated:(bool)arg2;
- (void)_setDescriptionLabelBlurAndAlphaForExpanded:(bool)arg1 animated:(bool)arg2;
- (void)_updateContentIfDisplayedAttributionsAreStaleAndLayout;
- (double)_visibleIndicatorsWidth;
- (int)activeIndicatorsCount;
- (bool)alwaysHidesSensorIcons;
- (id)cameraIndicatorView;
- (id)chevronImageView;
- (id)chevronWrapperView;
- (id)clone;
- (id)delegate;
- (id)descriptionLabel;
- (id)descriptionLabelWrapperView;
- (id)descriptionText;
- (bool)expanded;
- (double)fixedHeight;
- (void)handleTouchCanceled;
- (void)handleTouchDown;
- (void)handleTouchUpInside;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisplayingSensorStatus;
- (void)layoutSubviews;
- (id)locationIndicatorView;
- (double)maximumAllowableWidth;
- (id)micIndicatorView;
- (void)sensorAttributionsChanged:(id)arg1;
- (void)setAlwaysHidesSensorIcons:(bool)arg1;
- (void)setChevronImageView:(id)arg1;
- (void)setChevronWrapperView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDescriptionLabelWrapperView:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setMaximumAllowableWidth:(double)arg1;
- (void)setShowingCamera:(bool)arg1;
- (void)setShowingLocation:(bool)arg1;
- (void)setShowingMicrophone:(bool)arg1;
- (bool)showingCamera;
- (bool)showingLocation;
- (bool)showingMicrophone;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsMaximumAllowableWidth;

@end