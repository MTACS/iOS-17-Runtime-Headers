
@interface SFAccountNoteTableViewCell : UITableViewCell <UITextViewDelegate> {
    <SFAccountNoteTableViewCellDelegate> * _delegate;
    NSLayoutConstraint * _heightConstraint;
    id /* block */  _textDidChange;
    UITextView * _textView;
    UITapGestureRecognizer * _textViewTapGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAccountNoteTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ textDidChange;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (void)_didTapTextView;
- (void)_updateHeightConstraint;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setTextDidChange:(id /* block */)arg1;
- (void)setTextView:(id)arg1;
- (id /* block */)textDidChange;
- (id)textView;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;

@end
