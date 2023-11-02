
@interface PKPayLaterIconTextCell : PKPayLaterIconCell {
    unsigned long long  _accessory;
    UIFont * _amountFont;
    NSString * _amountText;
    UIColor * _amountTextColor;
    UIFont * _primaryFont;
    NSString * _primaryText;
    UIColor * _primaryTextColor;
    UIFont * _secondaryFont;
    NSString * _secondaryText;
    UIColor * _secondaryTextColor;
    UIFont * _tertiaryFont;
    NSString * _tertiaryText;
    UIColor * _tertiaryTextColor;
    PKTitleDetailValueTextView * _view;
}

@property (nonatomic) unsigned long long accessory;
@property (nonatomic, retain) UIFont *amountFont;
@property (nonatomic, copy) NSString *amountText;
@property (nonatomic, retain) UIColor *amountTextColor;
@property (nonatomic, retain) UIFont *primaryFont;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, retain) UIColor *primaryTextColor;
@property (nonatomic, retain) UIFont *secondaryFont;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, retain) UIColor *secondaryTextColor;
@property (nonatomic, retain) UIFont *tertiaryFont;
@property (nonatomic, copy) NSString *tertiaryText;
@property (nonatomic, retain) UIColor *tertiaryTextColor;

- (void).cxx_destruct;
- (void)_createViewIfNecessary;
- (unsigned long long)accessory;
- (id)amountFont;
- (id)amountText;
- (id)amountTextColor;
- (void)prepareForReuse;
- (id)primaryFont;
- (id)primaryText;
- (id)primaryTextColor;
- (id)secondaryFont;
- (id)secondaryText;
- (id)secondaryTextColor;
- (void)setAccessory:(unsigned long long)arg1;
- (void)setAmountFont:(id)arg1;
- (void)setAmountText:(id)arg1;
- (void)setAmountTextColor:(id)arg1;
- (void)setPrimaryFont:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setSecondaryFont:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setTertiaryFont:(id)arg1;
- (void)setTertiaryText:(id)arg1;
- (void)setTertiaryTextColor:(id)arg1;
- (id)tertiaryFont;
- (id)tertiaryText;
- (id)tertiaryTextColor;

@end
