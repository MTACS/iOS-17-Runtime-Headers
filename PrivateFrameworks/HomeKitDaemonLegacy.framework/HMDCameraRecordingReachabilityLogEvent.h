
@interface HMDCameraRecordingReachabilityLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _accessoryIdentifier;
    bool  _didCreateEventModel;
    double  _offlineDuration;
    unsigned long long  _reachabilityChangeDebounceCount;
    bool  _reachable;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool didCreateEventModel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) double offlineDuration;
@property (readonly) unsigned long long reachabilityChangeDebounceCount;
@property (readonly) bool reachable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessoryIdentifier;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (bool)didCreateEventModel;
- (id)initWithReachability:(bool)arg1 didCreateEventModel:(bool)arg2 reachabilityChangeDebounceCount:(unsigned long long)arg3 offlineDuration:(double)arg4 hapAccessory:(id)arg5;
- (double)offlineDuration;
- (unsigned long long)reachabilityChangeDebounceCount;
- (bool)reachable;

@end
