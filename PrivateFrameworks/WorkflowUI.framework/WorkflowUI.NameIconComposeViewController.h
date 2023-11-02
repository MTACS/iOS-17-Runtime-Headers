
@interface WorkflowUI.NameIconComposeViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UITextFieldDelegate, WFGlyphPickerDelegate> {
    void $__lazy_storage_$_contentView;
    void $__lazy_storage_$_contentViewScrollViewEqualHeightConstraint;
    void $__lazy_storage_$_contentViewViewEqualHeightConstraint;
    void $__lazy_storage_$_glyphPicker;
    void $__lazy_storage_$_glyphPickerHeightConstraint;
    void $__lazy_storage_$_iconTextFieldInnerContainer;
    void $__lazy_storage_$_iconTextFieldOuterContainer;
    void $__lazy_storage_$_iconView;
    void $__lazy_storage_$_scrollView;
    void $__lazy_storage_$_scrollViewBottomConstraint;
    void $__lazy_storage_$_textField;
    void delegate;
    void glyphCharacter;
    void isIPad;
    void mode;
    void textFieldMinHeight;
    void viewDidAppear;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)done;
- (void)glyphPicker:(id)arg1 didSelectGlyphWithCharacter:(unsigned short)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)keyboardWillChange:(id)arg1;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateIsModalInPresentation;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
