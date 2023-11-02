
@interface HAPNFCAccessSupportedConfiguration : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _maximumNumberOfIssuerKeys;
    HAPTLVUnsignedNumberValue * _maximumNumberOfSuspendedDeviceCredentialKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *maximumNumberOfIssuerKeys;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *maximumNumberOfSuspendedDeviceCredentialKeys;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithMaximumNumberOfIssuerKeys:(id)arg1 maximumNumberOfSuspendedDeviceCredentialKeys:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)maximumNumberOfIssuerKeys;
- (id)maximumNumberOfSuspendedDeviceCredentialKeys;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setMaximumNumberOfIssuerKeys:(id)arg1;
- (void)setMaximumNumberOfSuspendedDeviceCredentialKeys:(id)arg1;

@end
