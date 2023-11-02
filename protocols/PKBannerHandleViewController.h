
@protocol PKBannerHandleViewController <PKBannerViewController>

@required

- (PKBannerHandleState *)bannerState;
- (bool)isBannerDetached;
- (void)setBannerDetached:(bool)arg1;
- (void)setBannerState:(PKBannerHandleState *)arg1;

@end
