
@interface DCPresentmentProposal : NSObject <NSSecureCoding> {
    NSData * _authACL;
    NSString * _credentialIdentifier;
    NSString * _docType;
    NSDictionary * _elements;
    NSString * _partition;
    NSString * _presentmentKeyIdentifier;
    NSData * _presentmentPublicKey;
    NSData * _readerAuthCertificateData;
    DCPresentmentProposalReaderMetadata * _readerMetadata;
}

@property (nonatomic, retain) NSData *authACL;
@property (nonatomic, retain) NSString *credentialIdentifier;
@property (nonatomic, retain) NSString *docType;
@property (nonatomic, retain) NSDictionary *elements;
@property (nonatomic, retain) NSString *partition;
@property (nonatomic, retain) NSString *presentmentKeyIdentifier;
@property (nonatomic, retain) NSData *presentmentPublicKey;
@property (nonatomic, retain) NSData *readerAuthCertificateData;
@property (nonatomic, readonly) NSString *readerIdentifier;
@property (nonatomic, retain) DCPresentmentProposalReaderMetadata *readerMetadata;
@property (nonatomic, readonly) NSString *readerOrganization;
@property (nonatomic, readonly) NSString *readerOrganizationalUnit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authACL;
- (id)credentialIdentifier;
- (id)description;
- (id)docType;
- (id)elements;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentialIdentifier:(id)arg1 presentmentKeyIdentifier:(id)arg2 presentmentPublicKey:(id)arg3 partition:(id)arg4 docType:(id)arg5 elements:(id)arg6 authACL:(id)arg7 readerAuthCertificateData:(id)arg8 readerMetadata:(id)arg9;
- (id)partition;
- (id)presentmentKeyIdentifier;
- (id)presentmentPublicKey;
- (id)readerAuthCertificateData;
- (id)readerIdentifier;
- (id)readerMetadata;
- (id)readerOrganization;
- (id)readerOrganizationalUnit;
- (void)setAuthACL:(id)arg1;
- (void)setCredentialIdentifier:(id)arg1;
- (void)setDocType:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setPartition:(id)arg1;
- (void)setPresentmentKeyIdentifier:(id)arg1;
- (void)setPresentmentPublicKey:(id)arg1;
- (void)setReaderAuthCertificateData:(id)arg1;
- (void)setReaderMetadata:(id)arg1;

@end
