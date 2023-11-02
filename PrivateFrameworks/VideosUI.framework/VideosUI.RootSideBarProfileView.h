
@interface VideosUI.RootSideBarProfileView : VUIBaseView {
    void $__lazy_storage_$_accountSettingsVoiceOverString;
    void $__lazy_storage_$_appleAccountString;
    void $__lazy_storage_$_imageLayout;
    void $__lazy_storage_$_signInString;
    void $__lazy_storage_$_subtitleLabelLayout;
    void $__lazy_storage_$_titleLabelLayout;
    void imageView;
    void subtitleLabel;
    void titleLabel;
}

- (void).cxx_destruct;
- (void)accountStoreDidChange:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)profileImageDidChange:(id)arg1;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
