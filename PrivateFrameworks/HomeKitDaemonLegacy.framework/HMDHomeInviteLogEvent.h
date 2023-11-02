
@interface HMDHomeInviteLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    bool  _accepted;
    bool  _declined;
    bool  _expired;
    bool  _filtered;
    bool  _ignored;
    bool  _isFMFDevice;
    bool  _received;
    bool  _suppressedNotification;
}

@property (nonatomic, readonly) bool accepted;
@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool declined;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool expired;
@property (nonatomic, readonly) bool filtered;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) bool ignored;
@property (nonatomic, readonly) bool isFMFDevice;
@property (nonatomic, readonly) bool received;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressedNotification;

+ (id)updateWithInvitationState:(long long)arg1 isFMFDevice:(bool)arg2;
+ (id)updateWithState:(long long)arg1 isFMFDevice:(bool)arg2;

- (bool)accepted;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (bool)declined;
- (bool)expired;
- (bool)filtered;
- (bool)ignored;
- (id)initWithHomeInviteLogEventState:(long long)arg1 isFMFDevice:(bool)arg2;
- (bool)isFMFDevice;
- (bool)received;
- (bool)suppressedNotification;

@end
