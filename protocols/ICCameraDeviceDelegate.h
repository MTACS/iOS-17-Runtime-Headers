
@protocol ICCameraDeviceDelegate <ICDeviceDelegate>

@required

- (void)cameraDevice:(ICCameraDevice *)arg1 didAddItems:(NSArray *)arg2;
- (void)cameraDevice:(ICCameraDevice *)arg1 didReceiveMetadata:(NSDictionary *)arg2 forItem:(ICCameraItem *)arg3 error:(NSError *)arg4;
- (void)cameraDevice:(ICCameraDevice *)arg1 didReceivePTPEvent:(NSData *)arg2;
- (void)cameraDevice:(ICCameraDevice *)arg1 didReceiveThumbnail:(struct CGImage { }*)arg2 forItem:(ICCameraItem *)arg3 error:(NSError *)arg4;
- (void)cameraDevice:(ICCameraDevice *)arg1 didRemoveItems:(NSArray *)arg2;
- (void)cameraDevice:(ICCameraDevice *)arg1 didRenameItems:(NSArray *)arg2;
- (void)cameraDeviceDidChangeCapability:(ICCameraDevice *)arg1;
- (void)cameraDeviceDidEnableAccessRestriction:(ICDevice *)arg1;
- (void)cameraDeviceDidRemoveAccessRestriction:(ICDevice *)arg1;
- (void)deviceDidBecomeReadyWithCompleteContentCatalog:(ICCameraDevice *)arg1;

@optional

- (void)cameraDevice:(ICCameraDevice *)arg1 didAddItem:(ICCameraItem *)arg2;
- (void)cameraDevice:(ICCameraDevice *)arg1 didCompleteDeleteFilesWithError:(NSError *)arg2;
- (void)cameraDevice:(ICCameraDevice *)arg1 didReceiveMetadataForItem:(ICCameraItem *)arg2;
- (void)cameraDevice:(ICCameraDevice *)arg1 didReceiveThumbnailForItem:(ICCameraItem *)arg2;
- (void)cameraDevice:(ICCameraDevice *)arg1 didRemoveItem:(ICCameraItem *)arg2;
- (bool)cameraDevice:(ICCameraDevice *)arg1 shouldGetMetadataOfItem:(ICCameraItem *)arg2;
- (bool)cameraDevice:(ICCameraDevice *)arg1 shouldGetThumbnailOfItem:(ICCameraItem *)arg2;

@end
