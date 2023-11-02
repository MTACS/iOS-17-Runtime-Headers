
@interface HUEditableTextViewCell : UITableViewCell <HUDisableableCellProtocol> {
    bool  _disabled;
    bool  _editEnabled;
    NSString * _placeholderText;
    bool  _showingPlaceholder;
    NSString * _text;
    UITextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic) bool editEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *placeholderText;
@property (nonatomic) bool showingPlaceholder;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UITextView *textView;
@property (nonatomic) <UITextViewDelegate> *textViewDelegate;

- (void).cxx_destruct;
- (bool)editEnabled;
- (void)handleUITextViewTextDidBeginEditingNotification:(id)arg1;
- (void)handleUITextViewTextDidEndEditingNotification:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (id)placeholderText;
- (void)prepareForReuse;
- (void)setDisabled:(bool)arg1;
- (void)setEditEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setPlaceholderText:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setShowingPlaceholder:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setTextViewDelegate:(id)arg1;
- (bool)showingPlaceholder;
- (id)text;
- (id)textView;
- (id)textViewDelegate;
- (id)trimmedStringForText:(id)arg1;
- (void)updateTextColor;

@end
