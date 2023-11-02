
@interface HUCameraStatusOverlayView : UIView {
    UIImageView * _alertBadge;
    bool  _didUpdateConstraints;
    bool  _isDisplayingForSingleCamera;
    UIColor * _statusColor;
    NSString * _statusImageName;
    UIImageView * _statusIndicatorImageView;
    HULegibilityLabel * _statusLabel;
    NSString * _statusString;
}

@property (nonatomic, retain) UIImageView *alertBadge;
@property (nonatomic) bool didUpdateConstraints;
@property (nonatomic) bool isDisplayingForSingleCamera;
@property (nonatomic, retain) UIColor *statusColor;
@property (nonatomic, retain) NSString *statusImageName;
@property (nonatomic, retain) UIImageView *statusIndicatorImageView;
@property (nonatomic, retain) HULegibilityLabel *statusLabel;
@property (nonatomic, copy) NSString *statusString;

- (void).cxx_destruct;
- (id)_chevronImage;
- (id)_exclamationImage;
- (id)alertBadge;
- (bool)didUpdateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisplayingForSingleCamera;
- (void)layoutSubviews;
- (void)setAlertBadge:(id)arg1;
- (void)setBadgeStatus:(unsigned long long)arg1;
- (void)setDidUpdateConstraints:(bool)arg1;
- (void)setIsDisplayingForSingleCamera:(bool)arg1;
- (void)setStatusColor:(id)arg1;
- (void)setStatusImageName:(id)arg1;
- (void)setStatusIndicatorImageView:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (void)setStatusString:(id)arg1;
- (id)statusColor;
- (id)statusImageName;
- (id)statusIndicatorImageView;
- (id)statusLabel;
- (id)statusString;
- (void)updateStatusForPlaybackEngine:(id)arg1;
- (void)updateStatusLabelBounds;

@end
