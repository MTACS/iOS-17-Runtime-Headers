
@protocol MFAddressBookClient <NSObject>

@required

- (void)addressBookManager:(MFAddressBookManager *)arg1 addressBookDidChange:(void*)arg2;
- (void)addressBookPreferencesChangedForAddressBookManager:(MFAddressBookManager *)arg1;

@end
