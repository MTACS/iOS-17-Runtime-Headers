
@interface PKPendingAccountCredential : PKPendingProvisioning <NSSecureCoding> {
    NSString * _accountIdentifier;
    unsigned long long  _feature;
    NSString * _sharingInstanceIdentifier;
}

@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic, readonly) PKAccountReferenceCredential *credential;
@property (nonatomic) unsigned long long feature;
@property (nonatomic, retain) NSString *sharingInstanceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)credential;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)feature;
- (id)init;
- (id)initForDatabase;
- (id)initWithAccountCredential:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1 feature:(unsigned long long)arg2 sharingInstanceIdentifier:(id)arg3;
- (id)initWithAccountReferenceCredential:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)representsCredential:(id)arg1;
- (bool)representsPass:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setFeature:(unsigned long long)arg1;
- (void)setSharingInstanceIdentifier:(id)arg1;
- (id)sharingInstanceIdentifier;
- (id)type;

@end
