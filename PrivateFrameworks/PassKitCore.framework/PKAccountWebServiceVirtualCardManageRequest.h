
@interface PKAccountWebServiceVirtualCardManageRequest : PKAccountWebServiceRequest <NSSecureCoding> {
    NSString * _accountIdentifier;
    long long  _action;
    NSURL * _baseURL;
    PKVirtualCardEncryptionFields * _encryptionFields;
    NSString * _virtualCardIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSString *virtualCardIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAction:(long long)arg1 withQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)setBaseURL:(id)arg1;
- (void)setVirtualCardIdentifier:(id)arg1;
- (id)virtualCardIdentifier;

@end
