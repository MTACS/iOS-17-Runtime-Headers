
@interface SLDTaskManager : NSObject {
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (id)initWithSerialQueue:(id)arg1;
- (id)serialQueue;
- (id)startAggregateTask:(id /* block */)arg1 withTimeout:(double)arg2 cancellationHandler:(id /* block */)arg3;
- (void)startSubtask:(id /* block */)arg1 withProgress:(id)arg2 timer:(id)arg3;

@end
