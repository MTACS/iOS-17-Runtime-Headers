
@interface AXPhoenixDataLogger : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)init;
- (void)logClassifierData:(id)arg1 isDoubleTap:(bool)arg2 startTime:(double)arg3 endTime:(double)arg4 completion:(id /* block */)arg5;
- (id)queue;
- (void)setQueue:(id)arg1;

@end
