
@interface HMDAppleMediaAccessoryDailySetRoomEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _currentRoom;
    NSString * _previousRoom;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *currentRoom;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly, copy) NSString *previousRoom;
@property (readonly) Class superclass;

+ (id)filterToAllowedRoomName:(id)arg1;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)currentRoom;
- (id)initWithCurrentRoom:(id)arg1 previousRoom:(id)arg2;
- (id)previousRoom;

@end
