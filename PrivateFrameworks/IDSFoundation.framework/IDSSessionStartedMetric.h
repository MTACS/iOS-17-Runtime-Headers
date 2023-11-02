
@interface IDSSessionStartedMetric : NSObject <CUTCoreAnalyticsMetric> {
    unsigned int  _clientType;
    NSString * _guid;
    NSNumber * _protocolVersionNumber;
    NSString * _serviceName;
}

@property (nonatomic, readonly) unsigned int clientType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *guid;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *protocolVersionNumber;
@property (nonatomic, readonly) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned int)clientType;
- (id)dictionaryRepresentation;
- (id)guid;
- (id)initWithGuid:(id)arg1 protocolVersionNumber:(id)arg2 serviceName:(id)arg3 clientType:(unsigned int)arg4;
- (id)name;
- (id)protocolVersionNumber;
- (id)serviceName;

@end
