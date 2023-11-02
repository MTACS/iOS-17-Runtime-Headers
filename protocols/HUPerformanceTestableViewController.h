
@protocol HUPerformanceTestableViewController <HUPreloadableViewController>

@required

- (NAFuture *)hu_performanceTestReadyFuture;

@end
