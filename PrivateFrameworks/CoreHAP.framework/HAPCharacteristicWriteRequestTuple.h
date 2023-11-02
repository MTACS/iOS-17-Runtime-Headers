
@interface HAPCharacteristicWriteRequestTuple : HMFObject <HAP2CharacteristicTupleValue, NSCopying> {
    NSData * _authorizationData;
    HAPCharacteristic * _characteristic;
    NSData * _contextData;
    NSNumber * _enableEvents;
    NSUUID * _hmdAccessoryUUID;
    bool  _includeResponseValue;
    id  _initialValue;
    bool  _timedWrite;
    id  _value;
    unsigned long long  _writeType;
}

@property (nonatomic, retain) NSData *authorizationData;
@property (nonatomic, retain) HAPCharacteristic *characteristic;
@property (nonatomic, retain) NSData *contextData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *enableEvents;
@property (readonly) unsigned long long hash;
@property (retain) NSUUID *hmdAccessoryUUID;
@property (nonatomic) bool includeResponseValue;
@property (nonatomic, retain) id initialValue;
@property (readonly) Class superclass;
@property (nonatomic) bool timedWrite;
@property (nonatomic, retain) id value;
@property (nonatomic) unsigned long long writeType;

+ (id)writeRequestTupleForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 timedWrite:(bool)arg4 responseValue:(bool)arg5 type:(unsigned long long)arg6;
+ (id)writeRequestTupleForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 timedWrite:(bool)arg4 responseValue:(bool)arg5 type:(unsigned long long)arg6 contextData:(id)arg7;

- (void).cxx_destruct;
- (id)authorizationData;
- (id)characteristic;
- (id)contextData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)enableEvents;
- (id)hmdAccessoryUUID;
- (bool)includeResponseValue;
- (id)initialValue;
- (void)setAuthorizationData:(id)arg1;
- (void)setCharacteristic:(id)arg1;
- (void)setContextData:(id)arg1;
- (void)setEnableEvents:(id)arg1;
- (void)setHmdAccessoryUUID:(id)arg1;
- (void)setIncludeResponseValue:(bool)arg1;
- (void)setInitialValue:(id)arg1;
- (void)setTimedWrite:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setWriteType:(unsigned long long)arg1;
- (bool)timedWrite;
- (id)value;
- (unsigned long long)writeType;

@end
