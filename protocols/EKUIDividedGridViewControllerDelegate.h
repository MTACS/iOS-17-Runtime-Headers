
@protocol EKUIDividedGridViewControllerDelegate <NSObject>

@required

- (void)dividedGridViewController:(EKUIDividedGridViewController *)arg1 didSelectCell:(EKUIDividedGridViewCell *)arg2 atIndex:(long long)arg3;
- (void)dividedGridViewControllerDidLayout:(EKUIDividedGridViewController *)arg1;

@end
