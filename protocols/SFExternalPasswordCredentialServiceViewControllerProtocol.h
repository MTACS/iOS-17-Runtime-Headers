
@protocol SFExternalPasswordCredentialServiceViewControllerProtocol <NSObject>

@required

- (void)autoFillWithCredentialIdentity:(SFCredentialIdentity *)arg1;
- (void)autoFillWithCredentialIdentity:(SFCredentialIdentity *)arg1 pageID:(NSNumber *)arg2 frameID:(NSNumber *)arg3;
- (void)getCredentialForCredentialIdentity:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: SFCredentialIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SFSafariCredential *, bool, NSError *, void*

@end
