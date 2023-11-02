
@interface HMDRemoteDeviceReachabilityChangeLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    bool  _reachable;
    unsigned long long  _reason;
    bool  _targetSupportsIDSPresence;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) bool reachable;
@property (readonly) unsigned long long reason;
@property (readonly) Class superclass;
@property (readonly) bool targetSupportsIDSPresence;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithReason:(unsigned long long)arg1 reachable:(bool)arg2 targetSupportsIDSPresence:(bool)arg3;
- (bool)reachable;
- (unsigned long long)reason;
- (bool)targetSupportsIDSPresence;

@end
