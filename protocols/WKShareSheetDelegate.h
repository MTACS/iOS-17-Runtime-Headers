
@protocol WKShareSheetDelegate <NSObject>

@optional

- (void)shareSheet:(WKShareSheet *)arg1 willShowActivityItems:(NSArray *)arg2;
- (void)shareSheetDidDismiss:(WKShareSheet *)arg1;

@end
