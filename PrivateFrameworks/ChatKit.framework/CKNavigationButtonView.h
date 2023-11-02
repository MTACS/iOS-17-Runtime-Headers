
@interface CKNavigationButtonView : UIButton {
    UIImage * _defaultImage;
    UIImage * _disabledImage;
    UIVisualEffect * _disabledVibrancyEffect;
    UIImageView * _iconImageView;
    UIImage * _image;
    UIButton * _imageButton;
    long long  _joinButtonStyle;
    NSString * _text;
    UILabel * _textLabel;
    UIVisualEffect * _vibrancyEffect;
    UIVisualEffectView * _vibrancyView;
    bool  _wantsLongPress;
    bool  _wantsVibrancy;
}

@property (nonatomic, retain) UIImage *defaultImage;
@property (nonatomic, retain) UIImage *disabledImage;
@property (nonatomic, retain) UIVisualEffect *disabledVibrancyEffect;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIButton *imageButton;
@property (nonatomic) long long joinButtonStyle;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic, retain) UIVisualEffect *vibrancyEffect;
@property (nonatomic, retain) UIVisualEffectView *vibrancyView;
@property (nonatomic) bool wantsLongPress;
@property (nonatomic) bool wantsVibrancy;

- (void).cxx_destruct;
- (id)_imageForCurrentState;
- (void)_setupIconImageView;
- (id)defaultImage;
- (id)disabledImage;
- (id)disabledVibrancyEffect;
- (id)iconImageView;
- (id)image;
- (id)imageButton;
- (id)initWithImage:(id)arg1 disabledImage:(id)arg2 text:(id)arg3 wantsLongPress:(bool)arg4;
- (id)initWithImage:(id)arg1 text:(id)arg2 wantsLongPress:(bool)arg3;
- (long long)joinButtonStyle;
- (void)layoutSubviews;
- (void)setDefaultImage:(id)arg1;
- (void)setDisabledImage:(id)arg1;
- (void)setDisabledVibrancyEffect:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setJoinButtonStyle:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setVibrancyEffect:(id)arg1;
- (void)setVibrancyView:(id)arg1;
- (void)setWantsLongPress:(bool)arg1;
- (void)setWantsVibrancy:(bool)arg1;
- (id)text;
- (id)textLabel;
- (id)vibrancyEffect;
- (id)vibrancyView;
- (bool)wantsLongPress;
- (bool)wantsVibrancy;

@end
