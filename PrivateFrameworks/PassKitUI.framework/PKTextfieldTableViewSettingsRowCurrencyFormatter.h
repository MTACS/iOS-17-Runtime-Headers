
@interface PKTextfieldTableViewSettingsRowCurrencyFormatter : PKTextFieldTableViewSettingsRowFormatter {
    NSNumberFormatter * _amountFormatter;
    NSString * _currencyCode;
    NSNumberFormatter * _currencyFormatter;
}

- (void).cxx_destruct;
- (id)formattedValueFromInput:(id)arg1;
- (id)initWithCurrencyCode:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)submissionValueFromFormattedInput:(id)arg1;

@end
