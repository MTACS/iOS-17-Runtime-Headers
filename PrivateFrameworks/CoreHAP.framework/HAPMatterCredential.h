
@interface HAPMatterCredential : NSObject <HAPTLVProtocol, NSCopying> {
    HAPDeviceCredentialKey * _deviceCredentialKey;
    HAPIssuerKey * _issuerKey;
    HAPReaderKey * _readerKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HAPDeviceCredentialKey *deviceCredentialKey;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPIssuerKey *issuerKey;
@property (nonatomic, retain) HAPReaderKey *readerKey;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceCredentialKey;
- (id)init;
- (id)initWithIssuerKey:(id)arg1 readerKey:(id)arg2 deviceCredentialKey:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)issuerKey;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)readerKey;
- (id)serializeWithError:(id*)arg1;
- (void)setDeviceCredentialKey:(id)arg1;
- (void)setIssuerKey:(id)arg1;
- (void)setReaderKey:(id)arg1;

@end
