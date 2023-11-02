
@interface HMDAccessorySoftwareUpdateApplyEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _advertisedDuration;
    HMDAccessoryMetricVendorDetails * _metricVendorDetails;
    HMFSoftwareVersion * _stagedVersion;
    long long  _status;
    unsigned long long  _totalAllowedDuration;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly) unsigned long long advertisedDuration;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) HMDAccessoryMetricVendorDetails *metricVendorDetails;
@property (nonatomic, readonly) HMFSoftwareVersion *stagedVersion;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long totalAllowedDuration;

+ (id)eventWithMetricVendorDetails:(id)arg1 stagedVersion:(id)arg2 advertisedDuration:(unsigned long long)arg3 totalAllowedDuration:(unsigned long long)arg4 status:(long long)arg5;

- (void).cxx_destruct;
- (unsigned long long)advertisedDuration;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithDetails:(id)arg1 stagedVersion:(id)arg2 advertisedDuration:(unsigned long long)arg3 totalAllowedDuration:(unsigned long long)arg4 status:(long long)arg5;
- (id)metricVendorDetails;
- (id)stagedVersion;
- (long long)status;
- (unsigned long long)totalAllowedDuration;

@end
