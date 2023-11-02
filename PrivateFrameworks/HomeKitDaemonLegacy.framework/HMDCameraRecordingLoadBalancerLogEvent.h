
@interface HMDCameraRecordingLoadBalancerLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSNumber * _numberOfResidents;
    NSNumber * _numberOfRetries;
    NSNumber * _remainingNumberOfJobSlots;
    NSString * _selectedResidentDeviceType;
    bool  _selectedResidentHasActiveSessionWithCamera;
    NSNumber * _selectedResidentJobSlots;
    NSNumber * _selectedResidentNumberOfActiveStreams;
    NSNumber * _selectedResidentPartialJobSlots;
    NSNumber * _selectedResidentSystemResourceUsageLevel;
    NSNumber * _totalNumberOfJobSlots;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly, copy) NSNumber *numberOfResidents;
@property (readonly, copy) NSNumber *numberOfRetries;
@property (readonly, copy) NSNumber *remainingNumberOfJobSlots;
@property (readonly, copy) NSString *selectedResidentDeviceType;
@property (readonly) bool selectedResidentHasActiveSessionWithCamera;
@property (readonly, copy) NSNumber *selectedResidentJobSlots;
@property (readonly, copy) NSNumber *selectedResidentNumberOfActiveStreams;
@property (readonly, copy) NSNumber *selectedResidentPartialJobSlots;
@property (readonly, copy) NSNumber *selectedResidentSystemResourceUsageLevel;
@property (readonly) Class superclass;
@property (readonly, copy) NSNumber *totalNumberOfJobSlots;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithNumberOfResidents:(id)arg1 numberOfRetries:(id)arg2 totalNumberOfJobSlots:(id)arg3 remainingNumberOfJobSlots:(id)arg4 selectedResidentDeviceType:(id)arg5 selectedResidentNumberOfActiveStreams:(id)arg6 selectedResidentSystemResourceUsageLevel:(id)arg7 selectedResidentJobSlots:(id)arg8 selectedResidentPartialJobSlots:(id)arg9 selectedResidentHasActiveSessionWithCamera:(bool)arg10;
- (id)numberOfResidents;
- (id)numberOfRetries;
- (id)remainingNumberOfJobSlots;
- (id)selectedResidentDeviceType;
- (bool)selectedResidentHasActiveSessionWithCamera;
- (id)selectedResidentJobSlots;
- (id)selectedResidentNumberOfActiveStreams;
- (id)selectedResidentPartialJobSlots;
- (id)selectedResidentSystemResourceUsageLevel;
- (id)totalNumberOfJobSlots;

@end
