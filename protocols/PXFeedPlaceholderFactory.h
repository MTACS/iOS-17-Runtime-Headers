
@protocol PXFeedPlaceholderFactory

@required

- (UIView *)createPlaceholderViewForFeedWithViewModel:(PXFeedViewModel *)arg1;
- (bool)supportsDynamicPlaceholderContentSize;

@end
