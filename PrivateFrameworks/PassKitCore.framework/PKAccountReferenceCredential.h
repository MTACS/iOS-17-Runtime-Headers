
@interface PKAccountReferenceCredential : PKPaymentCredential {
    NSString * _accountIdentifier;
    unsigned long long  _feature;
    NSString * _sharingInstanceIdentifier;
}

@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) unsigned long long feature;
@property (nonatomic, retain) NSString *sharingInstanceIdentifier;

- (void).cxx_destruct;
- (bool)_isEqualToCredential:(id)arg1;
- (id)accountIdentifier;
- (unsigned long long)feature;
- (unsigned long long)hash;
- (id)initWithAccountIdentifier:(id)arg1 feature:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)setSharingInstanceIdentifier:(id)arg1;
- (id)sharingInstanceIdentifier;
- (bool)supportsSuperEasyProvisioning;

@end
