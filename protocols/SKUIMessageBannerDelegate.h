
@protocol SKUIMessageBannerDelegate <NSObject>

@required

- (void)askPermissionBannerDidSelect:(SKUIMessageBanner *)arg1;

@optional

- (void)askPermissionBannerDidClear:(SKUIMessageBanner *)arg1;

@end
