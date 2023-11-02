
@interface WGWidgetListEditViewPinTableViewCell : UITableViewCell {
    WGWidgetPinningTeachingAnimationView * _pinImageView;
    UISwitch * _pinSwitch;
}

@property (nonatomic, readonly) UISwitch *pinSwitch;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)pinSwitch;
- (void)prepareForReuse;
- (void)startAnimating;
- (void)stopAnimating;

@end
