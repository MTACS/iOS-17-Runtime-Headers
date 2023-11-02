
@interface CNAccountsAndGroupsCell : UICollectionViewListCell <UITextViewDelegate> {
    <CNAccountsAndGroupsCellDelegate> * _delegate;
    CNAccountsAndGroupsItem * _item;
    CNAccountsAndGroupsCellTextView * _titleTextView;
    double  _titleTextViewHeight;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNAccountsAndGroupsCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNAccountsAndGroupsItem *item;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNAccountsAndGroupsCellTextView *titleTextView;
@property (nonatomic) double titleTextViewHeight;

- (void).cxx_destruct;
- (void)applyAccessoryTintColor:(id)arg1;
- (void)applyTextColor:(id)arg1;
- (void)applyTextViewPlaceholderIfNeeded;
- (void)applyTextViewTintColor:(id)arg1;
- (void)beginEditingName;
- (id)delegate;
- (void)endEditingName;
- (bool)isCellEditing;
- (bool)isValidTitle:(id)arg1;
- (id)item;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (double)requiredHeightForTextView:(id)arg1 fittingWidth:(double)arg2;
- (void)resetTextFieldEnabled;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setTextViewEnabled:(bool)arg1;
- (void)setTitleTextView:(id)arg1;
- (void)setTitleTextViewHeight:(double)arg1;
- (void)setupTextViewConstraints;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (bool)textViewShouldBeginEditing:(id)arg1;
- (id)titleTextView;
- (double)titleTextViewHeight;

@end
