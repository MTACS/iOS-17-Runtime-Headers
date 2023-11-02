
@interface HMDSelectedSleepConfigurationTLV : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _backoffTime;
    HMDSleepConfigurationOperationStatusWrapper * _operationStatus;
    HMDSleepConfigurationOperationTypeWrapper * _operationType;
}

@property (nonatomic, retain) HAPTLVUnsignedNumberValue *backoffTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDSleepConfigurationOperationStatusWrapper *operationStatus;
@property (nonatomic, retain) HMDSleepConfigurationOperationTypeWrapper *operationType;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)backoffTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithOperationType:(id)arg1 operationStatus:(id)arg2 backoffTime:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)operationStatus;
- (id)operationType;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setBackoffTime:(id)arg1;
- (void)setOperationStatus:(id)arg1;
- (void)setOperationType:(id)arg1;

@end
