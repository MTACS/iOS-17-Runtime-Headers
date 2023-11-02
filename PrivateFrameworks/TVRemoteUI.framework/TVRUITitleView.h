
@interface TVRUITitleView : UIView {
    UIImageView * _deviceModelImageView;
    UIImageView * _imageView;
    UIStackView * _stackView;
    <TVRUIStyleProvider> * _styleProvider;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *deviceModelImageView;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) <TVRUIStyleProvider> *styleProvider;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupViewsIfNeeded;
- (id)deviceModelImageView;
- (id)imageView;
- (id)initWithStyleProvider:(id)arg1;
- (bool)isExclusiveTouch;
- (void)setDeviceModelImageView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)stackView;
- (id)styleProvider;
- (id)titleLabel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateTitleWithDeviceName:(id)arg1 icon:(id)arg2;

@end
