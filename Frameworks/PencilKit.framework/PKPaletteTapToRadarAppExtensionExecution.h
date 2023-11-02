
@interface PKPaletteTapToRadarAppExtensionExecution : PKPaletteTapToRadarCommandExecution <PKTextInputDebugRadarViewControllerDelegate> {
    UIViewController * _contentViewController;
    NSLayoutConstraint * _contentViewHeightConstraint;
    NSLayoutConstraint * _contentViewWidthConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_updateUI;
- (void)debugRadarViewControllerDidDismiss:(id)arg1;
- (void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)run;

@end
