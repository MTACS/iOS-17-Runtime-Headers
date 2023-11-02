
@protocol UIActivityItemSocialSource <NSObject>

@optional

- (long long)activityViewController:(UIActivityViewController *)arg1 attachmentULRTypeForActivityType:(NSString *)arg2;
- (NSString *)activityViewController:(UIActivityViewController *)arg1 initialSocialTextForActivityType:(NSString *)arg2;
- (UIImage *)activityViewController:(UIActivityViewController *)arg1 thumbnailForActivityType:(NSString *)arg2;

@end
