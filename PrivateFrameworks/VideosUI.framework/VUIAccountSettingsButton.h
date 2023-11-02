
@interface VUIAccountSettingsButton : VUIButton {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    bool  _hideAndDisable;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferedContentSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) bool hideAndDisable;
@property (nonatomic) struct CGSize { double x1; double x2; } preferedContentSize;

- (void)_accountStoreDidChange:(id)arg1;
- (void)_profileImageDidChange:(id)arg1;
- (void)_setup;
- (void)_setupAccountImageView;
- (void)_updateAccessibilityFrame;
- (void)_updateAccountButtonVisibility;
- (void)_updateAccountImage;
- (void)_updateImageViewFrame;
- (double)accountSettingsButtonDimension;
- (struct CGSize { double x1; double x2; })calculateContentSize;
- (void)configureWithLayoutProperties;
- (struct CGSize { double x1; double x2; })contentSize;
- (bool)hideAndDisable;
- (void)hideAndDisable:(bool)arg1;
- (id)initWithType:(unsigned long long)arg1 interfaceStyle:(unsigned long long)arg2;
- (id)largeContentImage;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })preferedContentSize;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHideAndDisable:(bool)arg1;
- (void)setPreferedContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTintColor:(id)arg1;
- (void)setiPhoneSize:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
