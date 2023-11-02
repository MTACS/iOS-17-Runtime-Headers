
@interface ACUISActivitySceneDescriptor : NSObject <NSCopying> {
    ACActivityDescriptor * _activityDescriptor;
    NSData * _activityDescriptorData;
    long long  _activitySceneType;
    ACUISActivityMetricsRequest * _metricsRequest;
    NSString * _payloadIdentifier;
    bool  _useFallbackMetrics;
}

@property (nonatomic, readonly, copy) ACActivityDescriptor *activityDescriptor;
@property (nonatomic, readonly, copy) NSData *activityDescriptorData;
@property (nonatomic, readonly, copy) NSString *activityIdentifier;
@property (nonatomic, readonly) long long activitySceneType;
@property (nonatomic, readonly) ACUISActivitySceneMetrics *metrics;
@property (nonatomic, readonly) ACUISActivityMetricsRequest *metricsRequest;
@property (nonatomic, readonly, copy) NSString *payloadIdentifier;
@property (nonatomic) bool useFallbackMetrics;

- (void).cxx_destruct;
- (id)_activitySceneDescriptor;
- (id)activityDescriptor;
- (id)activityDescriptorData;
- (id)activityIdentifier;
- (long long)activitySceneType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithActivityDescriptor:(id)arg1 payloadIdentifier:(id)arg2 activitySceneType:(long long)arg3 metricsRequest:(id)arg4;
- (id)initWithActivitySceneDescriptor:(id)arg1 acActivityDescriptor:(id)arg2;
- (id)metrics;
- (id)metricsRequest;
- (id)payloadIdentifier;
- (void)setUseFallbackMetrics:(bool)arg1;
- (bool)useFallbackMetrics;

@end
