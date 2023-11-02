
@protocol _UIBarButtonItemGroupOwner <NSObject>

@required

- (void)_groupDidUpdateItems:(UIBarButtonItemGroup *)arg1 removedItems:(NSArray *)arg2;
- (void)_groupDidUpdateRepresentative:(UIBarButtonItemGroup *)arg1 fromRepresentative:(UIBarButtonItem *)arg2;
- (void)_groupDidUpdateVisibility:(UIBarButtonItemGroup *)arg1;

@optional

- (void)_groupNeedsNSToolbarUpdate:(UIBarButtonItemGroup *)arg1;

@end
