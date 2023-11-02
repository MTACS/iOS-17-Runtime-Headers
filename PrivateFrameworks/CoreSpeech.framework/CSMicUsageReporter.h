
@interface CSMicUsageReporter : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)init;
- (id)queue;
- (void)reportMicUsage:(bool)arg1;
- (void)setQueue:(id)arg1;

@end
