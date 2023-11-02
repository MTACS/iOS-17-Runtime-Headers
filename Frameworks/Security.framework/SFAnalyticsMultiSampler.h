
@interface SFAnalyticsMultiSampler : NSObject {
    bool  _activeTimer;
    id /* block */  _block;
    Class  _clientClass;
    NSString * _name;
    int  _notificationToken;
    bool  _oncePerReport;
    double  _samplingInterval;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool oncePerReport;
@property (nonatomic) double samplingInterval;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)arg1 interval:(double)arg2 block:(id /* block */)arg3 clientClass:(Class)arg4;
- (id)name;
- (void)newTimer;
- (bool)oncePerReport;
- (void)pauseSampling;
- (void)resumeSampling;
- (id)sampleNow;
- (double)samplingInterval;
- (void)setSamplingInterval:(double)arg1;
- (void)setupOnceTimer;
- (void)setupPeriodicTimer;

@end
