
@interface IDSQuickRelayMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSNumber * _duration;
    NSNumber * _interfaceType;
    NSNumber * _isInitiator;
    NSNumber * _participantCount;
    NSNumber * _protocolVersion;
    NSNumber * _providerType;
    NSNumber * _resultCode;
    NSNumber * _retryCount;
    NSString * _serviceName;
    NSNumber * _skeEnabled;
    NSString * _subServiceName;
    NSNumber * _subType;
    NSNumber * _transportType;
    NSNumber * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSNumber *duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *interfaceType;
@property (nonatomic, readonly) NSNumber *isInitiator;
@property (readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *participantCount;
@property (nonatomic, readonly) NSNumber *protocolVersion;
@property (nonatomic, readonly) NSNumber *providerType;
@property (nonatomic, readonly) NSNumber *resultCode;
@property (nonatomic, readonly) NSNumber *retryCount;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSNumber *skeEnabled;
@property (nonatomic, readonly) NSString *subServiceName;
@property (nonatomic, readonly) NSNumber *subType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *transportType;
@property (nonatomic, readonly) NSNumber *type;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)duration;
- (id)initWithType:(id)arg1 eventSubType:(id)arg2 duration:(id)arg3 resultCode:(id)arg4 providerType:(id)arg5 transportType:(id)arg6 interfaceType:(id)arg7 skeEnabled:(id)arg8 isInitiator:(id)arg9 protocolVersion:(id)arg10 retryCount:(id)arg11 serviceName:(id)arg12 subServiceName:(id)arg13 participantCount:(id)arg14;
- (id)interfaceType;
- (id)isInitiator;
- (id)name;
- (id)participantCount;
- (id)protocolVersion;
- (id)providerType;
- (id)resultCode;
- (id)retryCount;
- (id)serviceName;
- (id)skeEnabled;
- (id)subServiceName;
- (id)subType;
- (id)transportType;
- (id)type;

@end
