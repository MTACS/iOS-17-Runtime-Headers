
@protocol ACM2SVTrustedDevicesViewControllerDelegate <NSObject>

@required

- (void)cancelInProgressImageDownloads;
- (void)downloadImageWithURL:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)trustedDevicesViewControllerDidSelectUnableReceiveMessages:(ACM2SVTrustedDevicesViewController *)arg1;
- (void)trustedDevicesViewControllerNeedsRefresh:(ACM2SVTrustedDevicesViewController *)arg1;

@end
