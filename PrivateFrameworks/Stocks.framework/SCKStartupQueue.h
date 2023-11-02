
@interface SCKStartupQueue : NSObject {
    SCKAsyncSerialQueue * _startupTaskQueue;
}

@property (nonatomic, retain) SCKAsyncSerialQueue *startupTaskQueue;

- (void).cxx_destruct;
- (void)enqueueStartupBlock:(id /* block */)arg1;
- (void)executeAfterStartup:(id /* block */)arg1;
- (id)initWithDeferredStartup:(bool)arg1;
- (void)setStartupTaskQueue:(id)arg1;
- (id)startupTaskQueue;

@end
