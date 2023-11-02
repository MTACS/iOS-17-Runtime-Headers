
@interface HMDEventRouterEventSizeLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    bool  _isCached;
    unsigned long long  _size;
    NSString * _topic;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) bool isCached;
@property (nonatomic, readonly) unsigned long long size;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *topic;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithTopic:(id)arg1 eventSize:(unsigned long long)arg2 isCached:(bool)arg3;
- (bool)isCached;
- (unsigned long long)size;
- (id)topic;

@end
