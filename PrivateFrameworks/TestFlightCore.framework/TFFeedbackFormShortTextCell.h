
@interface TFFeedbackFormShortTextCell : TFFeedbackFormBaseCell <UITextFieldDelegate> {
    TFFeedbackEntryShortText * _shortTextEntry;
    UITextField * _textField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TFFeedbackEntryShortText *shortTextEntry;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextField *textField;

+ (id)_createTextFieldFontWithTraitCollection:(id)arg1;
+ (struct CGSize { double x1; double x2; })_sizeToFitText:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 inTraitEnvironment:(id)arg3;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_textFieldInsetsInTraitEnvironment:(id)arg1;
+ (struct CGSize { double x1; double x2; })sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(struct CGSize { double x1; double x2; })arg3 inTraitEnvironment:(id)arg4;

- (void).cxx_destruct;
- (void)_configureTextFieldForContentType:(unsigned long long)arg1;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;
- (void)applyContentsOfEntry:(id)arg1;
- (unsigned long long)displayableDataType;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDisplayedDataString:(id)arg1;
- (void)setShortTextEntry:(id)arg1;
- (id)shortTextEntry;
- (id)textField;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
