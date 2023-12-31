
@interface MCCertificatePickerCell : PSTableCell {
    UILabel * _expiresByLabel;
    UILabel * _expiryDateLabel;
    UILabel * _issuedByLabel;
    UILabel * _issuerLabel;
}

+ (id)_attributeFont;
+ (float)_attributeLabelSpace;
+ (id)_dateFormatter;
+ (float)defaultCellHeight;

- (void).cxx_destruct;
- (id)_attributeLabelCopy;
- (id)_checkmarkView;
- (id)_labelColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)setChecked:(bool)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIssuer:(id)arg1;

@end
