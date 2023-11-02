
@protocol BNBannerHostMonitorListenerObserving <NSObject>

@optional

- (void)bannerHostDidBecomeAvailableForMonitorListener:(BNBannerHostMonitorListener *)arg1;
- (void)bannerHostDidBecomeUnavailableForMonitorListener:(BNBannerHostMonitorListener *)arg1;

@end
