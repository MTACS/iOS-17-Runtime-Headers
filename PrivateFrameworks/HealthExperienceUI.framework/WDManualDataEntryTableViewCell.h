
@interface WDManualDataEntryTableViewCell : UITableViewCell <UITextFieldDelegate> {
    UIFont * _bodyFont;
    unsigned long long  _dataEntryType;
    NSString * _decimalSeparator;
    <WDManualDataEntryTableViewCellDelegate> * _delegate;
    UILabel * _displayNameLabel;
    NSArray * _displayNameLabelConstraints;
    HKDisplayType * _displayType;
    UIView * _inputView;
    NSNumberFormatter * _integerNumberFormatter;
    NSArray * _largeTextLayoutConstraints;
    NSLayoutConstraint * _largeTextValueFieldToUnitLabelSpacingConstraint;
    NSString * _lastValidSanitizedText;
    NSArray * _regularLayoutConstraints;
    bool  _shouldHighlightWhenEditing;
    UILabel * _unitLabel;
    UITextField * _valueField;
}

@property (nonatomic, retain) UIFont *bodyFont;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WDManualDataEntryTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldHighlightWhenEditing;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (void)_localeDidChange:(id)arg1;
- (id)_removeDecimalSeparatorsFromText:(id)arg1;
- (id)_sanitizedTextFieldText:(id)arg1;
- (void)_setupConstraints;
- (void)_setupIntegerNumberFormatterIfNeeded;
- (void)_setupUIWithDisplayName:(id)arg1 unitName:(id)arg2;
- (void)_updateDecimalSeparator;
- (void)_updateDisplayNameLabelConstraints;
- (void)_updateFont;
- (void)_updateForCurrentSizeCategory;
- (void)_valueFieldDidChange:(id)arg1;
- (void)beginEditing;
- (id)bodyFont;
- (void)dealloc;
- (id)delegate;
- (id)displayName;
- (id)displayType;
- (void)endEditing;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 unitName:(id)arg2 dataEntryType:(unsigned long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)inputView;
- (void)setBodyFont:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayType:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setShouldHighlightWhenEditing:(bool)arg1;
- (void)setValue:(id)arg1;
- (bool)shouldHighlightWhenEditing;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)value;

@end
