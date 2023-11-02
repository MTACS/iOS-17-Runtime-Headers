
@protocol PXPhotosGlobalFooterViewDelegate <NSObject>

@required

- (void)photosGlobalFooterView:(PXPhotosGlobalFooterView *)arg1 presentViewController:(NSObject<PXAnonymousViewController> *)arg2;

@optional

- (void)photosGlobalFooterViewDidChangeHeight:(PXPhotosGlobalFooterView *)arg1;
- (void)photosGlobalFooterViewDidMoveToWindow:(PXPhotosGlobalFooterView *)arg1;

@end
