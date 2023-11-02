
@interface PKSoftwareUpdateTableView : UITableView {
    long long  _context;
    UIColor * _linkColor;
    UITextView * _messageView;
    UIScrollView * _scrollView;
    UIColor * _textColor;
    UILabel * _titleLabel;
}

@property (nonatomic) long long context;
@property (nonatomic, retain) UIColor *linkColor;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (id)_messageAttributedStringWithTextColor:(id)arg1;
- (long long)context;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (id)linkColor;
- (void)setContext:(long long)arg1;
- (void)setLinkColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)textColor;

@end
