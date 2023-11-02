
@protocol MFSMIMEControlDelegate <NSObject>

@required

- (void)goToSettingsForControl:(MFSMIMEControl *)arg1;
- (NSString *)sendingAddressForControl:(MFSMIMEControl *)arg1;
- (unsigned long long)smimeStatusOptionsForControl:(MFSMIMEControl *)arg1;
- (void)toggleEncryptionForControl:(MFSMIMEControl *)arg1;

@end
