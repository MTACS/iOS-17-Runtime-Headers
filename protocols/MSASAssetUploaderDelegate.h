
@protocol MSASAssetUploaderDelegate <NSObject>

@required

- (void)MSASAssetUploader:(MSASAssetUploader *)arg1 didFinishUploadingAssetCollection:(MSASAssetCollection *)arg2 intoAlbum:(MSASAlbum *)arg3 error:(NSError *)arg4;

@end
