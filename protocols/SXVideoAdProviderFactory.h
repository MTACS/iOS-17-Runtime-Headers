
@protocol SXVideoAdProviderFactory <NSObject>

@required

- (<SVVideoAdProviding> *)createVideoAdProviderForComponentView:(SXComponentView *)arg1 videoPlayerViewController:(SVVideoPlayerViewController *)arg2 analyticsReporter:(id <SXAnalyticsReporting>)arg3;

@end
