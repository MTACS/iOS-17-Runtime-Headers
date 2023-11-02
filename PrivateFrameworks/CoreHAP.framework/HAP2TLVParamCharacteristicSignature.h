
@interface HAP2TLVParamCharacteristicSignature : NSObject <HAPTLVProtocol, NSCopying> {
    NSData * _bluetoothFormat;
    HAP2TLVCharacteristicPropertiesWrapper * _characteristicProperties;
    NSData * _characteristicType;
    HAPTLVUnsignedNumberValue * _instanceID;
    NSData * _stepValue;
    NSString * _userDescription;
    NSData * _validRange;
    NSData * _validValues;
    NSData * _validValuesRange;
}

@property (nonatomic, retain) NSData *bluetoothFormat;
@property (nonatomic, retain) HAP2TLVCharacteristicPropertiesWrapper *characteristicProperties;
@property (nonatomic, retain) NSData *characteristicType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *instanceID;
@property (nonatomic, retain) NSData *stepValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *userDescription;
@property (nonatomic, retain) NSData *validRange;
@property (nonatomic, retain) NSData *validValues;
@property (nonatomic, retain) NSData *validValuesRange;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)bluetoothFormat;
- (id)characteristicProperties;
- (id)characteristicType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithInstanceID:(id)arg1 characteristicType:(id)arg2 characteristicProperties:(id)arg3 userDescription:(id)arg4 bluetoothFormat:(id)arg5 validRange:(id)arg6 stepValue:(id)arg7 validValues:(id)arg8 validValuesRange:(id)arg9;
- (id)instanceID;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setBluetoothFormat:(id)arg1;
- (void)setCharacteristicProperties:(id)arg1;
- (void)setCharacteristicType:(id)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setStepValue:(id)arg1;
- (void)setUserDescription:(id)arg1;
- (void)setValidRange:(id)arg1;
- (void)setValidValues:(id)arg1;
- (void)setValidValuesRange:(id)arg1;
- (id)stepValue;
- (id)userDescription;
- (id)validRange;
- (id)validValues;
- (id)validValuesRange;

@end
