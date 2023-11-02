
@interface CNPropertyNoteCell : CNPropertyCell {
    UILabel * _labelLabel;
    UITextView * _textView;
}

@property (nonatomic, readonly) UILabel *labelLabel;
@property (nonatomic, retain) UITextView *textView;

+ (bool)shouldIndentWhileEditing;

- (void).cxx_destruct;
- (bool)allowsCellSelection;
- (void)dealloc;
- (bool)displaysCellSelectionState;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelLabel;
- (id)labelView;
- (void)performDefaultAction;
- (void)setAllowsEditing:(bool)arg1;
- (void)setProperty:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (bool)shouldPerformDefaultAction;
- (bool)supportsTintColorValue;
- (id)textView;
- (void)textViewChanged:(id)arg1;
- (void)textViewEditingDidEnd:(id)arg1;
- (id)valueView;
- (double)valueViewBottomMargin;

@end
