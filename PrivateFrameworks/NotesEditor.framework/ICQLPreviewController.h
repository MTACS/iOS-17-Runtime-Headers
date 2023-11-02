
@interface ICQLPreviewController : QLPreviewController <UIPopoverPresentationControllerDelegate> {
    NSLayoutConstraint * _bottomButtonConstraint;
    ICSelectorDelayer * _hideViewOnlyDocumentButtonSelectorDelayer;
    UIButton * _viewOnlyDocumentButton;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewOnlyDocumentButtonFrame;
    ICViewOnlyPopoverViewController * _viewOnlyPopoverController;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomButtonConstraint;
@property (nonatomic, readonly) double bottomButtonSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICSelectorDelayer *hideViewOnlyDocumentButtonSelectorDelayer;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIButton *viewOnlyDocumentButton;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewOnlyDocumentButtonFrame;
@property (nonatomic, readonly) bool viewOnlyDocumentButtonIsVisible;
@property (nonatomic, retain) ICViewOnlyPopoverViewController *viewOnlyPopoverController;

- (void).cxx_destruct;
- (id)bottomButtonConstraint;
- (double)bottomButtonSpacing;
- (void)commonInit;
- (void)hideViewOnlyButton;
- (id)hideViewOnlyDocumentButtonSelectorDelayer;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)popoverDidDismiss;
- (void)setBottomButtonConstraint:(id)arg1;
- (void)setHideViewOnlyDocumentButtonSelectorDelayer:(id)arg1;
- (void)setViewOnlyDocumentButton:(id)arg1;
- (void)setViewOnlyPopoverController:(id)arg1;
- (void)showViewOnlyDocumentPopover;
- (void)showViewOnlyWarning;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBackgroundColor;
- (void)viewDidAppear:(bool)arg1;
- (id)viewOnlyDocumentButton;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewOnlyDocumentButtonFrame;
- (bool)viewOnlyDocumentButtonIsVisible;
- (id)viewOnlyPopoverController;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
