
@interface HMMTRProtocolOperation : NSObject <HMFLogging> {
    HAPCharacteristic * _characteristic;
    HMMTRClusterDescription * _characteristicDescription;
    NSDictionary * _clusterIDCharacteristicMap;
    MTRBaseDevice * _device;
    unsigned long long  _endpoint;
    unsigned long long  _handlingType;
    MTRDevice * _matterDevice;
    HMMTRDeviceTopology * _topology;
    unsigned long long  _type;
    id  _value;
    HAPCharacteristicWriteRequestTuple * _writePrimaryRequestTuple;
    HAPCharacteristicWriteRequestTuple * _writeSecondaryRequestTuple;
}

@property (nonatomic, retain) HAPCharacteristic *characteristic;
@property (nonatomic, retain) HMMTRClusterDescription *characteristicDescription;
@property (nonatomic, readonly) NSDictionary *clusterIDCharacteristicMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MTRBaseDevice *device;
@property (nonatomic) unsigned long long endpoint;
@property (nonatomic) unsigned long long handlingType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MTRDevice *matterDevice;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMMTRDeviceTopology *topology;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) id value;
@property (retain) HAPCharacteristicWriteRequestTuple *writePrimaryRequestTuple;
@property (retain) HAPCharacteristicWriteRequestTuple *writeSecondaryRequestTuple;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)characteristic;
- (id)characteristicDescription;
- (id)clusterIDCharacteristicMap;
- (id)device;
- (unsigned long long)endpoint;
- (unsigned long long)handlingType;
- (id)initWithOperationOfType:(unsigned long long)arg1 characteristic:(id)arg2 device:(id)arg3 clusterIDCharacteristicMap:(id)arg4;
- (id)initWithOperationOfType:(unsigned long long)arg1 characteristic:(id)arg2 device:(id)arg3 primaryArgument:(id)arg4 clusterIDCharacteristicMap:(id)arg5;
- (id)initWithOperationOfType:(unsigned long long)arg1 characteristic:(id)arg2 matterDevice:(id)arg3 clusterIDCharacteristicMap:(id)arg4;
- (id)initWithOperationOfType:(unsigned long long)arg1 characteristicHandlingType:(unsigned long long)arg2 targetCharacteristic:(id)arg3 targetValue:(id)arg4 device:(id)arg5 clusterIDCharacteristicMap:(id)arg6;
- (id)initWithOperationOfType:(unsigned long long)arg1 characteristicHandlingType:(unsigned long long)arg2 targetCharacteristic:(id)arg3 targetValue:(id)arg4 matterDevice:(id)arg5 clusterIDCharacteristicMap:(id)arg6;
- (id)matterDevice;
- (void)setCharacteristic:(id)arg1;
- (void)setCharacteristicDescription:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setEndpoint:(unsigned long long)arg1;
- (void)setHandlingType:(unsigned long long)arg1;
- (void)setTopology:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (void)setWritePrimaryRequestTuple:(id)arg1;
- (void)setWriteSecondaryRequestTuple:(id)arg1;
- (id)topology;
- (unsigned long long)type;
- (id)value;
- (id)writePrimaryRequestTuple;
- (id)writeSecondaryRequestTuple;

@end
