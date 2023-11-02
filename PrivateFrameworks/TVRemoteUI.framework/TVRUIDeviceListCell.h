
@interface TVRUIDeviceListCell : UITableViewCell {
    UIImageView * _checkmarkImageView;
    <TVRUIDevice> * _device;
    UILabel * _deviceLabel;
    NSLayoutConstraint * _deviceLabelTrailingContentViewConstraint;
    NSLayoutConstraint * _deviceLabelTrailingFindMyButtonConstraint;
    UIAction * _findButtonTapAction;
    UIButton * _findMyButton;
    UIImageView * _modelImageView;
    UIView * _separator;
    bool  _showSeparator;
    <TVRUIStyleProvider> * _styleProvider;
}

@property (nonatomic, retain) UIImageView *checkmarkImageView;
@property (nonatomic, retain) <TVRUIDevice> *device;
@property (nonatomic, retain) UILabel *deviceLabel;
@property (nonatomic, retain) NSLayoutConstraint *deviceLabelTrailingContentViewConstraint;
@property (nonatomic, retain) NSLayoutConstraint *deviceLabelTrailingFindMyButtonConstraint;
@property (nonatomic, retain) UIAction *findButtonTapAction;
@property (nonatomic, retain) UIButton *findMyButton;
@property (nonatomic, retain) UIImageView *modelImageView;
@property (nonatomic, retain) UIView *separator;
@property (nonatomic) bool showSeparator;
@property (nonatomic, retain) <TVRUIStyleProvider> *styleProvider;

- (void).cxx_destruct;
- (void)_configureViews;
- (void)_setupConstraints;
- (void)_updateConnectionStatus;
- (void)_updateFindMyButton;
- (id)checkmarkImageView;
- (id)device;
- (id)deviceLabel;
- (id)deviceLabelTrailingContentViewConstraint;
- (id)deviceLabelTrailingFindMyButtonConstraint;
- (id)findButtonTapAction;
- (id)findMyButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)modelImageView;
- (void)prepareForReuse;
- (id)separator;
- (void)setCheckmarkImageView:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setDeviceLabel:(id)arg1;
- (void)setDeviceLabelTrailingContentViewConstraint:(id)arg1;
- (void)setDeviceLabelTrailingFindMyButtonConstraint:(id)arg1;
- (void)setFindButtonTapAction:(id)arg1;
- (void)setFindMyButton:(id)arg1;
- (void)setModelImageView:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setShowSeparator:(bool)arg1;
- (void)setStyleProvider:(id)arg1;
- (bool)showSeparator;
- (id)styleProvider;

@end
