
@interface PKTextViewTableViewCell : UITableViewCell {
    UITextView * _textView;
}

@property (nonatomic, readonly) UITextView *textView;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textView;

@end
