
@protocol SFPasswordPickerServiceViewControllerProtocol <NSObject>

@required

- (void)authenticateToPresentInPopover:(void *)arg1 savedAccountContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, WBSSavedAccountContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setAuthenticationGracePeriod:(double)arg1;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(NSArray *)arg1;
- (void)setPageID:(NSNumber *)arg1 frameID:(NSNumber *)arg2 credentialType:(NSString *)arg3;
- (void)setRemoteAppID:(NSString *)arg1;
- (void)setRemoteLocalizedAppName:(NSString *)arg1;
- (void)setRemoteUnlocalizedAppName:(NSString *)arg1;
- (void)setSystemAutoFillDocumentTraits:(RTIDocumentTraits *)arg1;
- (void)setWebViewURL:(NSURL *)arg1;

@end
