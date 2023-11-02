
@protocol VSPrivacyServiceProtocol <NSObject>

@required

- (void)preflightCheckForProcessIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)requestAccessForAuditToken:(void *)arg1 processIdentifier:(void *)arg2 identityProviderDisplayName:(void *)arg3 providerIsSupported:(void *)arg4 identityProviderID:(void *)arg5 allowUI:(void *)arg6 completionHandler:(void *)arg7; // needs 7 arg types, found 13: struct { unsigned int x1[8]; }, int, NSString *, bool, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, VSOptional *, void*

@end
