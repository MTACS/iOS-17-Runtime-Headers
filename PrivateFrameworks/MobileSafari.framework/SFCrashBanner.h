
@interface SFCrashBanner : SFPinnableBanner {
    SFThemeColorEffectView * _backdrop;
    NSString * _bannerText;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedLabelLayoutSize;
    UIButton * _closeButton;
    UIVisualEffectView * _contentEffectView;
    UILabel * _label;
    NSString * _manuallyWrappedBannerText;
    unsigned long long  _messageType;
}

@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic, readonly) NSString *bannerText;
@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic, readonly) NSString *manuallyWrappedBannerText;
@property (nonatomic) unsigned long long messageType;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_labelLayoutSizeForWidth:(double)arg1;
- (bool)_shouldUseManuallyWrappedCrashMessageForWidth:(double)arg1;
- (id)backdropGroupName;
- (id)bannerText;
- (id)closeButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)manuallyWrappedBannerText;
- (unsigned long long)messageType;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBannerText:(id)arg1 manuallyWrappedBannerText:(id)arg2;
- (void)setCloseButton:(id)arg1;
- (void)setMessageType:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)themeDidChange;

@end
