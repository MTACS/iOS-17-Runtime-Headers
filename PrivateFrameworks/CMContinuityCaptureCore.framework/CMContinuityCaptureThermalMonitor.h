
@interface CMContinuityCaptureThermalMonitor : NSObject {
    bool  _invalidated;
    NSObject<OS_dispatch_queue> * _queue;
    int  _registrationToken;
    unsigned long long  _thermalLevel;
}

@property (nonatomic) bool invalidated;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long thermalLevel;

+ (void)invalidate;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_thermalNotification:(unsigned long long)arg1;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (bool)invalidated;
- (id)queue;
- (void)setInvalidated:(bool)arg1;
- (bool)setupNotification;
- (unsigned long long)thermalLevel;

@end
