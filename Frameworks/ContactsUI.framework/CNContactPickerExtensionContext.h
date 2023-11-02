
@interface CNContactPickerExtensionContext : NSExtensionContext <CNContactPickerHostProtocol, CNContactPickerServiceProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)invalidateSelectionAnimated:(bool)arg1;
- (void)pickerDidCancel;
- (void)pickerDidCompleteWithNewContact:(id)arg1;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;
- (void)setupWithOptions:(id)arg1 readyBlock:(id /* block */)arg2;

@end
