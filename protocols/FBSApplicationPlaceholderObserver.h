
@protocol FBSApplicationPlaceholderObserver <NSObject>

@optional

- (void)placeholderDidChangeSignificantly:(FBSApplicationPlaceholder *)arg1;
- (void)placeholderPercentCompleteDidChange:(FBSApplicationPlaceholder *)arg1;
- (void)placeholderProgressDidUpdate:(FBSApplicationPlaceholder *)arg1;

@end
