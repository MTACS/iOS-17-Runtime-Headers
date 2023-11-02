
@interface HMDCharacteristicUpdateTuple : HMFObject {
    bool  _broadcast;
    HMDCharacteristic * _characteristic;
    HMDCharacteristicResponse * _characteristicResponse;
    id  _value;
}

@property (getter=isBroadcast, nonatomic, readonly) bool broadcast;
@property (nonatomic, readonly) HMDCharacteristic *characteristic;
@property (nonatomic, retain) HMDCharacteristicResponse *characteristicResponse;
@property (nonatomic, readonly) id updatedValue;
@property (nonatomic, retain) id value;

+ (id)characteristicUpdateTuplesWithCharacteristics:(id)arg1 isBroadcast:(bool)arg2;

- (void).cxx_destruct;
- (id)characteristic;
- (id)characteristicResponse;
- (id)description;
- (id)initWithCharacteristic:(id)arg1 updatedValue:(id)arg2 isBroadcast:(bool)arg3;
- (bool)isBroadcast;
- (void)setCharacteristicResponse:(id)arg1;
- (void)setValue:(id)arg1;
- (id)updatedValue;
- (id)value;

@end
