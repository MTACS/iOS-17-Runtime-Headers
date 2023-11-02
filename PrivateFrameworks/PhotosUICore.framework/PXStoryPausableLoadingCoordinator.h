
@interface PXStoryPausableLoadingCoordinator : NSObject <PXStoryLoadingCoordinator> {
    NSObject<OS_dispatch_group> * _timelineWorkGroup;
}

- (void).cxx_destruct;
- (void)dispatchTimelineWorkAsyncOnQueue:(id)arg1 block:(id /* block */)arg2;
- (id)init;
- (void)pauseTimelineWork;
- (void)resumeTimelineWork;

@end
