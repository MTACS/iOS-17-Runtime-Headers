
@interface HAPCharacteristicResponseTuple : HMFObject {
    HAPCharacteristic * _characteristic;
    NSError * _error;
    NSData * _notificationContext;
    NSNumber * _stateNumber;
    id  _value;
    NSDate * _valueUpdatedTime;
}

@property (nonatomic, retain) HAPCharacteristic *characteristic;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSData *notificationContext;
@property (nonatomic, retain) NSNumber *stateNumber;
@property (nonatomic, retain) id value;
@property (nonatomic, retain) NSDate *valueUpdatedTime;

+ (id)responseTupleForCharacteristic:(id)arg1 error:(id)arg2;

- (void).cxx_destruct;
- (id)characteristic;
- (id)description;
- (id)error;
- (id)notificationContext;
- (void)setCharacteristic:(id)arg1;
- (void)setError:(id)arg1;
- (void)setNotificationContext:(id)arg1;
- (void)setStateNumber:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueUpdatedTime:(id)arg1;
- (id)stateNumber;
- (id)value;
- (id)valueUpdatedTime;

@end
