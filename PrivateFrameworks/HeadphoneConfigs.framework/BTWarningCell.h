
@interface BTWarningCell : PSTableCell <UITextViewDelegate> {
    UITextView * _bodyTextView;
    NSArray * _constraints;
    UITextView * _titleTextView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)updateConstraints;

@end
