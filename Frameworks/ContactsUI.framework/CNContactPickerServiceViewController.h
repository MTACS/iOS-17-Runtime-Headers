
@interface CNContactPickerServiceViewController : CNContactPickerContentViewController <CNContactPickerContentDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_filteredContact:(id)arg1 withKeys:(id)arg2;
- (id)_filteredProperty:(id)arg1;
- (void)_logPrivacyAccountingAccessEvent;
- (id)init;
- (void)pickerDidCancel;
- (void)pickerDidCompleteWithNewContact:(id)arg1;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;

@end
