
@interface HMDRegionStateCorrectnessLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    bool  _firstAccessoryReachable;
    bool  _isStateCorrect;
    bool  _regionStateAtHome;
    bool  _regionStateNearByHome;
    bool  _regionStateUnknown;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool firstAccessoryReachable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) bool isStateCorrect;
@property (readonly) bool regionStateAtHome;
@property (readonly) bool regionStateNearByHome;
@property (readonly) bool regionStateUnknown;
@property (readonly) Class superclass;

+ (id)updateWithFirstAccessory:(long long)arg1 nearbyHome:(long long)arg2;
+ (id)updateWithRegion:(long long)arg1 nearbyHome:(long long)arg2 accessoryReachable:(bool)arg3;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (bool)firstAccessoryReachable;
- (id)initWithReason:(unsigned long long)arg1 firstAccessoryReachable:(bool)arg2 regionStateAtHome:(long long)arg3 regionStateNearByHome:(long long)arg4 isStateCorrect:(bool)arg5;
- (bool)isStateCorrect;
- (bool)regionStateAtHome;
- (bool)regionStateNearByHome;
- (bool)regionStateUnknown;

@end
