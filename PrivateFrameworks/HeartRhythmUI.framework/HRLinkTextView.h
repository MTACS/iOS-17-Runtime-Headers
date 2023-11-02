
@interface HRLinkTextView : UIView {
    long long  _URLIdentifier;
    long long  _currentUserInterfaceStyle;
    <HRLinkTextViewDelegate> * _delegate;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _linkRange;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UITextView * _textView;
    id /* block */  _userInterfaceStyleChanged;
}

@property (nonatomic) long long URLIdentifier;
@property (nonatomic) long long currentUserInterfaceStyle;
@property (nonatomic) <HRLinkTextViewDelegate> *delegate;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } linkRange;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, retain) UITextView *textView;
@property (nonatomic, copy) id /* block */ userInterfaceStyleChanged;

- (void).cxx_destruct;
- (long long)URLIdentifier;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (void)_updateCurrentUserInterfaceStyleIfNeeded;
- (long long)currentUserInterfaceStyle;
- (id)delegate;
- (id)firstBaselineAnchor;
- (id)initWithLinkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 URLIdentifier:(long long)arg2 delegate:(id)arg3;
- (id)initWithLinkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 URLIdentifier:(long long)arg2 delegate:(id)arg3 userInterfaceStyleChanged:(id /* block */)arg4;
- (id)lastBaselineAnchor;
- (void)layoutSubviews;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })linkRange;
- (void)linkTextViewTapped:(id)arg1;
- (void)setCurrentUserInterfaceStyle:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLinkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setURLIdentifier:(long long)arg1;
- (void)setUserInterfaceStyleChanged:(id /* block */)arg1;
- (id)tapGestureRecognizer;
- (id)textView;
- (id /* block */)userInterfaceStyleChanged;

@end
