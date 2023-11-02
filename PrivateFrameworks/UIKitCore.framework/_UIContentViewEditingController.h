
@interface _UIContentViewEditingController : NSObject <UIGestureRecognizerDelegate, UITextFieldDelegate, _UIPassthroughScrollInteractionDelegate> {
    UIView * _contentView;
    UILabel * _editableLabel;
    _UIContentViewEditingConfiguration * _editingConfiguration;
    bool  _hasEdits;
    _UIContentViewLabelConfiguration * _labelConfiguration;
    UILongPressGestureRecognizer * _longPressRecognizer;
    _UIPassthroughScrollInteraction * _passthroughInteraction;
    UITextField * _textInputView;
}

@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingEditedText, nonatomic, readonly) bool displayingEditedText;
@property (nonatomic, readonly) UILabel *editableLabel;
@property (nonatomic, readonly) _UIContentViewEditingConfiguration *editingConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIContentViewLabelConfiguration *labelConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *textInputView;

- (void).cxx_destruct;
- (id)contentView;
- (void)dealloc;
- (id)description;
- (id)editableLabel;
- (id)editingConfiguration;
- (id)initWithContentView:(id)arg1 editableLabel:(id)arg2;
- (bool)isDisplayingEditedText;
- (id)labelConfiguration;
- (void)longPressRecognizerChanged:(id)arg1;
- (bool)makeTextInputFirstResponderWithInitialLayoutBlock:(id /* block */)arg1;
- (bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint { double x1; double x2; })arg2 withEvent:(id)arg3;
- (bool)passthroughScrollInteractionDidRecognize:(id)arg1;
- (void)setTextInputView:(id)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)textInputView;
- (void)updateLabelConfiguration:(id)arg1 editingConfiguration:(id)arg2;

@end
