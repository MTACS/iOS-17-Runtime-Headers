
@interface HMMTRCharacteristicWriteRequestTuple : HMFObject {
    unsigned long long  _characteristicHandlingType;
    HAPCharacteristicWriteRequestTuple * _primary;
    HAPCharacteristicWriteRequestTuple * _secondary;
}

@property (nonatomic) unsigned long long characteristicHandlingType;
@property (nonatomic, retain) HAPCharacteristicWriteRequestTuple *primary;
@property (nonatomic, retain) HAPCharacteristicWriteRequestTuple *secondary;

- (void).cxx_destruct;
- (unsigned long long)characteristicHandlingType;
- (id)initWithRequestTuple:(id)arg1;
- (id)primary;
- (id)secondary;
- (void)setCharacteristicHandlingType:(unsigned long long)arg1;
- (void)setPrimary:(id)arg1;
- (void)setSecondary:(id)arg1;

@end
