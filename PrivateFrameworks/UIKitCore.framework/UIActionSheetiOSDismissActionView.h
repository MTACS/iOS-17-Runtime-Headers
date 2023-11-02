
@interface UIActionSheetiOSDismissActionView : _UIAlertControlleriOSActionSheetCancelBackgroundView <UIActionSheetPresentationControllerDismissActionView> {
    UIButton * _dismissButton;
    bool  _usesShortCompactVerticalLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIButton *dismissButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool usesShortCompactVerticalLayout;

- (void).cxx_destruct;
- (double)_heightForTraitCollection:(id)arg1;
- (void)_setupDismissButton;
- (id)dismissButton;
- (id)initWithContinuousCornerRadius:(double)arg1;
- (void)setDismissButton:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsesShortCompactVerticalLayout:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (bool)usesShortCompactVerticalLayout;

@end
