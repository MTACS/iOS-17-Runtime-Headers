
@interface CKAppGrabberView : UIView {
    NSString * _appIdentifier;
    _UIGrabber * _chevronView;
    UIButton * _closeButton;
    <CKAppGrabberViewDelegate> * _delegate;
    UIView * _grayLine;
    UIView * _headerView;
    UIImageView * _iconImageView;
    UIImageView * _iconOutlineView;
    UILabel * _pluginTitleLabel;
    bool  _roundsTopCorners;
    bool  _showsAppTitle;
}

@property (nonatomic, readonly) double chevronMaxYOffset;
@property (nonatomic, readonly) UIButton *closeButton;
@property (nonatomic) <CKAppGrabberViewDelegate> *delegate;
@property (nonatomic) bool roundsTopCorners;
@property (nonatomic) bool showsAppTitle;
@property (nonatomic) bool showsGrabberPill;
@property (nonatomic, readonly) double visualOriginYOffset;

+ (double)compactRoundedCornerRadius;
+ (double)roundedCornerRadius;

- (void).cxx_destruct;
- (double)chevronMaxYInView:(id)arg1;
- (double)chevronMaxYOffset;
- (id)closeButton;
- (void)closeButtonTapped:(id)arg1;
- (id)delegate;
- (id)headerView;
- (id)iconImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)roundsTopCorners;
- (void)setDelegate:(id)arg1;
- (void)setRoundsTopCorners:(bool)arg1;
- (void)setShowsAppTitle:(bool)arg1;
- (void)setShowsGrabberPill:(bool)arg1;
- (bool)showsAppTitle;
- (bool)showsGrabberPill;
- (void)updateAppTitle:(id)arg1 icon:(id)arg2 appIdentifier:(id)arg3;
- (void)updateHeaderFrame:(bool)arg1;
- (void)updateIconImageView:(id)arg1;
- (double)visualOriginYInView:(id)arg1;
- (double)visualOriginYOffset;

@end
