
@interface ActivityUIServices.ActivitySceneDescriptor : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  activityDescriptor;
    void activityDescriptorData;
    void activityIdentifier;
    void activitySceneType;
    void metricsRequest;
    void payloadID;
}

@property (nonatomic, readonly) NSData *activityDescriptor;
@property (nonatomic, readonly) NSData *activityDescriptorData;
@property (nonatomic, readonly) NSString *activityIdentifier;
@property (nonatomic, readonly) long long activitySceneType;
@property (nonatomic, readonly) _TtC18ActivityUIServices20ActivitySceneMetrics *metrics;
@property (nonatomic, readonly) _TtC18ActivityUIServices22ActivityMetricsRequest *metricsRequest;
@property (nonatomic, readonly) NSString *payloadID;

- (void).cxx_destruct;
- (id)activityDescriptor;
- (id)activityDescriptorData;
- (id)activityIdentifier;
- (long long)activitySceneType;
- (id)init;
- (id)initWithActivitySceneType:(long long)arg1 activityDescriptor:(id)arg2 metricsRequest:(id)arg3 payloadID:(id)arg4;
- (id)metrics;
- (id)metricsRequest;
- (id)payloadID;

@end
