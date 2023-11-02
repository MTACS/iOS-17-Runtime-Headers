
@interface PDFKitPopupView : UIView <UITextViewDelegate> {
    PDFKitPopupViewPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_popoverControllerSourceRect;
- (void)_presentPopupView;
- (void)_presentPopupView_iOS;
- (void)_presentViewController:(id)arg1;
- (void)_removeControlForAnnotation;
- (void)_setupPopupView;
- (void)_updateParentContents;
- (bool)becomeFirstResponder;
- (void)doneButton:(id)arg1;
- (id)initWithParentAnnotation:(id)arg1 owningPageView:(id)arg2 owningPDFView:(id)arg3;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)removeFromSuperview;
- (void)textViewDidChange:(id)arg1;

@end
