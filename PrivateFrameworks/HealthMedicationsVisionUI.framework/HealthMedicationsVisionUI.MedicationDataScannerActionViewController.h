
@interface HealthMedicationsVisionUI.MedicationDataScannerActionViewController : OBWelcomeFullCenterContentController {
    void $__lazy_storage_$_blurView;
    void actionHandler;
    void cancelButton;
    void cancelButtonTitle;
    void cancelHandler;
    void contentHeaderHeight;
    void contentHeaderView;
    void customContentView;
    void detailMaxNumberOfLines;
    void detailText;
    void primaryButton;
    void primaryButtonImage;
    void primaryButtonTitle;
    void showsBackground;
    void titleText;
    void topPaddingConstraint;
}

- (void).cxx_destruct;
- (void)hxui_primaryFooterButtonTapped;
- (void)hxui_secondaryFooterButtonTapped;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)viewDidLoad;

@end
