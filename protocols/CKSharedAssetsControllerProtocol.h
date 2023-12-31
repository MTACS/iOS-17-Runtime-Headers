
@protocol CKSharedAssetsControllerProtocol <NSObject>

@required

- (unsigned long long)assetType;
- (struct CGSize { double x1; double x2; })contentSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (<CKSharedAssetsControllerDelegate> *)delegate;
- (bool)isDisplayingAttachmentContent;
- (void)parentScrollViewDidScroll:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id <CKSharedAssetsControllerDelegate>)arg1;
- (void)updateAttachmentItems:(NSArray *)arg1;

@end
