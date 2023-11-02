
@protocol AMUIAmbientViewControlling <NSObject>

@required

- (NSDictionary *)activeConfigurationMetadata;
- (bool)handleDismiss;
- (void)invalidate;
- (void)noteAmbientViewControllingDelegateDidUpdate;
- (bool)updatePosterConfiguration:(PRSPosterConfiguration *)arg1 withAnimationSettings:(BSAnimationSettings *)arg2;

@optional

- (<BSInvalidatable> *)cancelTouchesForCurrentEventInHostedContent;

@end
