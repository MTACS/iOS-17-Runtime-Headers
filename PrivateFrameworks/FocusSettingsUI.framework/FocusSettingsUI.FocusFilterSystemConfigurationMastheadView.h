
@interface FocusSettingsUI.FocusFilterSystemConfigurationMastheadView : UIView {
    void color;
    void rootView;
    void subtitle;
    void symbolName;
    void title;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)color;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 symbolName:(id)arg3 color:(id)arg4;
- (id)subtitle;
- (id)symbolName;
- (id)title;

@end
