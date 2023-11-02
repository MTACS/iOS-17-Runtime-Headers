
@interface HKGraphViewTileThread : NSThread {
    HKGraphView * _graphView;
    NSLock * _queueLock;
    NSObject<OS_dispatch_semaphore> * _queueSemaphore;
    NSMutableArray * _rendererQueue;
}

@property (nonatomic) HKGraphView *graphView;
@property (nonatomic, readonly) NSLock *queueLock;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *queueSemaphore;
@property (nonatomic, retain) NSMutableArray *rendererQueue;

- (void).cxx_destruct;
- (bool)_laterRenderingExists:(id)arg1;
- (void)cancel;
- (id)graphView;
- (id)initWithGraphView:(id)arg1;
- (void)main;
- (id)queueLock;
- (id)queueSemaphore;
- (id)rendererQueue;
- (void)scheduleRedrawUsingRenderer:(id)arg1;
- (void)setGraphView:(id)arg1;
- (void)setRendererQueue:(id)arg1;

@end
