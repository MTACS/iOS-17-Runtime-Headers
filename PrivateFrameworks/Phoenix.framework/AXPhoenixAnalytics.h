
@interface AXPhoenixAnalytics : NSObject {
    unsigned long long  _assetVersion;
    AXPhoenixConfiguration * _configuration;
    NSDateFormatter * _dateFormatter;
    NSString * _modelVersion;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)_descriptionForEventType:(long long)arg1;
- (void)_sendEvent:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1 modelVersion:(id)arg2 assetVersion:(unsigned long long)arg3;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (id)queue;
- (void)setQueue:(id)arg1;

@end
