
@protocol PXActivityDataSource <NSObject>

@optional

- (NSArray *)activityItemsForActivity:(UIActivity *)arg1;
- (UIActivityViewController *)activityViewControllerForActivity:(UIActivity *)arg1;

@end
