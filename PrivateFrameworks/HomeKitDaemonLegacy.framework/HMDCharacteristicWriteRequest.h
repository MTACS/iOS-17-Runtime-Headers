
@interface HMDCharacteristicWriteRequest : HMDCharacteristicRequest {
    NSData * _authorizationData;
    NSData * _contextData;
    NSUUID * _identifier;
    bool  _includeResponseValue;
    unsigned long long  _requestType;
    id  _value;
}

@property (nonatomic, readonly) NSData *authorizationData;
@property (nonatomic, readonly) NSData *contextData;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) bool includeResponseValue;
@property (nonatomic, readonly) unsigned long long requestType;
@property (nonatomic, readonly) id value;

+ (id)logCategory;
+ (id)writeRequestForTransitionFetchWithLightProfile:(id)arg1;
+ (id)writeRequestForTransitionStartWithLightProfile:(id)arg1 naturalLightingEnabled:(bool)arg2 startDate:(id)arg3 type:(unsigned long long)arg4;
+ (id)writeRequestForTransitionStartWithLightProfile:(id)arg1 naturalLightingEnabled:(bool)arg2 startDate:(id)arg3 type:(unsigned long long)arg4 dataSource:(id)arg5;
+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4 type:(unsigned long long)arg5;
+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4 type:(unsigned long long)arg5 includeResponseValue:(bool)arg6;
+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4 type:(unsigned long long)arg5 includeResponseValue:(bool)arg6 contextData:(id)arg7;
+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 type:(unsigned long long)arg4;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)authorizationData;
- (id)contextData;
- (id)identifier;
- (bool)includeResponseValue;
- (id)initWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4 type:(unsigned long long)arg5 includeResponseValue:(bool)arg6 contextData:(id)arg7;
- (unsigned long long)requestType;
- (id)value;

@end
