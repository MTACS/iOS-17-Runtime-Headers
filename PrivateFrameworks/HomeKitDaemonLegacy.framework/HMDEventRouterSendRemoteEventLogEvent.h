
@interface HMDEventRouterSendRemoteEventLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _destinationDeviceType;
    bool  _isCachedEvent;
    unsigned long long  _responseMessageType;
    unsigned long long  _sourceDeviceType;
    NSString * _topic;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long destinationDeviceType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) bool isCachedEvent;
@property (nonatomic, readonly) unsigned long long responseMessageType;
@property (nonatomic, readonly) unsigned long long sourceDeviceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *topic;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (unsigned long long)destinationDeviceType;
- (id)initWithTopic:(id)arg1 sourceDeviceType:(unsigned long long)arg2 destinationDeviceType:(unsigned long long)arg3 isCachedEvent:(bool)arg4 responseMessageType:(unsigned long long)arg5;
- (bool)isCachedEvent;
- (unsigned long long)responseMessageType;
- (unsigned long long)sourceDeviceType;
- (id)topic;

@end
