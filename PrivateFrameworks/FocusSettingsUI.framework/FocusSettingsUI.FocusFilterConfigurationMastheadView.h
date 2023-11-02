
@interface FocusSettingsUI.FocusFilterConfigurationMastheadView : UIView {
    void bundleIdentifier;
    void rootView;
    void subtitle;
    void title;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)initWithBundleIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)subtitle;
- (id)title;

@end
