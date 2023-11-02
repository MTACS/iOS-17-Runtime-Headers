
@protocol SearchUICommandDelegate <NSObject>

@required

- (bool)canPerformCommand:(SFCommand *)arg1;
- (void)performCommand:(SFCommand *)arg1;

@optional

- (UIViewController *)customViewControllerForResult:(SFSearchResult *)arg1;
- (bool)hasCustomViewControllerForResult:(SFSearchResult *)arg1;

@end
