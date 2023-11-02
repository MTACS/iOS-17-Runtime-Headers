
@protocol PXPhotosGridActionPerformerDelegate <PXActionPerformerDelegate>

@optional

- (void)photosGridActionPerformer:(PXPhotosGridActionPerformer *)arg1 contentFilterStateChanged:(PXContentFilterState *)arg2;
- (void)photosGridActionPerformer:(PXPhotosGridActionPerformer *)arg1 libraryFilterStateChanged:(PXLibraryFilterState *)arg2;

@end
