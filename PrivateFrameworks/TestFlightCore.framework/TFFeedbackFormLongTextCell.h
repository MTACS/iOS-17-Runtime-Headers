
@interface TFFeedbackFormLongTextCell : TFFeedbackFormBaseCell <UITextViewDelegate> {
    TFFeedbackEntryLongText * _longTextEntry;
    UITextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TFFeedbackEntryLongText *longTextEntry;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextView *textView;

+ (double)_adjustedTextViewHeightForCandidateHeight:(double)arg1 font:(id)arg2;
+ (id)_createTextViewFontForTraitCollection:(id)arg1;
+ (struct CGSize { double x1; double x2; })_sizeToFitText:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 inTraitEnvironment:(id)arg3;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_textViewInsetsInTraitEnvironment:(id)arg1;
+ (struct CGSize { double x1; double x2; })sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(struct CGSize { double x1; double x2; })arg3 inTraitEnvironment:(id)arg4;

- (void).cxx_destruct;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;
- (void)_updateCellHeightForTextIfNecessary;
- (void)_updateCellHeightForTextUpdatesInTableView:(id)arg1;
- (void)applyContentsOfEntry:(id)arg1;
- (unsigned long long)displayableDataType;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)longTextEntry;
- (void)prepareForReuse;
- (void)setDisplayedDataString:(id)arg1;
- (void)setLongTextEntry:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (id)textView;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
