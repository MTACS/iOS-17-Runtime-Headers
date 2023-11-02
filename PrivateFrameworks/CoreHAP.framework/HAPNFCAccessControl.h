
@interface HAPNFCAccessControl : NSObject <HAPTLVProtocol, NSCopying> {
    HAPNFCAccessDeviceCredentialKeyRequest * _deviceCredentialKeyRequest;
    HAPNFCAccessDeviceCredentialKeyResponse * _deviceCredentialKeyResponse;
    HAPNFCAccessIssuerKeyRequest * _issuerKeyRequest;
    HAPNFCAccessIssuerKeyResponse * _issuerKeyResponse;
    HAPNFCAccessOperationTypeWrapper * _operationType;
    HAPNFCAccessReaderKeyRequest * _readerKeyRequest;
    HAPNFCAccessReaderKeyResponse * _readerKeyResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HAPNFCAccessDeviceCredentialKeyRequest *deviceCredentialKeyRequest;
@property (nonatomic, retain) HAPNFCAccessDeviceCredentialKeyResponse *deviceCredentialKeyResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPNFCAccessIssuerKeyRequest *issuerKeyRequest;
@property (nonatomic, retain) HAPNFCAccessIssuerKeyResponse *issuerKeyResponse;
@property (nonatomic, retain) HAPNFCAccessOperationTypeWrapper *operationType;
@property (nonatomic, retain) HAPNFCAccessReaderKeyRequest *readerKeyRequest;
@property (nonatomic, retain) HAPNFCAccessReaderKeyResponse *readerKeyResponse;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceCredentialKeyRequest;
- (id)deviceCredentialKeyResponse;
- (id)init;
- (id)initWithOperationType:(id)arg1 issuerKeyRequest:(id)arg2 issuerKeyResponse:(id)arg3 deviceCredentialKeyRequest:(id)arg4 deviceCredentialKeyResponse:(id)arg5 readerKeyRequest:(id)arg6 readerKeyResponse:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)issuerKeyRequest;
- (id)issuerKeyResponse;
- (id)operationType;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)readerKeyRequest;
- (id)readerKeyResponse;
- (id)serializeWithError:(id*)arg1;
- (void)setDeviceCredentialKeyRequest:(id)arg1;
- (void)setDeviceCredentialKeyResponse:(id)arg1;
- (void)setIssuerKeyRequest:(id)arg1;
- (void)setIssuerKeyResponse:(id)arg1;
- (void)setOperationType:(id)arg1;
- (void)setReaderKeyRequest:(id)arg1;
- (void)setReaderKeyResponse:(id)arg1;

@end
