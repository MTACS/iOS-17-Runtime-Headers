
@interface CKCodeFunctionInvokeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSURL * _clientRuntimeProvidedServiceURL;
    unsigned long long  _dataProtectionType;
    bool  _enqueuedOnContainerService;
    NSString * _functionName;
    bool  _legacyIsLocalBit;
    NSData * _permittedRemoteMeasurement;
    NSArray * _requestLocalEnvelopes;
    NSArray * _requestLocalSerializations;
    NSString * _serviceName;
    bool  _shouldFetchAssetContentInMemory;
    bool  _shouldSendRecordPCSKeys;
    NSString * _trustedTargetDomain;
    NSString * _trustedTargetOID;
}

@property (nonatomic, copy) NSURL *clientRuntimeProvidedServiceURL;
@property (nonatomic) unsigned long long dataProtectionType;
@property (nonatomic) bool enqueuedOnContainerService;
@property (nonatomic, copy) NSString *functionName;
@property (nonatomic) bool legacyIsLocalBit;
@property (nonatomic, copy) NSData *permittedRemoteMeasurement;
@property (nonatomic, copy) NSArray *requestLocalEnvelopes;
@property (nonatomic, copy) NSArray *requestLocalSerializations;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic) bool shouldFetchAssetContentInMemory;
@property (nonatomic) bool shouldSendRecordPCSKeys;
@property (nonatomic, copy) NSString *trustedTargetDomain;
@property (nonatomic, copy) NSString *trustedTargetOID;

+ (void)applyDefaultParametersToServiceURLComponents:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientRuntimeProvidedServiceURL;
- (unsigned long long)dataProtectionType;
- (void)encodeWithCoder:(id)arg1;
- (bool)enqueuedOnContainerService;
- (id)functionName;
- (id)initWithCoder:(id)arg1;
- (bool)legacyIsLocalBit;
- (id)permittedRemoteMeasurement;
- (id)requestLocalEnvelopes;
- (id)requestLocalSerializations;
- (id)serviceName;
- (void)setClientRuntimeProvidedServiceURL:(id)arg1;
- (void)setDataProtectionType:(unsigned long long)arg1;
- (void)setEnqueuedOnContainerService:(bool)arg1;
- (void)setFunctionName:(id)arg1;
- (void)setLegacyIsLocalBit:(bool)arg1;
- (void)setPermittedRemoteMeasurement:(id)arg1;
- (void)setRequestLocalEnvelopes:(id)arg1;
- (void)setRequestLocalSerializations:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setShouldFetchAssetContentInMemory:(bool)arg1;
- (void)setShouldSendRecordPCSKeys:(bool)arg1;
- (void)setTrustedTargetDomain:(id)arg1;
- (void)setTrustedTargetOID:(id)arg1;
- (bool)shouldFetchAssetContentInMemory;
- (bool)shouldSendRecordPCSKeys;
- (id)trustedTargetDomain;
- (id)trustedTargetOID;

@end
