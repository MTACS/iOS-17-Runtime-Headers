
@interface PaperKit.SignatureCreationViewController : UIViewController <PKCanvasViewDelegate> {
    void buttonImageConfiguration;
    void clearButton;
    void clearButtonBottomPadding;
    void clearButtonImagePadding;
    void completion;
    void customLabelDoneAction;
    void doneItem;
    void downArrowImagePadding;
    void navigationBar;
    void panelSize;
    void savedFirstResponder;
    void signatureDescription;
    void signatureLineColor;
    void signatureLineInset;
    void signatureLinePadding;
    void signatureLineView;
    void signatureMarkPadding;
    void signaturePenWidth;
    void signatureView;
    void xmarkImageConfiguration;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic, readonly) bool prefersStatusBarHidden;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)cancelAction:(id)arg1;
- (void)canvasViewDrawingDidChange:(id)arg1;
- (void)clearAction;
- (void)descriptionAction;
- (void)doneAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)prefersStatusBarHidden;
- (void)updateDoneButtonState:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
