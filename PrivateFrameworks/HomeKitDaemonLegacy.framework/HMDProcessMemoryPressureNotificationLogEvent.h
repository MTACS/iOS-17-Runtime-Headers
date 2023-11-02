
@interface HMDProcessMemoryPressureNotificationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _dataSyncState;
    NSString * _processMemoryState;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (nonatomic, readonly) NSString *dataSyncState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) NSString *processMemoryState;
@property (readonly) Class superclass;

+ (id)createEventWithProcessMemoryState:(id)arg1 dataSyncState:(id)arg2;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)dataSyncState;
- (id)initWithProcessMemoryState:(id)arg1 dataSyncState:(id)arg2;
- (id)processMemoryState;

@end
