
@protocol SVVideoAdProviding <SVVideoProviding, SVVideoAdEventTracker>

@required

- (bool)hasAction;
- (double)prerollReadyToPlayTimeout;
- (void)presentAction;
- (unsigned long long)skipThreshold;

@optional

- (UIView *)metricsView;
- (UIButton *)privacyMarker;

@end
