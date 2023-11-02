
@interface IDSDeviceConnectionDurationEventMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSNumber * _clientInitTime;
    NSNumber * _clientOpenSocketCompletionTime;
    NSNumber * _connectionInitTime;
    NSNumber * _daemonOpenSocketCompletionTime;
    NSNumber * _daemonOpenSocketTime;
    NSNumber * _firstPacketReceiveTime;
    NSString * _serviceName;
    bool  _wasSuccessful;
}

@property (nonatomic, readonly) NSNumber *clientInitTime;
@property (nonatomic, readonly) NSNumber *clientOpenSocketCompletionTime;
@property (nonatomic, readonly) NSNumber *connectionInitTime;
@property (nonatomic, readonly) NSNumber *daemonOpenSocketCompletionTime;
@property (nonatomic, readonly) NSNumber *daemonOpenSocketTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSNumber *firstPacketReceiveTime;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, readonly) NSString *serviceName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wasSuccessful;

- (void).cxx_destruct;
- (id)clientInitTime;
- (id)clientOpenSocketCompletionTime;
- (id)connectionInitTime;
- (id)daemonOpenSocketCompletionTime;
- (id)daemonOpenSocketTime;
- (id)dictionaryRepresentation;
- (id)firstPacketReceiveTime;
- (id)initWithService:(id)arg1 wasSuccessful:(bool)arg2 clientInitTime:(id)arg3 clientOpenSocketCompletionTime:(id)arg4 daemonOpenSocketTime:(id)arg5 daemonOpenSocketCompletionTime:(id)arg6 firstPacketReceiveTime:(id)arg7 connectionInitTime:(id)arg8;
- (id)name;
- (id)serviceName;
- (bool)wasSuccessful;

@end
