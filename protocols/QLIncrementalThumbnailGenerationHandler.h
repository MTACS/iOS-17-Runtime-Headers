
@protocol QLIncrementalThumbnailGenerationHandler

@required

- (void)didGenerateThumbnailForRequestWithUUID:(NSUUID *)arg1 data:(NSData *)arg2 bitmapFormat:(QLTBitmapFormat *)arg3 metadata:(NSData *)arg4 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 iconFlavor:(int)arg6 thumbnailType:(long long)arg7 clientShouldTakeOwnership:(bool)arg8;
- (void)didUpdateStatus:(long long)arg1 ofThumbnailGenerationWithUUID:(NSUUID *)arg2;
- (void)failedToGenerateThumbnailOfType:(long long)arg1 forRequestWithUUID:(NSUUID *)arg2 error:(NSError *)arg3;

@end
