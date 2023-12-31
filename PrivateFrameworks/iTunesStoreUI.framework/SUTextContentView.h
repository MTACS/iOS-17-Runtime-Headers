
@interface SUTextContentView : UITextContentView {
    UILabel * _placeholderLabel;
}

@property (nonatomic, retain) NSString *placeholder;

- (bool)becomeFirstResponder;
- (void)dealloc;
- (void)keyboardInputChangedSelection:(id)arg1;
- (void)layoutSubviews;
- (id)placeholder;
- (bool)resignFirstResponder;
- (void)setBackgroundColor:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setText:(id)arg1;

@end
