
@protocol HMDWalletPassLibraryDelegate <NSObject>

@required

- (void)passLibrary:(id <HMDWalletPassLibrary>)arg1 didAddPassWithSerialNumber:(NSString *)arg2 typeIdentifier:(NSString *)arg3;
- (void)passLibrary:(id <HMDWalletPassLibrary>)arg1 didRemovePassWithSerialNumber:(NSString *)arg2 typeIdentifier:(NSString *)arg3;

@end
