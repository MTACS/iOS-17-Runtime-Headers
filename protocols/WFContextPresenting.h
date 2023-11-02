
@protocol WFContextPresenting <WFProviderContext>

@required

- (bool)needsDismissal;
- (UIViewController<WFNetworkView> *)provider;
- (void)setProvider:(UIViewController<WFNetworkView> *)arg1;

@end
