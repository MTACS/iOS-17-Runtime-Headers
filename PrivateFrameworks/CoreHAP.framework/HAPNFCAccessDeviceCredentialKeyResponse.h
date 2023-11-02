
@interface HAPNFCAccessDeviceCredentialKeyResponse : NSObject <HAPTLVProtocol, NSCopying> {
    NSData * _identifier;
    NSData * _issuerKeyIdentifier;
    HAPNFCAccessResponseStatusWrapper * _statusCode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *identifier;
@property (nonatomic, retain) NSData *issuerKeyIdentifier;
@property (nonatomic, retain) HAPNFCAccessResponseStatusWrapper *statusCode;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 issuerKeyIdentifier:(id)arg2 statusCode:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)issuerKeyIdentifier;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIssuerKeyIdentifier:(id)arg1;
- (void)setStatusCode:(id)arg1;
- (id)statusCode;

@end
