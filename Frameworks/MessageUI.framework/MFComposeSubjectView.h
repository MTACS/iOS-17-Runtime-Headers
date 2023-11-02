
@interface MFComposeSubjectView : MFMailComposeHeaderView <NSLayoutManagerDelegate, UITextViewDelegate> {
    bool  _allowsNotifyOption;
    unsigned int  _delegateRespondsToTextChange;
    unsigned int  _delegateRespondsToWillRemoveContent;
    bool  _needsExclusionPathUpdate;
    MFConfirmationButton * _notifyButton;
    bool  _separatorHidden;
    UITextView * _textView;
    double  _trailingButtonMidlineInsetFromLayoutMargin;
}

@property (nonatomic) bool allowsNotifyOption;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFComposeSubjectViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MFConfirmationButton *notifyButton;
@property (getter=isNotifyOptionSelected, nonatomic) bool notifyOptionSelected;
@property (getter=isSeparatorHidden, nonatomic) bool separatorHidden;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly) UITextView *textView;
@property (nonatomic) double trailingButtonMidlineInsetFromLayoutMargin;

- (void).cxx_destruct;
- (bool)_canBecomeFirstResponder;
- (void)_configureNotifyGlyphs;
- (void)_showNotifyButtonIfNeeded;
- (id)_textContainerExclusionPathsWithNotifyButton:(bool)arg1;
- (void)_textInputDidChange:(id)arg1;
- (void)_updateExclusionPathsIfNeeded;
- (void)_updateTextContainerInsets;
- (bool)allowsNotifyOption;
- (bool)becomeFirstResponder;
- (void)dealloc;
- (void)displayMetricsDidChange;
- (bool)enabled;
- (bool)endEditing:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEndEditingText:(id)arg1;
- (bool)isNotifyOptionSelected;
- (bool)isSeparatorHidden;
- (bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(bool)arg3;
- (void)layoutSubviews;
- (id)notifyButton;
- (void)refreshPreferredContentSize;
- (bool)separatorHidden;
- (void)setAllowsNotifyOption:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsExclusionPathUpdate;
- (void)setNotifyOptionSelected:(bool)arg1;
- (void)setSeparatorHidden:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTrailingButtonMidlineInsetFromLayoutMargin:(double)arg1;
- (id)text;
- (id)textView;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (double)trailingButtonMidlineInsetFromLayoutMargin;
- (void)traitCollectionDidChange:(id)arg1;

@end
