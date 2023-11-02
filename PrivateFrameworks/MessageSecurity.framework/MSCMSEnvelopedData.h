
@interface MSCMSEnvelopedData : NSObject <MSCMSMessage> {
    bool  _contentChanged;
    MSOID * _contentType;
    NSData * _dataContent;
    <MSCMSMessage> * _embeddedContent;
    NSData * _encryptedContent;
    MSAlgorithmIdentifier * _encryptionAlgorithm;
    NSData * _encryptionKey;
    bool  _legacyASN1Encoding;
    NSMutableArray * _originatorCertificates;
    NSArray * _recipients;
    MSOID * _type;
    NSMutableArray * _unprotectedAttributes;
    NSNumber * _version;
}

@property bool contentChanged;
@property (retain) MSOID *contentType;
@property (nonatomic, retain) NSData *dataContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) <MSCMSMessage> *embeddedContent;
@property (retain) NSData *encryptedContent;
@property (retain) MSAlgorithmIdentifier *encryptionAlgorithm;
@property (retain) NSData *encryptionKey;
@property (readonly) unsigned long long hash;
@property bool legacyASN1Encoding;
@property (retain) NSMutableArray *originatorCertificates;
@property (retain) NSArray *recipients;
@property (readonly) Class superclass;
@property (readonly) MSOID *type;
@property (retain) NSMutableArray *unprotectedAttributes;
@property (readonly) NSNumber *version;

+ (id)decodeMessageSecurityObject:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)encodeOriginatorInfoCertificates:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)addRecipient:(id)arg1;
- (bool)addRecipient:(id)arg1 error:(id*)arg2;
- (bool)contentChanged;
- (id)contentType;
- (id)dataContent;
- (id)decryptContent:(id)arg1 error:(id*)arg2;
- (id)embeddedContent;
- (id)encodeMessageSecurityObject:(id*)arg1;
- (id)encryptContent:(id*)arg1;
- (id)encryptDecryptContent:(id)arg1 ccOperation:(unsigned int)arg2 error:(id*)arg3;
- (id)encryptedContent;
- (id)encryptionAlgorithm;
- (id)encryptionKey;
- (id)findBestEncryptionAlgorithmForNewRecipient:(id)arg1;
- (id)getRecipients;
- (id)initWithDataContent:(id)arg1 recipient:(id)arg2;
- (id)initWithDataContent:(id)arg1 recipient:(id)arg2 encryptionAlgorithm:(id)arg3;
- (id)initWithEmbeddedContent:(id)arg1 recipient:(id)arg2;
- (id)initWithEmbeddedContent:(id)arg1 recipient:(id)arg2 encryptionAlgorithm:(id)arg3;
- (bool)legacyASN1Encoding;
- (id)originatorCertificates;
- (id)recipients;
- (void)removeRecipientWithCertificate:(struct __SecCertificate { }*)arg1 error:(id*)arg2;
- (void)removeRecipientWithEmailAddress:(id)arg1 error:(id*)arg2;
- (void)setContentChanged:(bool)arg1;
- (void)setContentType:(id)arg1;
- (void)setDataContent:(id)arg1;
- (void)setEmbeddedContent:(id)arg1;
- (void)setEncryptedContent:(id)arg1;
- (void)setEncryptionAlgorithm:(id)arg1;
- (void)setEncryptionKey:(id)arg1;
- (void)setLegacyASN1Encoding:(bool)arg1;
- (void)setOriginatorCertificates:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setUnprotectedAttributes:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)type;
- (id)unprotectedAttributes;
- (id)version;

@end
