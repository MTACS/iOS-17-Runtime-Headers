
@interface ARMemoryPressureMonitor : NSObject {
    <ARMemoryPressureMonitorDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _memoryPressureEventSource;
}

@property (nonatomic) <ARMemoryPressureMonitorDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
