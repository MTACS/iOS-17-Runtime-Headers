
@protocol WBSFormFieldClassificationCorrectorDelegate <NSObject>

@required

- (WBSFormAutoFillCorrectionManager *)formAutoFillCorrectionManagerForFormFieldClassificationCorrector:(WBSFormFieldClassificationCorrector *)arg1;
- (NSString *)formFieldClassificationCorrector:(WBSFormFieldClassificationCorrector *)arg1 bestAddressBookLabelForControlValue:(NSString *)arg2;
- (bool)formFieldClassificationCorrector:(WBSFormFieldClassificationCorrector *)arg1 hasAddressBookDataForAddressBookLabel:(NSString *)arg2;

@end
