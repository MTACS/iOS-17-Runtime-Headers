
@interface MSCameraDeviceManager : ICDeviceManager

- (long long)checkFile:(id)arg1 andDevice:(id)arg2;
- (struct CGSize { double x1; double x2; })cropThumbSize:(struct CGSize { double x1; double x2; })arg1 fullSize:(struct CGSize { double x1; double x2; })arg2 finalSize:(struct CGSize { double x1; double x2; })arg3;
- (void)deleteFileImp:(id)arg1;
- (id)deviceManagerConnection;
- (void)downloadFileImp:(id)arg1;
- (void)ejectImp:(id)arg1;
- (void)executeCompletionBlockWithErrorCode:(long long)arg1 info:(id)arg2 file:(id)arg3 completionDict:(id)arg4 completionBlk:(id /* block */)arg5;
- (void)getFileDataImp:(id)arg1;
- (void)getFileMetadataImp:(id)arg1;
- (void)getFileThumbnailImp:(id)arg1;
- (void)getSecurityScopedURLImp:(id)arg1;
- (void)notifyAddedItems:(id)arg1;
- (void)notifyPtpEvent:(id)arg1;
- (void)notifyRemovedItems:(id)arg1;
- (void)notifyStatus:(id)arg1;
- (void)notifyUpdatedItems:(id)arg1;
- (void)refreshObjectHandleInfoImp:(id)arg1;
- (struct CGImage { }*)removeLetterboxFromThumbnail:(struct CGImage { }*)arg1 fullSize:(struct CGSize { double x1; double x2; })arg2;
- (void)startDeviceWithHandle:(id)arg1;
- (void)syncClockImp:(id)arg1;
- (void)updateCameraFile:(id)arg1 withInfo:(id)arg2;
- (void)updateCameraFolder:(id)arg1 withInfo:(id)arg2;

@end
