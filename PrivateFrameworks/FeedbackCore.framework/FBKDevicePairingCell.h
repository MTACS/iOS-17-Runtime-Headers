
@interface FBKDevicePairingCell : UITableViewCell {
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _detailLabel;
    NSLayoutConstraint * _detailLabelTrailingConstraint;
    double  _detailLabelTrailingConstraintInitial;
    UIImageView * _deviceImage;
    UILabel * _mainLabel;
    UIImageView * _statusIndicatorImageView;
    UILabel * _subLabel;
}

@property (nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) UILabel *detailLabel;
@property (nonatomic) NSLayoutConstraint *detailLabelTrailingConstraint;
@property (nonatomic) double detailLabelTrailingConstraintInitial;
@property (nonatomic) UIImageView *deviceImage;
@property (nonatomic) UILabel *mainLabel;
@property (nonatomic) UIImageView *statusIndicatorImageView;
@property (nonatomic) UILabel *subLabel;

+ (double)estimatedRowHeight;

- (void).cxx_destruct;
- (id)activityIndicator;
- (void)awakeFromNib;
- (id)detailLabel;
- (id)detailLabelTrailingConstraint;
- (double)detailLabelTrailingConstraintInitial;
- (id)deviceImage;
- (id)mainLabel;
- (void)setActivityIndicator:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setDetailLabelTrailingConstraint:(id)arg1;
- (void)setDetailLabelTrailingConstraintInitial:(double)arg1;
- (void)setDeviceImage:(id)arg1;
- (void)setMainLabel:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setStatusIndicatorImageView:(id)arg1;
- (void)setSubLabel:(id)arg1;
- (double)spaceFromSuperViewToLabel;
- (id)statusIndicatorImageView;
- (id)subLabel;
- (void)updateWithDevice:(id)arg1 showsDetail:(bool)arg2 showsTransport:(bool)arg3;
- (void)updateWithDevice:(id)arg1 showsDetail:(bool)arg2 showsTransport:(bool)arg3 isSelected:(bool)arg4;

@end
