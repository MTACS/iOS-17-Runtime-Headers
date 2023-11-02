
@protocol BNBannerClientContainerDelegate <NSObject>

@required

- (bool)bannerClientContainerShouldDeferFocus:(id <BNBannerClientContainer>)arg1;
- (void)bannerClientContainerStoppedDeferringFocus:(id <BNBannerClientContainer>)arg1;

@end
