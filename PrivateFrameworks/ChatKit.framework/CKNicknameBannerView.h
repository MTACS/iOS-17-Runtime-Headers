
@interface CKNicknameBannerView : UIView {
    NSArray * _nicknameUpdates;
    unsigned long long  _style;
    UIView * _swiftBanner;
}

@property (nonatomic, retain) NSArray *nicknameUpdates;
@property (nonatomic) unsigned long long style;
@property (nonatomic, retain) UIView *swiftBanner;

- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)arg1 updates:(id)arg2 useNamedTitles:(bool)arg3 avatarImages:(id)arg4 contacts:(id)arg5 customImage:(id)arg6 titleString:(id)arg7 subtitleString:(id)arg8 actionButtonTitle:(id)arg9 actionButtonHandler:(id /* block */)arg10 actionButtonMenuItems:(id)arg11 xButtonHandler:(id /* block */)arg12;
- (void)layoutSubviews;
- (id)nicknameUpdates;
- (void)setNicknameUpdates:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setSwiftBanner:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (id)swiftBanner;

@end
