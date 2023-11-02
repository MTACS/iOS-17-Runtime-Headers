
@interface MCCertificatePickerController : PSListItemsController

- (void)_setCellPropertiesOnSpecifier:(id)arg1 forCertificate:(struct __SecCertificate { }*)arg2;
- (id)navigationTitle;
- (void)setRowToSelect;
- (id)specifiers;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end
