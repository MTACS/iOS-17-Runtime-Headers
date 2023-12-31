
@protocol HUQuickControlInteractiveContentContaining <NSObject>

@required

- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(UIGestureRecognizer *)arg1;
- (bool)isUserInteractionEnabled;
- (<HULayoutAnchorProviding> *)preferredFrameLayoutGuide;
- (<HUQuickControlContentHosting> *)quickControlHost;
- (void)setPreferredFrameLayoutGuide:(id <HULayoutAnchorProviding>)arg1;
- (void)setQuickControlHost:(id <HUQuickControlContentHosting>)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;

@optional

- (bool)shouldShowContentForReachabilityState:(bool)arg1;

@end
