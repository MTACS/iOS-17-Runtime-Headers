
@interface VTUIProximityDataSharingOptInView : VTUIProximityView {
    UIButton * _aboutLink;
    VTUIProximityContainerView * _containerView;
    UIButton * _dismissButton;
    VTUIButton * _notNowButton;
    VTUIButton * _shareButton;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIButton *aboutLink;
@property (nonatomic, retain) UIButton *dismissButton;
@property (nonatomic, retain) VTUIButton *notNowButton;
@property (nonatomic, retain) VTUIButton *shareButton;

- (void).cxx_destruct;
- (void)_setupContent;
- (void)_setupPortraitConstraints;
- (id)aboutLink;
- (id)dismissButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)notNowButton;
- (void)setAboutLink:(id)arg1;
- (void)setDismissButton:(id)arg1;
- (void)setNotNowButton:(id)arg1;
- (void)setShareButton:(id)arg1;
- (id)shareButton;

@end
