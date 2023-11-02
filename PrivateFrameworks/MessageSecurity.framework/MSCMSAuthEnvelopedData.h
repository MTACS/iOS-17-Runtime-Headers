
@interface MSCMSAuthEnvelopedData : NSObject {
    void contentType;
    void dataContent;
    void embeddedContent;
    void encryptedContent;
    void encryptionAlgorithm;
    void originatorCertificates;
    void protectedAttributes;
    void recipients;
    void unprotectedAttributes;
}

@property (nonatomic, retain) MSOID *contentType;
@property (nonatomic, copy) NSData *dataContent;
@property (nonatomic, retain) <MSCMSMessage> *embeddedContent;
@property (nonatomic, retain) MSOID *encryptionAlgorithm;
@property (nonatomic, copy) NSArray *originatorCertificates;
@property (nonatomic, copy) NSArray *protectedAttributes;
@property (nonatomic, copy) NSArray *recipients;
@property (readonly) MSOID *type;
@property (nonatomic, copy) NSArray *unprotectedAttributes;

// Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity

+ (id)decodeMessageSecurityObject:(id)arg1 options:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)addProtectedAttribute:(id)arg1;
- (void)addRecipient:(id)arg1;
- (void)addUnprotectedAttribute:(id)arg1;
- (id)contentType;
- (id)dataContent;
- (id)embeddedContent;
- (id)encodeMessageSecurityObject:(id*)arg1;
- (id)encryptionAlgorithm;
- (id)getAttributesWithOID:(id)arg1;
- (id)init;
- (id)initWithDataContent:(id)arg1 recipient:(id)arg2;
- (id)initWithDataContent:(id)arg1 recipient:(id)arg2 encryptionAlgorithm:(id)arg3;
- (id)initWithEmbeddedContent:(id)arg1 recipient:(id)arg2;
- (id)initWithEmbeddedContent:(id)arg1 recipient:(id)arg2 encryptionAlgorithm:(id)arg3;
- (id)initWithEncryptionAlgorithm:(id)arg1;
- (id)originatorCertificates;
- (id)protectedAttributes;
- (id)recipients;
- (void)setContentType:(id)arg1;
- (void)setContentTypeWithType:(id)arg1;
- (void)setDataContent:(id)arg1;
- (void)setEmbeddedContent:(id)arg1;
- (void)setEncryptionAlgorithm:(id)arg1;
- (void)setOriginatorCertificates:(id)arg1;
- (void)setProtectedAttributes:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setUnprotectedAttributes:(id)arg1;
- (id)type;
- (id)unprotectedAttributes;

// Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore

- (id)type;

@end
