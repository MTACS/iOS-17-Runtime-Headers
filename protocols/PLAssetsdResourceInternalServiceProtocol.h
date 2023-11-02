
@protocol PLAssetsdResourceInternalServiceProtocol <NSObject>

@required

- (void)asynchronousMasterThumbnailForAssetUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSData *, NSError *, void*
- (void)batchSaveAssetJobs:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)cancelAllPrewarmingWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)prewarmWithCapturePhotoSettings:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: PLAbstractEncodableObject<PLCapturePhotoSettings> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
