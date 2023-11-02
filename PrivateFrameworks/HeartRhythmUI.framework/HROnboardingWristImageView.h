
@interface HROnboardingWristImageView : UIView {
    long long  _watchImageStyle;
    UIView * _wristWatchContentView;
    UIImageView * _wristWatchImageView;
}

@property (nonatomic, readonly) long long watchImageStyle;
@property (nonatomic, retain) UIView *wristWatchContentView;
@property (nonatomic, readonly) UIImageView *wristWatchImageView;

- (void).cxx_destruct;
- (id)_wristWatchContentViewForStyle:(long long)arg1;
- (id)initWithImageStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1;
- (void)setTimeRemaining:(double)arg1;
- (void)setWristWatchContentView:(id)arg1;
- (long long)watchImageStyle;
- (id)wristWatchContentView;
- (id)wristWatchImageView;

@end
