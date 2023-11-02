
@protocol SUUIMessageBannerDelegate <NSObject>

@required

- (void)askPermissionBannerDidSelect:(SUUIMessageBanner *)arg1;

@optional

- (void)askPermissionBannerDidClear:(SUUIMessageBanner *)arg1;

@end
