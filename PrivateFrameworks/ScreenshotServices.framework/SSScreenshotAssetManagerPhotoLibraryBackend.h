
@interface SSScreenshotAssetManagerPhotoLibraryBackend : NSObject <SSScreenshotAssetManagerBackend> {
    PHPhotoLibrary * _photoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_gameHighlightsImageDataFromImage:(id)arg1 withOptions:(id)arg2;
+ (id)_gameHighlightsImageDataFromImageData:(id)arg1 withOptions:(id)arg2;
+ (id)imageDataFromImage:(id)arg1 withProperties:(id)arg2;

- (void).cxx_destruct;
- (id)_ARKitImageDataFromImage:(id)arg1;
- (void)_registerEntryWithImage:(id)arg1 options:(id)arg2 retry:(bool)arg3 identifierHandler:(id /* block */)arg4;
- (void)imageForPreviouslyRegisteredIdentifier:(id)arg1 imageHandler:(id /* block */)arg2;
- (id)photoLibrary;
- (void)registerEntryWithImage:(id)arg1 options:(id)arg2 identifierHandler:(id /* block */)arg3;
- (void)removeEntryWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveImageToTemporaryLocation:(id)arg1 withName:(id)arg2 imageDescription:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)updateImageData:(id)arg1 withModificationData:(id)arg2 forEntryWithIdentifier:(id)arg3 registrationOptions:(id)arg4 imageDescription:(id)arg5 completionHandler:(id /* block */)arg6;

@end
