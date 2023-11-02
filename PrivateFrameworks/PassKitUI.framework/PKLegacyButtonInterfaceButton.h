
@interface PKLegacyButtonInterfaceButton : UIButton <PKLegacyButtonInterface> {
    UIImage * _image;
    UIColor * _overrideBackgroundColor;
    UIColor * _overrideForegroundColor;
    bool  _showSpinner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showSpinner;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConfigurationUpdateHandler:(id /* block */)arg1;
- (void)setShowSpinner:(bool)arg1;
- (bool)showSpinner;
- (void)updateActivityIndicatorColorWithColor:(id)arg1;
- (void)updateBackgroundColorWithColor:(id)arg1;
- (void)updateTitleColorWithColor:(id)arg1;
- (void)updateWithImage:(id)arg1;

@end
