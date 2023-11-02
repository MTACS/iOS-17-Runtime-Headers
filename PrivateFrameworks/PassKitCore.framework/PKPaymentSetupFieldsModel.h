
@interface PKPaymentSetupFieldsModel : NSObject {
    PKPaymentSetupFieldFooter * _footerField;
    NSDictionary * _footerFields;
    NSMutableArray * _paymentSetupFields;
}

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)defaultPaymentSetupProvisioningFields;
+ (id)fakePaymentSetupProvisioningFields;

- (void).cxx_destruct;
- (void)_addField:(id)arg1 result:(id)arg2 destination:(id)arg3 requiresSecureSubmission:(bool)arg4;
- (id)footerFieldForIdentifier:(id)arg1;
- (id)footerPaymentSetupField;
- (bool)hasFooterPaymentSetupField;
- (bool)hasIncompletePaymentSetupFields;
- (id)incompletePaymentSetupFields;
- (id)init;
- (id)initWithPaymentSetupFields:(id)arg1;
- (id)initWithPaymentSetupFields:(id)arg1 footerFields:(id)arg2;
- (void)lockFields;
- (unsigned long long)numberOfPaymentSetupFields;
- (id)odiAttributes;
- (id)paymentSetupFieldAtIndex:(unsigned long long)arg1;
- (id)paymentSetupFieldIdentifiers;
- (id)paymentSetupFieldWithIdentifier:(id)arg1;
- (id)paymentSetupFields;
- (void)prefillDefaultValues;
- (void)prefillValuesWithPaymentCredential:(id)arg1;
- (id)readonlySetupFieldIdentifiers;
- (void)replaceAllPaymentSetupFields:(id)arg1;
- (void)replaceAllPaymentSetupFields:(id)arg1 footerFields:(id)arg2;
- (void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg1;
- (bool)requirementsMetForFieldWithIdentifier:(id)arg1;
- (bool)requirementsMetForVisibleFields;
- (void)resetAllPaymentSetupFieldValues;
- (id)secondaryEntryFieldsModelWithPaymentSetupFields:(id)arg1;
- (id)secureSubmissionValuesForDestination:(id)arg1;
- (id)setupFieldAnalytics;
- (id)submissionValuesForDestination:(id)arg1;
- (void)unhideFieldsWithEnteredValues;
- (void)updateWithPaymentSetupFields:(id)arg1;
- (void)updateWithPaymentSetupFields:(id)arg1 footerFields:(id)arg2;
- (id)visiblePaymentSetupFields;
- (id)visibleSetupFieldIdentifiers;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (double)minimumRequiredWidthForFieldIdentifiers:(id)arg1 withFont:(id)arg2;

@end
