
@interface MRPowerLogger : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedLogger;

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;
- (void)logEvent:(id)arg1 withInfo:(id)arg2;
- (id)queue;

@end
