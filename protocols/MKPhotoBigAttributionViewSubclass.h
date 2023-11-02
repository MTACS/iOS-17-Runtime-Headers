
@protocol MKPhotoBigAttributionViewSubclass <NSObject>

@required

- (void)didEndAnimatingActivityIndicatorView;
- (void)didUpdateAttributionViewType;
- (void)didUpdateMapItem;
- (void)willStartAnimatingActivityIndicatorView;

@end
