
@protocol PUCameraImportItemCellDelegate <NSObject>

@required

- (long long)contentFillModeForImportCell:(PUCameraImportItemCell *)arg1;
- (void)handleTouchEvent:(long long)arg1 forCell:(PUCameraImportItemCell *)arg2;
- (void)importCell:(PUCameraImportItemCell *)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (long long)importCell:(void *)arg1 requestImageForImportItem:(void *)arg2 ofSize:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: PUCameraImportItemCell *, PXImportItemViewModel *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, unsigned long long, bool, void*

@end
