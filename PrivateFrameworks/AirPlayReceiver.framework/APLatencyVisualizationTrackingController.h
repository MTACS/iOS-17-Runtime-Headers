
@interface APLatencyVisualizationTrackingController : NSObject {
    APLatencyVisualizationLayer * _layer;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

- (void)dealloc;
- (void)draw;
- (id)init:(id)arg1;
- (id)layer;

@end
