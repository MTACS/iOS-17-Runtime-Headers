
@interface PDFKitTextView : NSObject <UITextViewDelegate> {
    PDFKitTextViewPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_adjustScrollViewForKeyboardNotification:(id)arg1;
- (void)_applyScale:(double)arg1 toView:(id)arg2;
- (void)_commitTextFromTextView:(id)arg1;
- (void)_didChangeZoomFactor:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_setAlignment:(long long)arg1;
- (void)_setAttributedString:(id)arg1;
- (void)_setFont:(id)arg1;
- (void)_setFontColor:(id)arg1;
- (void)_setString:(id)arg1;
- (void)_setup;
- (void)_setupTopLevelView;
- (void)_textWidgetDone;
- (void)_updateScaleFactor;
- (void)adjustScrollViewToAccomodateKeyboardStartingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 endingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 annotationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 withAnimationDuration:(double)arg4 curve:(long long)arg5;
- (id)annotation;
- (bool)becomeFirstResponder;
- (bool)handleBackTab;
- (bool)handleTab;
- (id)initWithAnnotation:(id)arg1 pdfPageView:(id)arg2 pdfView:(id)arg3;
- (void)insertTextSuggestion:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)layer;
- (void)removeFromSuperview;
- (void)rotateByAngle:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)textView;
- (bool)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;

@end
