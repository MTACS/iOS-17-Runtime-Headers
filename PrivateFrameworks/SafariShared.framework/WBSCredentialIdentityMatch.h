
@interface WBSCredentialIdentityMatch : NSObject <WBSFormAutoFillItem> {
    SFCredentialIdentity * _credentialIdentity;
    NSExtension * _extension;
    SFSafariCredential * _resolvedCredential;
}

@property (nonatomic, readonly) NSString *completion;
@property (nonatomic, readonly) SFCredentialIdentity *credentialIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSExtension *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SFSafariCredential *resolvedCredential;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)completion;
- (id)credentialIdentity;
- (id)extension;
- (id)initWithCredentialIdentity:(id)arg1 extension:(id)arg2;
- (id)resolvedCredential;
- (id)resolvedMatchWithCredential:(id)arg1;

@end
