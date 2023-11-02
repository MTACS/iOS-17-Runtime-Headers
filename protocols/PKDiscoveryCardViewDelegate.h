
@protocol PKDiscoveryCardViewDelegate <NSObject>

@required

- (void)discoveryCardViewCTATapped:(UIView *)arg1 callToAction:(PKDiscoveryCallToAction *)arg2 itemIdentifier:(NSString *)arg3;

@optional

- (void)discoveryCardViewRemoveTapped:(PKDiscoveryCardView *)arg1;
- (void)discoveryCardViewTapped:(PKDiscoveryCardView *)arg1;

@end
