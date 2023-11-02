
@protocol ICDocCamThumbnailViewDelegate <NSObject>

@required

- (void)addNewDocument:(ICDocCamDocumentInfo *)arg1;
- (UIView *)rootView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetViewRect;
- (void)thumbnailViewDidTap:(NSIndexPath *)arg1;

@end
