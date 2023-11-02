
@protocol MSDMapViewControllerDelegate <NSObject>

@required

- (void)didDeselectStores:(NSArray *)arg1 forViewController:(MSDMapViewController *)arg2;
- (void)didSelectStores:(NSArray *)arg1 forViewController:(MSDMapViewController *)arg2;
- (void)userLocationDidChange:(CLLocation *)arg1;

@end
