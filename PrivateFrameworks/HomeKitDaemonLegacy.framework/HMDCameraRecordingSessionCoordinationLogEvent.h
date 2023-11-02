
@interface HMDCameraRecordingSessionCoordinationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _retryCount;
    bool  _usingRemoteDeviceAnalysisNode;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property unsigned long long retryCount;
@property (readonly) Class superclass;
@property (getter=isUsingRemoteDeviceAnalysisNode) bool usingRemoteDeviceAnalysisNode;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (bool)isUsingRemoteDeviceAnalysisNode;
- (unsigned long long)retryCount;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setUsingRemoteDeviceAnalysisNode:(bool)arg1;

@end
