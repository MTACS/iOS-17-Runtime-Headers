
@interface DCCredentialPayload : NSObject <NSSecureCoding> {
    NSDate * _createdAt;
    NSString * _docType;
    NSDictionary * _elementIdentifiersByNamespace;
    unsigned long long  _format;
    NSData * _payloadData;
    unsigned long long  _protectionType;
    NSDate * _updatedAt;
    NSDate * _validFrom;
    NSDate * _validUntil;
}

@property (nonatomic, retain) NSDate *createdAt;
@property (nonatomic, retain) NSString *docType;
@property (nonatomic, retain) NSDictionary *elementIdentifiersByNamespace;
@property (nonatomic) unsigned long long format;
@property (nonatomic, retain) NSData *payloadData;
@property (nonatomic) unsigned long long protectionType;
@property (nonatomic, retain) NSDate *updatedAt;
@property (nonatomic, retain) NSDate *validFrom;
@property (nonatomic, retain) NSDate *validUntil;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)createdAt;
- (id)docType;
- (id)elementIdentifiersByNamespace;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)format;
- (id)initWithCoder:(id)arg1;
- (id)payloadData;
- (unsigned long long)protectionType;
- (void)setCreatedAt:(id)arg1;
- (void)setDocType:(id)arg1;
- (void)setElementIdentifiersByNamespace:(id)arg1;
- (void)setFormat:(unsigned long long)arg1;
- (void)setPayloadData:(id)arg1;
- (void)setProtectionType:(unsigned long long)arg1;
- (void)setUpdatedAt:(id)arg1;
- (void)setValidFrom:(id)arg1;
- (void)setValidUntil:(id)arg1;
- (id)updatedAt;
- (id)validFrom;
- (id)validUntil;

@end
