
@protocol PXPhotosSectionedLayoutHeader <NSObject>

@required

- (bool)isInSelectMode;
- (PXSelectionSnapshot *)selectionSnapshot;
- (void)setIsInSelectMode:(bool)arg1;
- (void)setSelectionSnapshot:(PXSelectionSnapshot *)arg1;
- (void)setSpec:(PXPhotosLayoutSpec *)arg1;
- (PXPhotosLayoutSpec *)spec;

@end
