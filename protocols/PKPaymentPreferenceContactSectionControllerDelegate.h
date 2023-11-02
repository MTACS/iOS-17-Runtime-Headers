
@protocol PKPaymentPreferenceContactSectionControllerDelegate

@required

- (void)presentMeCardAlertControllerWithContact:(void *)arg1 contactKey:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 7: CNContact *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showAddressEditorForContactItem:(PKPaymentPreferenceContactOptionListItem *)arg1 inSectionController:(PKPaymentPreferenceContactSectionController *)arg2;
- (void)showAddressPickerForPreference:(PKPaymentPreferenceContact *)arg1 inSectionController:(PKPaymentPreferenceContactSectionController *)arg2;
- (void)showContactsPickerForPreference:(PKPaymentPreferenceContact *)arg1 inSectionController:(PKPaymentPreferenceContactSectionController *)arg2;
- (void)startInlineEditingForContactItem:(PKPaymentPreferenceContactOptionListItem *)arg1 inSectionController:(PKPaymentPreferenceContactSectionController *)arg2;

@end
