
@interface ASAuthorizationWebBrowserPlatformPublicKeyCredential : NSObject {
    WBSWebBrowserPasskey * _corePasskey;
}

@property (nonatomic, readonly) WBSWebBrowserPasskey *corePasskey;
@property (nonatomic, readonly) NSData *credentialID;
@property (nonatomic, readonly) NSString *customTitle;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *providerName;
@property (nonatomic, readonly) NSString *relyingParty;
@property (nonatomic, readonly) NSData *userHandle;

- (void).cxx_destruct;
- (id)corePasskey;
- (id)credentialID;
- (id)customTitle;
- (id)initWithCorePasskey:(id)arg1;
- (id)name;
- (id)providerName;
- (id)relyingParty;
- (id)userHandle;

@end
