
@interface ATXAmbientLightMonitor : NSObject {
    struct __IOHIDEventSystemClient { } * _client;
    double  _lastSampleTimestamp;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _sampledAmbientLightValues;
    int  _sampledAmbientLightValuesCurrentIndex;
    struct __IOHIDServiceClient { } * _sender;
}

+ (int)getAmbientLightTypeForXValue:(double)arg1 YValue:(double)arg2 ZValue:(double)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addSampleWithXValue:(id)arg1 YValue:(id)arg2 ZValue:(id)arg3;
- (void)dealloc;
- (int)getCurrentAmbientLightType;
- (id)getCurrentSampledValues;
- (id)init;
- (id)initWithoutMonitoring;
- (void)start;

@end
