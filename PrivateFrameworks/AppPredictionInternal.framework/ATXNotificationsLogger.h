
@interface ATXNotificationsLogger : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    double  _standardSamplingRate;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (double)samplingRateForLogType:(long long)arg1;
- (id)samplingRateFromParsecBag;
- (void)submitWithProtobuf:(id)arg1 logtype:(long long)arg2;

@end
