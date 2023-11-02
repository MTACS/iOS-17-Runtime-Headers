
@interface HMDAggregateXPCMessageCountersLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _coreAnalyticsEventName;
    NSNumber * _count;
    bool  _isPrimaryResident;
    NSString * _messageName;
    NSString * _peerInformation;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (nonatomic, readonly) NSNumber *count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) bool isPrimaryResident;
@property (nonatomic, readonly) NSString *messageName;
@property (nonatomic, readonly) NSString *peerInformation;
@property (readonly) Class superclass;

+ (id)xpcAcceptedCountersLogEventWithPeerInformation:(id)arg1 messageName:(id)arg2 isPrimaryResident:(bool)arg3 count:(id)arg4;
+ (id)xpcSentCountersLogEventWithPeerInformation:(id)arg1 messageName:(id)arg2 isPrimaryResident:(bool)arg3 count:(id)arg4;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)count;
- (id)initWithEventName:(id)arg1 peerInformation:(id)arg2 messageName:(id)arg3 isPrimaryResident:(bool)arg4 count:(id)arg5;
- (bool)isPrimaryResident;
- (id)messageName;
- (id)peerInformation;

@end
