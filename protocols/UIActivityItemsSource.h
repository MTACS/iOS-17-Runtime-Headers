
@protocol UIActivityItemsSource <NSObject>

@required

- (NSArray *)activityViewController:(UIActivityViewController *)arg1 itemsForActivityType:(NSString *)arg2;
- (NSArray *)activityViewControllerPlaceholderItems:(UIActivityViewController *)arg1;

@optional

- (NSArray *)activityViewController:(UIActivityViewController *)arg1 itemsForActivityType:(NSString *)arg2 supportsWebpages:(bool)arg3;

@end
