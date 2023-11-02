
@interface HAP2TLVThreadControl : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _formingAllowed;
    HAP2TLVThreadOperationTypeWrapper * _operationType;
    HAP2TLVThreadNetworkCredentials * _threadNetworkCredentials;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *formingAllowed;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAP2TLVThreadOperationTypeWrapper *operationType;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAP2TLVThreadNetworkCredentials *threadNetworkCredentials;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)formingAllowed;
- (id)init;
- (id)initWithOperationType:(id)arg1 threadNetworkCredentials:(id)arg2 formingAllowed:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)operationType;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setFormingAllowed:(id)arg1;
- (void)setOperationType:(id)arg1;
- (void)setThreadNetworkCredentials:(id)arg1;
- (id)threadNetworkCredentials;

@end
