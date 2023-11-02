
@interface _SFTableLinkableFooterView : UITableViewHeaderFooterView <UITextViewDelegate> {
    <_SFTableLinkableFooterViewDelegate> * _delegate;
    NSString * _linkPlaceholderString;
    NSString * _linkReplacementString;
    NSString * _text;
    UITextView * _textView;
    NSLayoutConstraint * _textViewLeadingConstraint;
    NSLayoutConstraint * _textViewTrailingConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFTableLinkableFooterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributedStringTextColor;
- (void)_configureSubviewsAndConstraints;
- (void)_updateAttributedString;
- (id)delegate;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1 linkPlaceholderString:(id)arg2 linkReplacementString:(id)arg3;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)traitCollectionDidChange:(id)arg1;

@end
