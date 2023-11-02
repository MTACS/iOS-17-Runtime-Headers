
@interface UISelectionTapRecognizer : UITextTapRecognizer {
    UIResponder<UITextInput> * _textView;
}

@property UIResponder<UITextInput> *textView;

- (bool)isCloseToSelection;
- (void)setState:(long long)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;

@end
